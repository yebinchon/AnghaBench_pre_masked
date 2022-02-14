
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ startup_cost; scalar_t__ total_cost; } ;
typedef TYPE_1__ Path ;
typedef scalar_t__ CostSelector ;


 scalar_t__ VAR_0 ;

int
FUNC_0(Path *VAR_1, Path *VAR_2, CostSelector VAR_3)
{
 if (VAR_3 == VAR_0)
 {
  if (VAR_1->startup_cost < VAR_2->startup_cost)
   return -1;
  if (VAR_1->startup_cost > VAR_2->startup_cost)
   return +1;





  if (VAR_1->total_cost < VAR_2->total_cost)
   return -1;
  if (VAR_1->total_cost > VAR_2->total_cost)
   return +1;
 }
 else
 {
  if (VAR_1->total_cost < VAR_2->total_cost)
   return -1;
  if (VAR_1->total_cost > VAR_2->total_cost)
   return +1;




  if (VAR_1->startup_cost < VAR_2->startup_cost)
   return -1;
  if (VAR_1->startup_cost > VAR_2->startup_cost)
   return +1;
 }
 return 0;
}
