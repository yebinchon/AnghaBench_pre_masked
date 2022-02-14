
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs_set_texture_state {int state; int value; int stage; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
typedef enum wined3d_texture_stage_state { ____Placeholder_wined3d_texture_stage_state } wined3d_texture_stage_state ;
typedef int UINT ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_set_texture_state* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_set_texture_state* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;

void FUNC_2(struct wined3d_cs *VAR_2, UINT VAR_3,
        enum wined3d_texture_stage_state VAR_4, DWORD VAR_5)
{
    struct wined3d_cs_set_texture_state *VAR_6;

    VAR_6 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_6), VAR_1);
    VAR_6->opcode = VAR_0;
    VAR_6->stage = VAR_3;
    VAR_6->state = VAR_4;
    VAR_6->value = VAR_5;

    VAR_2->ops->submit(VAR_2, VAR_1);
}
