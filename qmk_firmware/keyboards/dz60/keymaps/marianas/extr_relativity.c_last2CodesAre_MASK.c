
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;

bool FUNC_0(uint16_t VAR_2, uint16_t VAR_3)
{
  for (int VAR_4 = 0; VAR_4 < VAR_1-2 && VAR_0[VAR_4] > 0; VAR_4++)
  {
    if (VAR_0[VAR_4] == VAR_2 && VAR_0[VAR_4+1] == VAR_3 && VAR_0[VAR_4+2] == 0) return 1;
  }
  return 0;
}
