
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cur_blend_state; int blend_state_stack; } ;
typedef TYPE_1__ graphics_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(void)
{
 graphics_t *VAR_1 = VAR_0;

 if (!FUNC_1("gs_blend_state_push"))
  return;

 FUNC_0(VAR_1->blend_state_stack, &VAR_1->cur_blend_state);
}
