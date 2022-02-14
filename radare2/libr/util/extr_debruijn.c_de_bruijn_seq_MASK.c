
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(int VAR_0, int VAR_1, int VAR_2,
  int VAR_3, int VAR_4, int* VAR_5, char* VAR_6, const char* VAR_7) {
 int VAR_8;
 if (!VAR_7 || !VAR_6 || FUNC_0 (VAR_6) == VAR_3) {
  return;
 }
 if (VAR_0 > VAR_2) {
  if (VAR_2 % VAR_1 == 0) {
   for (VAR_8 = 1; VAR_8 <= VAR_1; ++VAR_8) {
    VAR_6[FUNC_0(VAR_6)] = VAR_7[VAR_5[VAR_8]];
    if (FUNC_0 (VAR_6) == VAR_3) {
     return;
    }
   }
  }
 } else {
  VAR_5[VAR_0] =
   VAR_5[VAR_0 - VAR_1];
  FUNC_1(VAR_0 + 1, VAR_1, VAR_2, VAR_3,
    VAR_4, VAR_5, VAR_6, VAR_7);
  for (VAR_8 = VAR_5[VAR_0 - VAR_1] + 1;
    VAR_8 < VAR_4; ++VAR_8) {
   VAR_5[VAR_0] = VAR_8;
   FUNC_1 (VAR_0 + 1, VAR_0, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7);
  }
 }
}
