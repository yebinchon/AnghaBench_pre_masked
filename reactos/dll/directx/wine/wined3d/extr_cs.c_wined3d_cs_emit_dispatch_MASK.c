
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct TYPE_7__ {unsigned int group_count_x; unsigned int group_count_y; unsigned int group_count_z; } ;
struct TYPE_8__ {TYPE_2__ direct; } ;
struct TYPE_9__ {TYPE_3__ u; int indirect; } ;
struct wined3d_cs_dispatch {TYPE_4__ parameters; int opcode; } ;
struct wined3d_cs {TYPE_5__* ops; TYPE_1__* device; } ;
struct TYPE_10__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_dispatch* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;
struct TYPE_6__ {struct wined3d_state state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wined3d_state const*) ;
 struct wined3d_cs_dispatch* FUNC_1 (struct wined3d_cs*,int,int ) ;
 int FUNC_2 (struct wined3d_cs*,int ) ;

void FUNC_3(struct wined3d_cs *VAR_3,
        unsigned int VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
    const struct wined3d_state *VAR_7 = &VAR_3->device->state;
    struct wined3d_cs_dispatch *VAR_8;

    VAR_8 = VAR_3->ops->require_space(VAR_3, sizeof(*VAR_8), VAR_2);
    VAR_8->opcode = VAR_1;
    VAR_8->parameters.indirect = VAR_0;
    VAR_8->parameters.u.direct.group_count_x = VAR_4;
    VAR_8->parameters.u.direct.group_count_y = VAR_5;
    VAR_8->parameters.u.direct.group_count_z = VAR_6;

    FUNC_0(VAR_7);

    VAR_3->ops->submit(VAR_3, VAR_2);
}
