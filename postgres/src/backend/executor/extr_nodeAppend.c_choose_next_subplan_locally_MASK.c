
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* state; } ;
struct TYPE_7__ {int as_whichplan; int as_nplans; int * as_valid_subplans; TYPE_2__ ps; int as_prune_state; } ;
struct TYPE_5__ {int es_direction; } ;
typedef TYPE_3__ AppendState ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static bool
FUNC_5(AppendState *VAR_2)
{
 int VAR_3 = VAR_2->as_whichplan;
 int VAR_4;


 FUNC_0(VAR_3 != VAR_1);
 if (VAR_3 == VAR_0)
 {
  if (VAR_2->as_valid_subplans == ((void*)0))
   VAR_2->as_valid_subplans =
    FUNC_1(VAR_2->as_prune_state);

  VAR_3 = -1;
 }


 FUNC_0(VAR_3 >= -1 && VAR_3 <= VAR_2->as_nplans);

 if (FUNC_2(VAR_2->ps.state->es_direction))
  VAR_4 = FUNC_3(VAR_2->as_valid_subplans, VAR_3);
 else
  VAR_4 = FUNC_4(VAR_2->as_valid_subplans, VAR_3);

 if (VAR_4 < 0)
  return 0;

 VAR_2->as_whichplan = VAR_4;

 return 1;
}
