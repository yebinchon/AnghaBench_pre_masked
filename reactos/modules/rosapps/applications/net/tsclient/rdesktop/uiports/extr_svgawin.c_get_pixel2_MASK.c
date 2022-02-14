
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;



int FUNC_0(int VAR_0, int VAR_1, uint8* VAR_2, int VAR_3, int VAR_4)
{
  if (VAR_4 == 8)
    return VAR_2[VAR_1 * VAR_3 + VAR_0];
  else if (VAR_4 == 16)
    return ((uint16*)VAR_2)[VAR_1 * VAR_3 + VAR_0];
  else
    return 0;
}
