
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int es_num_result_relations; TYPE_1__* es_result_relations; } ;
struct TYPE_4__ {scalar_t__ ri_RangeTableIndex; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef scalar_t__ Index ;
typedef TYPE_2__ EState ;



bool
FUNC_0(EState *VAR_0, Index VAR_1)
{
 ResultRelInfo *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->es_result_relations;
 for (VAR_3 = 0; VAR_3 < VAR_0->es_num_result_relations; VAR_3++)
 {
  if (VAR_2[VAR_3].ri_RangeTableIndex == VAR_1)
   return 1;
 }
 return 0;
}
