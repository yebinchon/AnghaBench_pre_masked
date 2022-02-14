
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;



__attribute__((used)) static int FUNC_0(uint8 * VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
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
  else
    return 0;
}
