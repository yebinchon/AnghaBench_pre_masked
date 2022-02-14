
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_10__ {int * pi_exprContext; } ;
struct TYPE_9__ {int * chgParam; } ;
struct TYPE_8__ {scalar_t__ parParam; } ;
struct TYPE_7__ {scalar_t__ args; int cur_eq_funcs; int * hashtable; scalar_t__ havehashrows; int * hashnulls; scalar_t__ havenullrows; int lhs_hash_funcs; int cur_eq_comp; TYPE_5__* projLeft; TYPE_3__* planstate; TYPE_2__* subplan; } ;
typedef TYPE_1__ SubPlanState ;
typedef TYPE_2__ SubPlan ;
typedef TYPE_3__ PlanState ;
typedef int ExprContext ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_5__*) ;
 int * FUNC_3 (int *,int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static Datum
FUNC_9(SubPlanState *VAR_2,
    ExprContext *VAR_3,
    bool *VAR_4)
{
 SubPlan *VAR_5 = VAR_2->subplan;
 PlanState *VAR_6 = VAR_2->planstate;
 TupleTableSlot *VAR_7;


 if (VAR_5->parParam != VAR_1 || VAR_2->args != VAR_1)
  FUNC_5(VAR_0, "hashed subplan with direct correlation not supported");





 if (VAR_2->hashtable == ((void*)0) || VAR_6->chgParam != ((void*)0))
  FUNC_4(VAR_2, VAR_3);





 *VAR_4 = 0;
 if (!VAR_2->havehashrows && !VAR_2->havenullrows)
  return FUNC_0(0);





 VAR_2->projLeft->pi_exprContext = VAR_3;
 VAR_7 = FUNC_2(VAR_2->projLeft);
 if (FUNC_8(VAR_7))
 {
  if (VAR_2->havehashrows &&
   FUNC_3(VAR_2->hashtable,
          VAR_7,
          VAR_2->cur_eq_comp,
          VAR_2->lhs_hash_funcs) != ((void*)0))
  {
   FUNC_1(VAR_7);
   return FUNC_0(1);
  }
  if (VAR_2->havenullrows &&
   FUNC_6(VAR_2->hashnulls, VAR_7, VAR_2->cur_eq_funcs))
  {
   FUNC_1(VAR_7);
   *VAR_4 = 1;
   return FUNC_0(0);
  }
  FUNC_1(VAR_7);
  return FUNC_0(0);
 }
 if (VAR_2->hashnulls == ((void*)0))
 {
  FUNC_1(VAR_7);
  return FUNC_0(0);
 }
 if (FUNC_7(VAR_7))
 {
  FUNC_1(VAR_7);
  *VAR_4 = 1;
  return FUNC_0(0);
 }

 if (VAR_2->havenullrows &&
  FUNC_6(VAR_2->hashnulls, VAR_7, VAR_2->cur_eq_funcs))
 {
  FUNC_1(VAR_7);
  *VAR_4 = 1;
  return FUNC_0(0);
 }
 if (VAR_2->havehashrows &&
  FUNC_6(VAR_2->hashtable, VAR_7, VAR_2->cur_eq_funcs))
 {
  FUNC_1(VAR_7);
  *VAR_4 = 1;
  return FUNC_0(0);
 }
 FUNC_1(VAR_7);
 return FUNC_0(0);
}
