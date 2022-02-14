
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int Tuplesortstate ;
struct TYPE_12__ {int * chgParam; } ;
struct TYPE_10__ {int ps_ResultTupleSlot; } ;
struct TYPE_9__ {TYPE_2__ ps; } ;
struct TYPE_11__ {int sort_Done; scalar_t__ bounded; scalar_t__ bounded_Done; scalar_t__ bound; scalar_t__ bound_Done; int * tuplesortstate; int randomAccess; TYPE_1__ ss; } ;
typedef TYPE_3__ SortState ;
typedef TYPE_4__ PlanState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(SortState *VAR_0)
{
 PlanState *VAR_1 = FUNC_2(VAR_0);






 if (!VAR_0->sort_Done)
  return;


 FUNC_0(VAR_0->ss.ps.ps_ResultTupleSlot);
 if (VAR_1->chgParam != ((void*)0) ||
  VAR_0->bounded != VAR_0->bounded_Done ||
  VAR_0->bound != VAR_0->bound_Done ||
  !VAR_0->randomAccess)
 {
  VAR_0->sort_Done = 0;
  FUNC_3((Tuplesortstate *) VAR_0->tuplesortstate);
  VAR_0->tuplesortstate = ((void*)0);





  if (VAR_1->chgParam == ((void*)0))
   FUNC_1(VAR_1);
 }
 else
  FUNC_4((Tuplesortstate *) VAR_0->tuplesortstate);
}
