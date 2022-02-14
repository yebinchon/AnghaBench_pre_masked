
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int es_direction; } ;
struct TYPE_10__ {scalar_t__ subLinkType; scalar_t__ setParam; scalar_t__ useHashTable; } ;
struct TYPE_9__ {TYPE_1__* planstate; TYPE_3__* subplan; } ;
struct TYPE_8__ {TYPE_4__* state; } ;
typedef TYPE_2__ SubPlanState ;
typedef TYPE_3__ SubPlan ;
typedef int ScanDirection ;
typedef int ExprContext ;
typedef TYPE_4__ EState ;
typedef int Datum ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *,int*) ;
 int FUNC_2 (TYPE_2__*,int *,int*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,char*) ;

Datum
FUNC_4(SubPlanState *VAR_5,
   ExprContext *VAR_6,
   bool *VAR_7)
{
 SubPlan *VAR_8 = VAR_5->subplan;
 EState *VAR_9 = VAR_5->planstate->state;
 ScanDirection VAR_10 = VAR_9->es_direction;
 Datum VAR_11;

 FUNC_0();


 *VAR_7 = 0;


 if (VAR_8->subLinkType == VAR_0)
  FUNC_3(VAR_1, "CTE subplans should not be executed via ExecSubPlan");
 if (VAR_8->setParam != VAR_4 && VAR_8->subLinkType != VAR_3)
  FUNC_3(VAR_1, "cannot set parent params from subquery");


 VAR_9->es_direction = VAR_2;


 if (VAR_8->useHashTable)
  VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_7);
 else
  VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_7);


 VAR_9->es_direction = VAR_10;

 return VAR_11;
}
