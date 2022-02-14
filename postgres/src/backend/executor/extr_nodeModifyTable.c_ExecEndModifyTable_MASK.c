
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ ps_ResultTupleSlot; int state; } ;
struct TYPE_10__ {int mt_nplans; int * mt_plans; int mt_epqstate; TYPE_5__ ps; scalar_t__ mt_root_tuple_slot; scalar_t__ mt_partition_tuple_routing; TYPE_2__* resultRelInfo; } ;
struct TYPE_9__ {TYPE_1__* ri_FdwRoutine; int ri_usesFdwDirectModify; } ;
struct TYPE_8__ {int (* EndForeignModify ) (int ,TYPE_2__*) ;} ;
typedef TYPE_2__ ResultRelInfo ;
typedef TYPE_3__ ModifyTableState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,TYPE_2__*) ;

void
FUNC_7(ModifyTableState *VAR_0)
{
 int VAR_1;




 for (VAR_1 = 0; VAR_1 < VAR_0->mt_nplans; VAR_1++)
 {
  ResultRelInfo *VAR_2 = VAR_0->resultRelInfo + VAR_1;

  if (!VAR_2->ri_usesFdwDirectModify &&
   VAR_2->ri_FdwRoutine != ((void*)0) &&
   VAR_2->ri_FdwRoutine->EndForeignModify != ((void*)0))
   VAR_2->ri_FdwRoutine->EndForeignModify(VAR_0->ps.state,
                 VAR_2);
 }





 if (VAR_0->mt_partition_tuple_routing)
 {
  FUNC_1(VAR_0, VAR_0->mt_partition_tuple_routing);

  if (VAR_0->mt_root_tuple_slot)
   FUNC_3(VAR_0->mt_root_tuple_slot);
 }




 FUNC_5(&VAR_0->ps);




 if (VAR_0->ps.ps_ResultTupleSlot)
  FUNC_2(VAR_0->ps.ps_ResultTupleSlot);




 FUNC_0(&VAR_0->mt_epqstate);




 for (VAR_1 = 0; VAR_1 < VAR_0->mt_nplans; VAR_1++)
  FUNC_4(VAR_0->mt_plans[VAR_1]);
}
