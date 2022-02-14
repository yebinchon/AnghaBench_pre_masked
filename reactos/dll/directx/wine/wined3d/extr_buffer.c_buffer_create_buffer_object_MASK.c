
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* p_glGetError ) () ;} ;
struct TYPE_6__ {TYPE_2__ gl; } ;
struct wined3d_gl_info {TYPE_3__ gl_ops; scalar_t__* supported; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct TYPE_4__ {int usage; int size; } ;
struct wined3d_buffer {int flags; scalar_t__ buffer_object_usage; TYPE_1__ resource; int buffer_type_hint; int buffer_object; } ;
typedef scalar_t__ GLenum ;
typedef int BOOL ;


 size_t VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct wined3d_buffer*,struct wined3d_context*) ;
 int FUNC_4 (struct wined3d_buffer*) ;
 int FUNC_5 (struct wined3d_buffer*,struct wined3d_context*) ;
 int FUNC_6 (struct wined3d_buffer*,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int ,int *,scalar_t__) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int,int *) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 scalar_t__ FUNC_16 () ;

__attribute__((used)) static BOOL FUNC_17(struct wined3d_buffer *VAR_12, struct wined3d_context *VAR_13)
{
    const struct wined3d_gl_info *VAR_14 = VAR_13->gl_info;
    GLenum VAR_15 = VAR_6;
    GLenum VAR_16;

    FUNC_2("Creating an OpenGL buffer object for wined3d_buffer %p with usage %s.\n",
            VAR_12, FUNC_8(VAR_12->resource.usage));






    while (VAR_14->gl_ops.gl.p_glGetError() != VAR_5);







    FUNC_1(FUNC_12(1, &VAR_12->buffer_object));
    VAR_16 = VAR_14->gl_ops.gl.p_glGetError();
    if (!VAR_12->buffer_object || VAR_16 != VAR_5)
    {
        FUNC_0("Failed to create a BO with error %s (%#x).\n", FUNC_9(VAR_16), VAR_16);
        goto fail;
    }

    FUNC_3(VAR_12, VAR_13);
    VAR_16 = VAR_14->gl_ops.gl.p_glGetError();
    if (VAR_16 != VAR_5)
    {
        FUNC_0("Failed to bind the BO with error %s (%#x).\n", FUNC_9(VAR_16), VAR_16);
        goto fail;
    }

    if (VAR_12->resource.usage & VAR_9)
    {
        FUNC_2("Buffer has WINED3DUSAGE_DYNAMIC set.\n");
        VAR_15 = VAR_7;

        if (VAR_14->supported[VAR_0])
        {
            FUNC_1(FUNC_11(VAR_12->buffer_type_hint, VAR_2, VAR_4));
            FUNC_1(FUNC_11(VAR_12->buffer_type_hint, VAR_3, VAR_4));
            FUNC_7("glBufferParameteriAPPLE");
            VAR_12->flags |= VAR_10;
        }

    }

    FUNC_1(FUNC_10(VAR_12->buffer_type_hint, VAR_12->resource.size, ((void*)0), VAR_15));
    VAR_16 = VAR_14->gl_ops.gl.p_glGetError();
    if (VAR_16 != VAR_5)
    {
        FUNC_0("glBufferData failed with error %s (%#x).\n", FUNC_9(VAR_16), VAR_16);
        goto fail;
    }

    VAR_12->buffer_object_usage = VAR_15;
    FUNC_6(VAR_12, 0, 0);

    return VAR_8;

fail:

    FUNC_0("Failed to create a buffer object. Continuing, but performance issues may occur.\n");
    VAR_12->flags &= ~VAR_11;
    FUNC_5(VAR_12, VAR_13);
    FUNC_4(VAR_12);
    return VAR_1;
}
