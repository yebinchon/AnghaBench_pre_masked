
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t simple_rel_array_size; TYPE_1__** simple_rel_array; } ;
struct TYPE_4__ {scalar_t__ reloptkind; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef size_t Index ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(PlannerInfo *VAR_1)
{
 int VAR_2 = 0;
 Index VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_1->simple_rel_array_size; VAR_3++)
 {
  RelOptInfo *VAR_4 = VAR_1->simple_rel_array[VAR_3];

  if (VAR_4 == ((void*)0))
   continue;


  if (VAR_4->reloptkind == VAR_0)
   if (++VAR_2 > 1)
    return 1;
 }
 return 0;
}
