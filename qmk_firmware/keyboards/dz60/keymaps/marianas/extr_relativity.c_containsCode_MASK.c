
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;

bool FUNC_0(uint16_t VAR_2)
{
  for (int VAR_3 = 0; VAR_3 < VAR_1 && VAR_0[VAR_3] > 0; VAR_3++)
  {
    if (VAR_0[VAR_3] == VAR_2) return 1;
  }
  return 0;
}
