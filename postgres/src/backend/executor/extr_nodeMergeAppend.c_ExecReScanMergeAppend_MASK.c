
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * chgParam; } ;
struct TYPE_11__ {int ms_nplans; int ms_initialized; int ms_heap; TYPE_2__ ps; TYPE_3__** mergeplans; int * ms_valid_subplans; TYPE_1__* ms_prune_state; } ;
struct TYPE_10__ {int * chgParam; } ;
struct TYPE_8__ {int execparamids; } ;
typedef TYPE_3__ PlanState ;
typedef TYPE_4__ MergeAppendState ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;

void
FUNC_5(MergeAppendState *VAR_0)
{
 int VAR_1;






 if (VAR_0->ms_prune_state &&
  FUNC_4(VAR_0->ps.chgParam,
     VAR_0->ms_prune_state->execparamids))
 {
  FUNC_3(VAR_0->ms_valid_subplans);
  VAR_0->ms_valid_subplans = ((void*)0);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->ms_nplans; VAR_1++)
 {
  PlanState *VAR_2 = VAR_0->mergeplans[VAR_1];





  if (VAR_0->ps.chgParam != ((void*)0))
   FUNC_1(VAR_2, VAR_0->ps.chgParam);





  if (VAR_2->chgParam == ((void*)0))
   FUNC_0(VAR_2);
 }
 FUNC_2(VAR_0->ms_heap);
 VAR_0->ms_initialized = 0;
}
