
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;



void FUNC_0(uint8* VAR_0, uint8* VAR_1, int VAR_2)
{
  VAR_0 = (VAR_0 + VAR_2) - 1;
  VAR_1 = (VAR_1 + VAR_2) - 1;
  while (VAR_2 & (~7))
  {
    *(VAR_0--) = *(VAR_1--);
    *(VAR_0--) = *(VAR_1--);
    *(VAR_0--) = *(VAR_1--);
    *(VAR_0--) = *(VAR_1--);
    *(VAR_0--) = *(VAR_1--);
    *(VAR_0--) = *(VAR_1--);
    *(VAR_0--) = *(VAR_1--);
    *(VAR_0--) = *(VAR_1--);
    VAR_2 = VAR_2 - 8;
  }
  while (VAR_2 > 0)
  {
    *(VAR_0--) = *(VAR_1--);
    VAR_2--;
  }
}
