
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
struct TYPE_6__ {unsigned int offset; struct wined3d_buffer* buffer; } ;
struct TYPE_7__ {TYPE_1__ indirect; } ;
struct TYPE_8__ {TYPE_2__ u; int indirect; } ;
struct wined3d_cs_dispatch {TYPE_3__ parameters; int opcode; } ;
struct wined3d_cs {TYPE_4__* ops; TYPE_5__* device; } ;
struct wined3d_buffer {int resource; } ;
struct TYPE_10__ {struct wined3d_state state; } ;
struct TYPE_9__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_dispatch* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wined3d_state const*) ;
 struct wined3d_cs_dispatch* FUNC_1 (struct wined3d_cs*,int,int ) ;
 int FUNC_2 (struct wined3d_cs*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct wined3d_cs *VAR_3,
        struct wined3d_buffer *VAR_4, unsigned int VAR_5)
{
    const struct wined3d_state *VAR_6 = &VAR_3->device->state;
    struct wined3d_cs_dispatch *VAR_7;

    VAR_7 = VAR_3->ops->require_space(VAR_3, sizeof(*VAR_7), VAR_2);
    VAR_7->opcode = VAR_1;
    VAR_7->parameters.indirect = VAR_0;
    VAR_7->parameters.u.indirect.buffer = VAR_4;
    VAR_7->parameters.u.indirect.offset = VAR_5;

    FUNC_0(VAR_6);
    FUNC_3(&VAR_4->resource);

    VAR_3->ops->submit(VAR_3, VAR_2);
}
