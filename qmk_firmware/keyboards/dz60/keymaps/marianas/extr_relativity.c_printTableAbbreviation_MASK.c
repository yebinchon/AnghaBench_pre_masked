
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int* VAR_0 ;
 int VAR_1 ;

void FUNC_1(void)
{
  if (VAR_0[0] == 0)
  {
    return;
  }
  FUNC_0(0x20);
  int VAR_2 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_1 && VAR_0[VAR_2] > 0; VAR_2++)
  {
    if (VAR_0[VAR_2] >= 65 && VAR_0[VAR_2] <= 90)
    {
      FUNC_0(VAR_0[VAR_2]+32);
    }
    else
    {
      FUNC_0(VAR_0[VAR_2]);
    }
  }
  FUNC_0(0x20);
}
