
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * chgParam; } ;
struct TYPE_11__ {int as_nplans; int as_whichplan; TYPE_1__ ps; TYPE_3__** appendplans; int * as_valid_subplans; TYPE_2__* as_prune_state; } ;
struct TYPE_10__ {int * chgParam; } ;
struct TYPE_9__ {int execparamids; } ;
typedef TYPE_3__ PlanState ;
typedef TYPE_4__ AppendState ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;

void
FUNC_4(AppendState *VAR_1)
{
 int VAR_2;






 if (VAR_1->as_prune_state &&
  FUNC_3(VAR_1->ps.chgParam,
     VAR_1->as_prune_state->execparamids))
 {
  FUNC_2(VAR_1->as_valid_subplans);
  VAR_1->as_valid_subplans = ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->as_nplans; VAR_2++)
 {
  PlanState *VAR_3 = VAR_1->appendplans[VAR_2];





  if (VAR_1->ps.chgParam != ((void*)0))
   FUNC_1(VAR_3, VAR_1->ps.chgParam);





  if (VAR_3->chgParam == ((void*)0))
   FUNC_0(VAR_3);
 }


 VAR_1->as_whichplan = VAR_0;
}
