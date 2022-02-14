
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_resource_view {int resource; } ;
struct wined3d_cs_generate_mipmaps {struct wined3d_shader_resource_view* view; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_generate_mipmaps* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_generate_mipmaps* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct wined3d_cs *VAR_2, struct wined3d_shader_resource_view *VAR_3)
{
    struct wined3d_cs_generate_mipmaps *VAR_4;

    VAR_4 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_4), VAR_1);
    VAR_4->opcode = VAR_0;
    VAR_4->view = VAR_3;

    FUNC_2(VAR_3->resource);

    VAR_2->ops->submit(VAR_2, VAR_1);
}
