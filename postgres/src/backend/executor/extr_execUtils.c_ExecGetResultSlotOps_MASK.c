
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleTableSlotOps ;
struct TYPE_5__ {int const* tts_ops; } ;
struct TYPE_4__ {int resultopsfixed; TYPE_2__* ps_ResultTupleSlot; scalar_t__ resultopsset; int const* resultops; } ;
typedef TYPE_1__ PlanState ;


 int const VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

const TupleTableSlotOps *
FUNC_1(PlanState *VAR_1, bool *VAR_2)
{
 if (VAR_1->resultopsset && VAR_1->resultops)
 {
  if (VAR_2)
   *VAR_2 = VAR_1->resultopsfixed;
  return VAR_1->resultops;
 }

 if (VAR_2)
 {
  if (VAR_1->resultopsset)
   *VAR_2 = VAR_1->resultopsfixed;
  else if (VAR_1->ps_ResultTupleSlot)
   *VAR_2 = FUNC_0(VAR_1->ps_ResultTupleSlot);
  else
   *VAR_2 = 0;
 }

 if (!VAR_1->ps_ResultTupleSlot)
  return &VAR_0;

 return VAR_1->ps_ResultTupleSlot->tts_ops;
}
