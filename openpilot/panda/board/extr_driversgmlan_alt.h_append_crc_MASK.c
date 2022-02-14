
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(char *VAR_0, int VAR_1) {
  unsigned int VAR_2 = 0;
  for (int VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    VAR_2 <<= 1;
    if (((unsigned int)(VAR_0[VAR_3]) ^ ((VAR_2 >> 15) & 1U)) != 0U) {
      VAR_2 = VAR_2 ^ 0x4599U;
    }
    VAR_2 &= 0x7fffU;
  }
  int VAR_4 = VAR_1;
  for (int VAR_5 = 14; VAR_5 >= 0; VAR_5--) {
    VAR_0[VAR_4] = (VAR_2 >> (unsigned int)(VAR_5)) & 1U;
    VAR_4++;
  }
  return VAR_4;
}
