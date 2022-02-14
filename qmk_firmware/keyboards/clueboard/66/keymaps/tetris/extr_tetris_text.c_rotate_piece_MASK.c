
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char VAR_0[7][7]) {

  for (int VAR_1 = 0; VAR_1 < 7; VAR_1++) {
    for (int VAR_2 = VAR_1 + 1; VAR_2 < 7; VAR_2++) {
      char VAR_3 = VAR_0[VAR_1][VAR_2];
      VAR_0[VAR_1][VAR_2] = VAR_0[VAR_2][VAR_1];
      VAR_0[VAR_2][VAR_1] = VAR_3;
    }
  }


  for (int VAR_4 = 0; VAR_4 < 7; VAR_4++) {
    for (int VAR_5 = 0; VAR_5 < 3; VAR_5++) {
      char VAR_6 = VAR_0[VAR_4][6 - VAR_5];
      VAR_0[VAR_4][6 - VAR_5] = VAR_0[VAR_4][VAR_5];
      VAR_0[VAR_4][VAR_5] = VAR_6;
    }
  }
}
