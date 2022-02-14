
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader {int dummy; } ;
struct wined3d_cs_set_shader {int type; struct wined3d_shader* shader; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
typedef enum wined3d_shader_type { ____Placeholder_wined3d_shader_type } wined3d_shader_type ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_set_shader* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_set_shader* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;

void FUNC_2(struct wined3d_cs *VAR_2, enum wined3d_shader_type VAR_3, struct wined3d_shader *VAR_4)
{
    struct wined3d_cs_set_shader *VAR_5;

    VAR_5 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_5), VAR_1);
    VAR_5->opcode = VAR_0;
    VAR_5->type = VAR_3;
    VAR_5->shader = VAR_4;

    VAR_2->ops->submit(VAR_2, VAR_1);
}
