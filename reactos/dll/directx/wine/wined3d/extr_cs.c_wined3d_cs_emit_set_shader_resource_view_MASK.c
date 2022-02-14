
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_resource_view {int dummy; } ;
struct wined3d_cs_set_shader_resource_view {int type; struct wined3d_shader_resource_view* view; int view_idx; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
typedef enum wined3d_shader_type { ____Placeholder_wined3d_shader_type } wined3d_shader_type ;
typedef int UINT ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_set_shader_resource_view* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_set_shader_resource_view* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;

void FUNC_2(struct wined3d_cs *VAR_2, enum wined3d_shader_type VAR_3,
        UINT VAR_4, struct wined3d_shader_resource_view *VAR_5)
{
    struct wined3d_cs_set_shader_resource_view *VAR_6;

    VAR_6 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_6), VAR_1);
    VAR_6->opcode = VAR_0;
    VAR_6->type = VAR_3;
    VAR_6->view_idx = VAR_4;
    VAR_6->view = VAR_5;

    VAR_2->ops->submit(VAR_2, VAR_1);
}
