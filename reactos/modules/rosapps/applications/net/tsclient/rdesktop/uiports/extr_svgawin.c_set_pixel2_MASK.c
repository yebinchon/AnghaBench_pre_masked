
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;



void FUNC_0(int VAR_0, int VAR_1, int VAR_2, uint8* VAR_3, int VAR_4, int VAR_5)
{
  if (VAR_5 == 8)
    VAR_3[VAR_1 * VAR_4 + VAR_0] = VAR_2;
  else if (VAR_5 == 16)
    ((uint16*)VAR_3)[VAR_1 * VAR_4 + VAR_0] = VAR_2;
}
