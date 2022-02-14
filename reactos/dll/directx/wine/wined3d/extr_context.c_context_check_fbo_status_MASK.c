
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int buffers; } ;
struct TYPE_4__ {scalar_t__ (* glCheckFramebufferStatus ) (scalar_t__) ;} ;
struct wined3d_gl_info {TYPE_1__ limits; TYPE_2__ fbo_ops; } ;
struct wined3d_context {int current_fbo; struct wined3d_gl_info* gl_info; } ;
typedef scalar_t__ GLenum ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wined3d_gl_info const*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

void FUNC_7(const struct wined3d_context *VAR_5, GLenum VAR_6)
{
    const struct wined3d_gl_info *VAR_7 = VAR_5->gl_info;
    GLenum VAR_8;

    if (!FUNC_2(VAR_4))
        return;

    VAR_8 = VAR_7->fbo_ops.glCheckFramebufferStatus(VAR_6);
    if (VAR_8 == VAR_2)
    {
        FUNC_3("FBO complete.\n");
    }
    else
    {
        unsigned int VAR_9;

        FUNC_1("FBO status %s (%#x).\n", FUNC_5(VAR_8), VAR_8);

        if (!VAR_5->current_fbo)
        {
            FUNC_0("FBO 0 is incomplete, driver bug?\n");
            return;
        }

        FUNC_4(VAR_7, VAR_6, VAR_1);
        FUNC_4(VAR_7, VAR_6, VAR_3);

        for (VAR_9 = 0; VAR_9 < VAR_7->limits.buffers; ++VAR_9)
            FUNC_4(VAR_7, VAR_6, VAR_0 + VAR_9);
    }
}
