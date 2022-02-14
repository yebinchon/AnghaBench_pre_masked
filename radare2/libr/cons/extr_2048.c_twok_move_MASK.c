
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int** VAR_2 ;

__attribute__((used)) static void FUNC_1(int VAR_3, int VAR_4) {
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 int VAR_12 = 0;
 for (VAR_7 = 0; VAR_7 < 4; ++VAR_7) {
  for (VAR_5 = 0; VAR_5 < 4; ++VAR_5) {
   for (VAR_6 = VAR_5 + 1; VAR_6 < 4 && !VAR_2[VAR_9 = VAR_3 ? VAR_7 : VAR_4 ? VAR_6 : 3 - VAR_6][VAR_11 = !VAR_3 ? VAR_7 : VAR_4 ? VAR_6 : 3 - VAR_6]; ++VAR_6) {
    ;
   }
   if (VAR_6 == 4) {
    continue;
   }
   VAR_8 = VAR_3? VAR_7: VAR_4? VAR_5: 3 - VAR_5;
   VAR_10 = !VAR_3? VAR_7: VAR_4? VAR_5: 3 - VAR_5;
   if (!VAR_2[VAR_8][VAR_10]) {
    VAR_2[VAR_8][VAR_10] = VAR_2[VAR_9][VAR_11];
    VAR_2[VAR_9][VAR_11] = 0;
    --VAR_5;
    VAR_12 = 1;
   } else if (VAR_2[VAR_8][VAR_10] == VAR_2[VAR_9][VAR_11]) {
    VAR_1 += 1 << ++VAR_2[VAR_8][VAR_10];
    VAR_2[VAR_9][VAR_11] = 0;
    VAR_12 = 1;
   }
  }
 }
 if (VAR_12) {
  FUNC_0 ();
  VAR_0++;
 }
}
