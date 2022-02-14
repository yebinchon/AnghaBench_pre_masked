
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs_set_render_state {int state; int value; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
typedef enum wined3d_render_state { ____Placeholder_wined3d_render_state } wined3d_render_state ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_set_render_state* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_set_render_state* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;

void FUNC_2(struct wined3d_cs *VAR_2, enum wined3d_render_state VAR_3, DWORD VAR_4)
{
    struct wined3d_cs_set_render_state *VAR_5;

    VAR_5 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_5), VAR_1);
    VAR_5->opcode = VAR_0;
    VAR_5->state = VAR_3;
    VAR_5->value = VAR_4;

    VAR_2->ops->submit(VAR_2, VAR_1);
}
