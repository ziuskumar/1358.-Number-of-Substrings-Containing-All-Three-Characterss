class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> lastSeen(3, -1);
        int count = 0;

        for(int i = 0; i < s.size(); i++) {

            lastSeen[s[i] - 'a'] = i;

            int minIndex = min(lastSeen[0], min(lastSeen[1], lastSeen[2]));

            if(minIndex != -1)
                count += minIndex + 1;
        }

        return count;
    }
};








// class Solution {
// public:
//     int numberOfSubstrings(string s) {
        
//         int cnt = 0;
//         int n = s.size();

//         for(int i=0; i<n; i++){
//             int hash[3] = {0};
//             for(int j=i; j<n; j++){
//                 hash[s[j] - 'a'] = 1;

//                 if(hash[0] + hash[1] + hash[2] == 3){
//                     cnt ++;
//                 }
//             }
//         }
//         return cnt;
//     }
// };
