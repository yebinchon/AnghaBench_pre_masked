
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
struct TYPE_9__ {int base_vertex_idx; unsigned int start_idx; unsigned int index_count; unsigned int start_instance; unsigned int instance_count; } ;
struct TYPE_10__ {TYPE_3__ direct; } ;
struct TYPE_11__ {int indexed; TYPE_4__ u; int indirect; } ;
struct wined3d_cs_draw {unsigned int patch_vertex_count; TYPE_5__ parameters; int primitive_type; int opcode; } ;
struct wined3d_cs {TYPE_6__* ops; TYPE_2__* device; } ;
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

void FUNC_3(struct wined3d_cs *VAR_3, GLenum VAR_4, unsigned int VAR_5,
        int VAR_6, unsigned int VAR_7, unsigned int VAR_8,
        unsigned int VAR_9, unsigned int VAR_10, BOOL VAR_11)
{
    const struct wined3d_gl_info *VAR_12 = &VAR_3->device->adapter->gl_info;
    const struct wined3d_state *VAR_13 = &VAR_3->device->state;
    struct wined3d_cs_draw *VAR_14;

    VAR_14 = VAR_3->ops->require_space(VAR_3, sizeof(*VAR_14), VAR_2);
    VAR_14->opcode = VAR_1;
    VAR_14->primitive_type = VAR_4;
    VAR_14->patch_vertex_count = VAR_5;
    VAR_14->parameters.indirect = VAR_0;
    VAR_14->parameters.u.direct.base_vertex_idx = VAR_6;
    VAR_14->parameters.u.direct.start_idx = VAR_7;
    VAR_14->parameters.u.direct.index_count = VAR_8;
    VAR_14->parameters.u.direct.start_instance = VAR_9;
    VAR_14->parameters.u.direct.instance_count = VAR_10;
    VAR_14->parameters.indexed = VAR_11;

    FUNC_0(VAR_13, VAR_11, VAR_12);

    VAR_3->ops->submit(VAR_3, VAR_2);
}
