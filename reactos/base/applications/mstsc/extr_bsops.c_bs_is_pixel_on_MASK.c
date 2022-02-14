
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(char * VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
  int VAR_5;
  int VAR_6;

  if (VAR_4 == 1)
  {
    VAR_3 = (VAR_3 + 7) / 8;
    VAR_5 = (VAR_2 * VAR_3) + VAR_1 / 8;
    VAR_6 = VAR_1 % 8;
    return (VAR_0[VAR_5] & (0x80 >> VAR_6)) != 0;
  }
  else if (VAR_4 == 8)
  {
    return VAR_0[VAR_2 * VAR_3 + VAR_1] != 0;
  }
  else if (VAR_4 == 15 || VAR_4 == 16)
  {
    return VAR_0[(VAR_2 * 2) * VAR_3 + (VAR_1 * 2)] != 0 ||
           VAR_0[(VAR_2 * 2) * VAR_3 + (VAR_1 * 2) + 1] != 0;
  }
  else if (VAR_4 == 24 || VAR_4 == 32)
  {
    return VAR_0[(VAR_2 * 4) * VAR_3 + (VAR_1 * 4)] != 0 ||
           VAR_0[(VAR_2 * 4) * VAR_3 + (VAR_1 * 4) + 1] != 0 ||
           VAR_0[(VAR_2 * 4) * VAR_3 + (VAR_1 * 4) + 2] != 0 ||
           VAR_0[(VAR_2 * 4) * VAR_3 + (VAR_1 * 4) + 3] != 0;
  }
  else
  {
    return 0;
  }
}
