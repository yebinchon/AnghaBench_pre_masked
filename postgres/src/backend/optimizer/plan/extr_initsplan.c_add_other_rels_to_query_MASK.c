
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int simple_rel_array_size; TYPE_2__** simple_rte_array; TYPE_1__** simple_rel_array; } ;
struct TYPE_9__ {scalar_t__ inh; } ;
struct TYPE_8__ {scalar_t__ reloptkind; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ RangeTblEntry ;
typedef TYPE_3__ PlannerInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*,TYPE_2__*,int) ;

void
FUNC_1(PlannerInfo *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_1->simple_rel_array_size; VAR_2++)
 {
  RelOptInfo *VAR_3 = VAR_1->simple_rel_array[VAR_2];
  RangeTblEntry *VAR_4 = VAR_1->simple_rte_array[VAR_2];


  if (VAR_3 == ((void*)0))
   continue;


  if (VAR_3->reloptkind != VAR_0)
   continue;


  if (VAR_4->inh)
   FUNC_0(VAR_1, VAR_3, VAR_4, VAR_2);
 }
}
