
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ OsIndex; } ;
typedef size_t SIZE_T ;
typedef TYPE_1__* PKKLL_M_MEMORY_GENERIC ;


 scalar_t__ VAR_0 ;

PKKLL_M_MEMORY_GENERIC FUNC_0(PKKLL_M_MEMORY_GENERIC VAR_1, SIZE_T VAR_2)
{
 SIZE_T VAR_3;
 for(VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if(VAR_1[VAR_3].OsIndex == VAR_0)
   return VAR_1 + VAR_3;
 return ((void*)0);
}
