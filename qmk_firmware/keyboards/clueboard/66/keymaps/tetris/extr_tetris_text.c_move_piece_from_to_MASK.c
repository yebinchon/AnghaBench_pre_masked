
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char VAR_0[7][7], char VAR_1[7][7], int VAR_2, int VAR_3) {
  for (int VAR_4 = 0; VAR_4 < 7; VAR_4++) {
    for (int VAR_5 = 0; VAR_5 < 7; VAR_5++) {
      if (VAR_5 + VAR_2 >= 0 && VAR_5 + VAR_2 < 7 && VAR_4 + VAR_3 >= 0 && VAR_4 + VAR_3 < 7) {
        VAR_1[VAR_4][VAR_5] = VAR_0[VAR_4 + VAR_3][VAR_5 + VAR_2];
      } else {
        VAR_1[VAR_4][VAR_5] = 0;
      }
    }
  }
}
