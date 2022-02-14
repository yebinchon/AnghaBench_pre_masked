
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(char *VAR_0, char *VAR_1, int VAR_2) {
  int VAR_3 = -1;
  int VAR_4 = 0;
  int VAR_5 = 0;
  for (int VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    char VAR_7 = VAR_1[VAR_6];
    VAR_0[VAR_5] = VAR_7;
    VAR_5++;


    if (VAR_7 == VAR_3) {
      VAR_4++;
      if (VAR_4 == 5) {

        VAR_3 = !VAR_7;
        VAR_0[VAR_5] = VAR_3;
        VAR_5++;
        VAR_4 = 1;
      }
    } else {

      VAR_3 = VAR_7;
      VAR_4 = 1;
    }
  }
  return VAR_5;
}
