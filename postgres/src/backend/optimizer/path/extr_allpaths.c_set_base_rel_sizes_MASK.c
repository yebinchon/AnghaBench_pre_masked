
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {size_t simple_rel_array_size; TYPE_1__* glob; int ** simple_rte_array; TYPE_2__** simple_rel_array; } ;
struct TYPE_10__ {size_t relid; scalar_t__ reloptkind; } ;
struct TYPE_9__ {scalar_t__ parallelModeOK; } ;
typedef TYPE_2__ RelOptInfo ;
typedef int RangeTblEntry ;
typedef TYPE_3__ PlannerInfo ;
typedef size_t Index ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,size_t,int *) ;

__attribute__((used)) static void
FUNC_3(PlannerInfo *VAR_1)
{
 Index VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_1->simple_rel_array_size; VAR_2++)
 {
  RelOptInfo *VAR_3 = VAR_1->simple_rel_array[VAR_2];
  RangeTblEntry *VAR_4;


  if (VAR_3 == ((void*)0))
   continue;

  FUNC_0(VAR_3->relid == VAR_2);


  if (VAR_3->reloptkind != VAR_0)
   continue;

  VAR_4 = VAR_1->simple_rte_array[VAR_2];
  if (VAR_1->glob->parallelModeOK)
   FUNC_1(VAR_1, VAR_3, VAR_4);

  FUNC_2(VAR_1, VAR_3, VAR_2, VAR_4);
 }
}
