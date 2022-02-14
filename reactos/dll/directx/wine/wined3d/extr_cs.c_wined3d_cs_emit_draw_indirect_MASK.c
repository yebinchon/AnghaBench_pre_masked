
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
struct TYPE_9__ {unsigned int offset; struct wined3d_buffer* buffer; } ;
struct TYPE_10__ {TYPE_3__ indirect; } ;
struct TYPE_11__ {int indexed; TYPE_4__ u; int indirect; } ;
struct wined3d_cs_draw {unsigned int patch_vertex_count; TYPE_5__ parameters; int primitive_type; int opcode; } ;
struct wined3d_cs {TYPE_6__* ops; TYPE_2__* device; } ;
struct wined3d_buffer {int resource; } ;
struct TYPE_12__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_draw* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;
struct TYPE_8__ {struct wined3d_state state; TYPE_1__* adapter; } ;
struct TYPE_7__ {struct wined3d_gl_info gl_info; } ;
typedef int GLenum ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wined3d_state const*,int ,struct wined3d_gl_info const*) ;
 struct wined3d_cs_draw* FUNC_1 (struct wined3d_cs*,int,int ) ;
 int FUNC_2 (struct wined3d_cs*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct wined3d_cs *VAR_3, GLenum VAR_4, unsigned int VAR_5,
        struct wined3d_buffer *VAR_6, unsigned int VAR_7, BOOL VAR_8)
{
    const struct wined3d_gl_info *VAR_9 = &VAR_3->device->adapter->gl_info;
    const struct wined3d_state *VAR_10 = &VAR_3->device->state;
    struct wined3d_cs_draw *VAR_11;

    VAR_11 = VAR_3->ops->require_space(VAR_3, sizeof(*VAR_11), VAR_2);
    VAR_11->opcode = VAR_1;
    VAR_11->primitive_type = VAR_4;
    VAR_11->patch_vertex_count = VAR_5;
    VAR_11->parameters.indirect = VAR_0;
    VAR_11->parameters.u.indirect.buffer = VAR_6;
    VAR_11->parameters.u.indirect.offset = VAR_7;
    VAR_11->parameters.indexed = VAR_8;

    FUNC_0(VAR_10, VAR_8, VAR_9);
    FUNC_3(&VAR_6->resource);

    VAR_3->ops->submit(VAR_3, VAR_2);
}
