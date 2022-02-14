
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {double total_cost; double plan_rows; double startup_cost; } ;
struct TYPE_9__ {double per_tuple; int startup; } ;
struct TYPE_8__ {scalar_t__ subLinkType; scalar_t__ parParam; double per_call_cost; int startup_cost; scalar_t__ useHashTable; scalar_t__ testexpr; } ;
typedef TYPE_1__ SubPlan ;
typedef TYPE_2__ QualCost ;
typedef int PlannerInfo ;
typedef TYPE_3__ Plan ;
typedef int Expr ;
typedef double Cost ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 double FUNC_1 (double) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 double VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;

void
FUNC_5(PlannerInfo *VAR_5, SubPlan *VAR_6, Plan *VAR_7)
{
 QualCost VAR_8;


 FUNC_2(&VAR_8,
       FUNC_3((Expr *) VAR_6->testexpr),
       VAR_5);

 if (VAR_6->useHashTable)
 {






  VAR_8.startup += VAR_7->total_cost +
   VAR_4 * VAR_7->plan_rows;
 }
 else
 {







  Cost VAR_9 = VAR_7->total_cost - VAR_7->startup_cost;

  if (VAR_6->subLinkType == VAR_2)
  {

   VAR_8.per_tuple += VAR_9 / FUNC_1(VAR_7->plan_rows);
  }
  else if (VAR_6->subLinkType == VAR_0 ||
     VAR_6->subLinkType == VAR_1)
  {

   VAR_8.per_tuple += 0.50 * VAR_9;

   VAR_8.per_tuple += 0.50 * VAR_7->plan_rows * VAR_4;
  }
  else
  {

   VAR_8.per_tuple += VAR_9;
  }
  if (VAR_6->parParam == VAR_3 &&
   FUNC_0(FUNC_4(VAR_7)))
   VAR_8.startup += VAR_7->startup_cost;
  else
   VAR_8.per_tuple += VAR_7->startup_cost;
 }

 VAR_6->startup_cost = VAR_8.startup;
 VAR_6->per_call_cost = VAR_8.per_tuple;
}
