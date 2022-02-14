
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (int const) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1 (const ut8 *VAR_1, int VAR_2, int *VAR_3) {
 int VAR_4;
 if (VAR_2 < 1) {
  return 0;
 }
 if (VAR_2 > 3 && VAR_1[0] && !VAR_1[1] && VAR_1[2] && !VAR_1[3]) {
  *VAR_3 = 1;
  return 2;
 }
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!VAR_1[VAR_4] && VAR_4 > VAR_0) {
   *VAR_3 = VAR_4;
   return 1;
  }
  if (VAR_1[VAR_4] == 10|| VAR_1[VAR_4] == 13|| VAR_1[VAR_4] == 9) {
   continue;
  }
  if (VAR_1[VAR_4] < 32 || VAR_1[VAR_4] > 127) {

   return 0;
  }
  if (!FUNC_0 (VAR_1[VAR_4])) {
   *VAR_3 = VAR_4;
   return 0;
  }
 }
 *VAR_3 = VAR_4;
 return 1;
}
