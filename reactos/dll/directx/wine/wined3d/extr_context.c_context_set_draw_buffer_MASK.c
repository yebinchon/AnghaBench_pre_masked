
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* p_glDrawBuffer ) (int ) ;} ;
struct TYPE_5__ {TYPE_3__ gl; } ;
struct wined3d_gl_info {TYPE_2__ gl_ops; } ;
struct wined3d_context {scalar_t__ draw_buffers_mask; TYPE_1__* current_fbo; struct wined3d_gl_info* gl_info; } ;
struct TYPE_4__ {scalar_t__ rt_mask; } ;
typedef int GLenum ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct wined3d_context *VAR_0, GLenum VAR_1)
{
    const struct wined3d_gl_info *VAR_2 = VAR_0->gl_info;
    DWORD *VAR_3 = VAR_0->current_fbo ? &VAR_0->current_fbo->rt_mask : &VAR_0->draw_buffers_mask;
    DWORD VAR_4 = FUNC_1(VAR_1);

    if (VAR_4 == *VAR_3)
        return;

    VAR_2->gl_ops.gl.p_glDrawBuffer(VAR_1);
    FUNC_0("glDrawBuffer()");

    *VAR_3 = VAR_4;
}
