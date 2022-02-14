
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t simple_rel_array_size; int * simple_rte_array; TYPE_1__** simple_rel_array; } ;
struct TYPE_6__ {size_t relid; scalar_t__ reloptkind; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef size_t Index ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,size_t,int ) ;

__attribute__((used)) static void
FUNC_2(PlannerInfo *VAR_1)
{
 Index VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_1->simple_rel_array_size; VAR_2++)
 {
  RelOptInfo *VAR_3 = VAR_1->simple_rel_array[VAR_2];


  if (VAR_3 == ((void*)0))
   continue;

  FUNC_0(VAR_3->relid == VAR_2);


  if (VAR_3->reloptkind != VAR_0)
   continue;

  FUNC_1(VAR_1, VAR_3, VAR_2, VAR_1->simple_rte_array[VAR_2]);
 }
}
