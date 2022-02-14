
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* pa_finished; } ;
struct TYPE_4__ {int as_nplans; TYPE_3__* as_pstate; int as_valid_subplans; TYPE_3__* as_prune_state; } ;
typedef TYPE_1__ AppendState ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(AppendState *VAR_0)
{
 int VAR_1;


 FUNC_0(VAR_0->as_pstate);


 FUNC_0(VAR_0->as_prune_state);


 if (FUNC_2(VAR_0->as_valid_subplans) == VAR_0->as_nplans)
  return;


 for (VAR_1 = 0; VAR_1 < VAR_0->as_nplans; VAR_1++)
 {
  if (!FUNC_1(VAR_1, VAR_0->as_valid_subplans))
   VAR_0->as_pstate->pa_finished[VAR_1] = 1;
 }
}
