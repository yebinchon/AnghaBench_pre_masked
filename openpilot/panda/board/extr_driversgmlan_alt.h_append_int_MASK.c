
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ val ;



int FUNC_0(char *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
  int VAR_4 = VAR_1;
  for (int VAR_5 = VAR_3 - 1; VAR_5 >= 0; VAR_5--) {
    VAR_0[VAR_4] = ((unsigned int)(VAR_2) & (1U << (unsigned int)(VAR_5))) != 0U;
    VAR_4++;
  }
  return VAR_4;
}
