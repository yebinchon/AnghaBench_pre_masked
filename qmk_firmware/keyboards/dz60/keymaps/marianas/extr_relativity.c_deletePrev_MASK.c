
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;

void FUNC_2(void)
{
  if (VAR_2 == 0 && VAR_1[VAR_2] == 0)
    return;
  for (int VAR_5 = 0; VAR_5 < VAR_1[VAR_2]; VAR_5++)
  {
      FUNC_0(VAR_0);
      FUNC_1(VAR_0);
  }
  VAR_1[VAR_2] = 0;
  int VAR_6 = 1;
  for (;VAR_6 < VAR_4-1; VAR_6++)
  {
    if (VAR_3[VAR_6] == 0x0)
    {
      break;
    }
  }
  VAR_3[VAR_6-1] = 0x0;
  if (VAR_2 > 0)
  {
    VAR_2--;
  }
}
