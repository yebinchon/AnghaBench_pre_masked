
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct blend_state {int dest_a; int src_a; int dest_c; int src_c; int enabled; } ;
struct TYPE_3__ {int blend_state_stack; } ;
typedef TYPE_1__ graphics_t ;


 struct blend_state* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_0 ;

void FUNC_5(void)
{
 graphics_t *VAR_1 = VAR_0;
 struct blend_state *VAR_2;

 if (!FUNC_4("gs_blend_state_pop"))
  return;

 VAR_2 = FUNC_0(VAR_1->blend_state_stack);
 if (!VAR_2)
  return;

 FUNC_3(VAR_2->enabled);
 FUNC_2(VAR_2->src_c, VAR_2->dest_c, VAR_2->src_a,
       VAR_2->dest_a);

 FUNC_1(VAR_1->blend_state_stack);
}
