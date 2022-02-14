
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_gl_view {int name; int target; } ;
struct TYPE_6__ {int (* p_glGenTextures ) (int,int *) ;} ;
struct TYPE_7__ {TYPE_2__ gl; } ;
struct TYPE_5__ {int texture_buffer_offset_alignment; } ;
struct wined3d_gl_info {scalar_t__* supported; TYPE_3__ gl_ops; TYPE_1__ limits; } ;
struct wined3d_format {int glInternal; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct TYPE_8__ {unsigned int size; } ;
struct wined3d_buffer {int buffer_object; TYPE_4__ resource; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wined3d_context*,int ,int ) ;
 int FUNC_4 (struct wined3d_context*,int ) ;
 int FUNC_5 (struct wined3d_context*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,unsigned int,unsigned int) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (struct wined3d_buffer*,struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_10(struct wined3d_gl_view *VAR_6, struct wined3d_context *VAR_7,
        struct wined3d_buffer *VAR_8, const struct wined3d_format *VAR_9,
        unsigned int VAR_10, unsigned int VAR_11)
{
    const struct wined3d_gl_info *VAR_12 = VAR_7->gl_info;

    if (!VAR_12->supported[VAR_0])
    {
        FUNC_0("OpenGL implementation does not support buffer textures.\n");
        return;
    }

    if ((VAR_10 & (VAR_12->limits.texture_buffer_offset_alignment - 1)))
    {
        FUNC_0("Buffer offset %u is not %u byte aligned.\n",
                VAR_10, VAR_12->limits.texture_buffer_offset_alignment);
        return;
    }

    FUNC_9(VAR_8, VAR_7, VAR_5);

    VAR_6->target = VAR_2;
    VAR_12->gl_ops.gl.p_glGenTextures(1, &VAR_6->name);

    FUNC_3(VAR_7, VAR_2, VAR_6->name);
    if (VAR_12->supported[VAR_1])
    {
        FUNC_1(FUNC_7(VAR_2, VAR_9->glInternal,
                VAR_8->buffer_object, VAR_10, VAR_11));
    }
    else
    {
        if (VAR_10 || VAR_11 != VAR_8->resource.size)
            FUNC_0("OpenGL implementation does not support ARB_texture_buffer_range.\n");
        FUNC_1(FUNC_6(VAR_2, VAR_9->glInternal, VAR_8->buffer_object));
    }
    FUNC_2("Create buffer texture");

    FUNC_4(VAR_7, VAR_3);
    FUNC_5(VAR_7, VAR_4);
}
