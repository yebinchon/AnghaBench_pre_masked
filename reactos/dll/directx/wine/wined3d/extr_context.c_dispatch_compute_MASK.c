
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_state {int * shader; } ;
struct wined3d_indirect_dispatch_parameters {scalar_t__ offset; struct wined3d_buffer* buffer; } ;
struct TYPE_6__ {int (* p_glFlush ) () ;} ;
struct TYPE_7__ {TYPE_2__ gl; } ;
struct wined3d_gl_info {TYPE_3__ gl_ops; int * supported; } ;
struct wined3d_direct_dispatch_parameters {int group_count_z; int group_count_y; int group_count_x; } ;
struct TYPE_5__ {struct wined3d_direct_dispatch_parameters direct; struct wined3d_indirect_dispatch_parameters indirect; } ;
struct wined3d_dispatch_parameters {TYPE_1__ u; scalar_t__ indirect; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; int valid; } ;
struct wined3d_buffer {int buffer_object; } ;
struct TYPE_8__ {scalar_t__ strict_draw_ordering; } ;
typedef int GLintptr ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 size_t VAR_3 ;
 int FUNC_3 (char*) ;
 struct wined3d_context* FUNC_4 (struct wined3d_device*,int *,int ) ;
 int FUNC_5 (struct wined3d_context*,struct wined3d_device*,struct wined3d_state const*) ;
 int FUNC_6 (struct wined3d_context*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (struct wined3d_buffer*,struct wined3d_context*,struct wined3d_state const*) ;
 TYPE_4__ VAR_4 ;

void FUNC_13(struct wined3d_device *VAR_5, const struct wined3d_state *VAR_6,
        const struct wined3d_dispatch_parameters *VAR_7)
{
    const struct wined3d_gl_info *VAR_8;
    struct wined3d_context *VAR_9;

    VAR_9 = FUNC_4(VAR_5, ((void*)0), 0);
    if (!VAR_9->valid)
    {
        FUNC_6(VAR_9);
        FUNC_2("Invalid context, skipping dispatch.\n");
        return;
    }
    VAR_8 = VAR_9->gl_info;

    if (!VAR_8->supported[VAR_0])
    {
        FUNC_6(VAR_9);
        FUNC_0("OpenGL implementation does not support compute shaders.\n");
        return;
    }

    if (VAR_7->indirect)
        FUNC_12(VAR_7->u.indirect.buffer, VAR_9, VAR_6);

    FUNC_5(VAR_9, VAR_5, VAR_6);

    if (!VAR_6->shader[VAR_3])
    {
        FUNC_6(VAR_9);
        FUNC_2("No compute shader bound, skipping dispatch.\n");
        return;
    }

    if (VAR_7->indirect)
    {
        const struct wined3d_indirect_dispatch_parameters *VAR_10 = &VAR_7->u.indirect;
        struct wined3d_buffer *VAR_11 = VAR_10->buffer;

        FUNC_1(FUNC_7(VAR_2, VAR_11->buffer_object));
        FUNC_1(FUNC_9((GLintptr)VAR_10->offset));
        FUNC_1(FUNC_7(VAR_2, 0));
    }
    else
    {
        const struct wined3d_direct_dispatch_parameters *VAR_12 = &VAR_7->u.direct;
        FUNC_1(FUNC_8(VAR_12->group_count_x, VAR_12->group_count_y, VAR_12->group_count_z));
    }
    FUNC_3("dispatch compute");

    FUNC_1(FUNC_10(VAR_1));
    FUNC_3("glMemoryBarrier");

    if (VAR_4.strict_draw_ordering)
        VAR_8->gl_ops.gl.p_glFlush();

    FUNC_6(VAR_9);
}
