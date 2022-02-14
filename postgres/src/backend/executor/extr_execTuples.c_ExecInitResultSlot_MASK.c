
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleTableSlotOps ;
typedef int TupleTableSlot ;
struct TYPE_5__ {int resultopsset; int const* resultops; int * ps_ResultTupleDesc; int resultopsfixed; int * ps_ResultTupleSlot; TYPE_1__* state; } ;
struct TYPE_4__ {int es_tupleTable; } ;
typedef TYPE_2__ PlanState ;


 int * FUNC_0 (int *,int *,int const*) ;

void
FUNC_1(PlanState *VAR_0, const TupleTableSlotOps *VAR_1)
{
 TupleTableSlot *VAR_2;

 VAR_2 = FUNC_0(&VAR_0->state->es_tupleTable,
         VAR_0->ps_ResultTupleDesc, VAR_1);
 VAR_0->ps_ResultTupleSlot = VAR_2;

 VAR_0->resultopsfixed = VAR_0->ps_ResultTupleDesc != ((void*)0);
 VAR_0->resultops = VAR_1;
 VAR_0->resultopsset = 1;
}
