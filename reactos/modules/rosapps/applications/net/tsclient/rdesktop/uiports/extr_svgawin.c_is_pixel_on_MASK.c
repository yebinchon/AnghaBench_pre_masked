
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int BOOL ;


 int VAR_0 ;

BOOL FUNC_0(uint8* VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
  int VAR_6;
  int VAR_7;

  if (VAR_5 == 1)
  {
    VAR_4 = (VAR_4 + 7) / 8;
    VAR_6 = (VAR_3 * VAR_4) + VAR_2 / 8;
    VAR_7 = VAR_2 % 8;
    return (VAR_1[VAR_6] & (0x80 >> VAR_7)) != 0;
  }
  else if (VAR_5 == 8)
  {
    return VAR_1[VAR_3 * VAR_4 + VAR_2] != 0;
  }
  else if (VAR_5 == 24)
  {
    return VAR_1[(VAR_3 * 3) * VAR_4 + (VAR_2 * 3)] != 0 &&
           VAR_1[(VAR_3 * 3) * VAR_4 + (VAR_2 * 3) + 1] != 0 &&
           VAR_1[(VAR_3 * 3) * VAR_4 + (VAR_2 * 3) + 2] != 0;
  }
  else
    return VAR_0;
}
