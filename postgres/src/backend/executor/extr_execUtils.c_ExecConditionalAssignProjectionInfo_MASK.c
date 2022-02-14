
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_8__ {int resultopsset; int scanopsset; int resultopsfixed; int scanopsfixed; int * resultops; int ps_ResultTupleSlot; int * scanops; int * ps_ProjInfo; TYPE_1__* plan; } ;
struct TYPE_7__ {int targetlist; } ;
typedef TYPE_2__ PlanState ;
typedef int Index ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ,int ) ;

void
FUNC_3(PlanState *VAR_1, TupleDesc VAR_2,
         Index VAR_3)
{
 if (FUNC_2(VAR_1,
         VAR_1->plan->targetlist,
         VAR_3,
         VAR_2))
 {
  VAR_1->ps_ProjInfo = ((void*)0);
  VAR_1->resultopsset = VAR_1->scanopsset;
  VAR_1->resultopsfixed = VAR_1->scanopsfixed;
  VAR_1->resultops = VAR_1->scanops;
 }
 else
 {
  if (!VAR_1->ps_ResultTupleSlot)
  {
   FUNC_1(VAR_1, &VAR_0);
   VAR_1->resultops = &VAR_0;
   VAR_1->resultopsfixed = 1;
   VAR_1->resultopsset = 1;
  }
  FUNC_0(VAR_1, VAR_2);
 }
}
