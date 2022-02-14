
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* p_glReadBuffer ) (int ) ;} ;
struct TYPE_8__ {TYPE_3__ gl; } ;
struct TYPE_5__ {int framebuffer_width; int framebuffer_height; unsigned int buffers; } ;
struct wined3d_gl_info {TYPE_4__ gl_ops; TYPE_1__ limits; scalar_t__* supported; } ;
struct wined3d_context {int fbo_draw_binding; int fbo_read_binding; struct wined3d_gl_info* gl_info; } ;
struct TYPE_6__ {int rb_namespace; int * objects; } ;
struct fbo_entry {int flags; TYPE_2__ key; int id; } ;
typedef int GLuint ;
typedef scalar_t__ GLenum ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct wined3d_context*,scalar_t__,int *,int,int) ;
 int FUNC_2 (struct wined3d_context*,scalar_t__,unsigned int,int *,int) ;
 int FUNC_3 (struct wined3d_context*,scalar_t__,int ) ;
 int FUNC_4 (struct wined3d_context*,int ) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct wined3d_context *VAR_10, GLenum VAR_11, struct fbo_entry *VAR_12)
{
    const struct wined3d_gl_info *VAR_13 = VAR_10->gl_info;
    GLuint VAR_14, VAR_15;
    unsigned int VAR_16;

    if (VAR_12->flags & VAR_9)
    {
        FUNC_3(VAR_10, VAR_11, VAR_12->id);
        return;
    }

    VAR_14 = VAR_10->fbo_read_binding;
    VAR_15 = VAR_10->fbo_draw_binding;
    FUNC_3(VAR_10, VAR_2, VAR_12->id);

    if (VAR_13->supported[VAR_0])
    {
        FUNC_0(FUNC_5(VAR_2,
                VAR_6, VAR_13->limits.framebuffer_width));
        FUNC_0(FUNC_5(VAR_2,
                VAR_3, VAR_13->limits.framebuffer_height));
        FUNC_0(FUNC_5(VAR_2, VAR_4, 1));
        FUNC_0(FUNC_5(VAR_2, VAR_5, 1));
    }


    for (VAR_16 = 0; VAR_16 < VAR_13->limits.buffers; ++VAR_16)
    {
        FUNC_2(VAR_10, VAR_11, VAR_16, &VAR_12->key.objects[VAR_16 + 1],
                VAR_12->key.rb_namespace & (1 << (VAR_16 + 1)));
    }

    FUNC_1(VAR_10, VAR_11, &VAR_12->key.objects[0],
            VAR_12->key.rb_namespace & 0x1, VAR_12->flags);



    VAR_13->gl_ops.gl.p_glReadBuffer(VAR_7);
    FUNC_4(VAR_10, VAR_7);
    if (VAR_11 != VAR_2)
    {
        if (VAR_11 == VAR_8)
            FUNC_3(VAR_10, VAR_1, VAR_15);
        else
            FUNC_3(VAR_10, VAR_8, VAR_14);
    }

    VAR_12->flags |= VAR_9;
}
