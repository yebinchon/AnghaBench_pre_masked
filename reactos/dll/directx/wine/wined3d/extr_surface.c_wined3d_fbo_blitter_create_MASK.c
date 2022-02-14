
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int glBlitFramebuffer; } ;
struct wined3d_gl_info {TYPE_1__ fbo_ops; } ;
struct wined3d_blitter {struct wined3d_blitter* next; int * ops; } ;
struct TYPE_4__ {scalar_t__ offscreen_rendering_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct wined3d_blitter*) ;
 int VAR_1 ;
 struct wined3d_blitter* FUNC_1 (int) ;
 TYPE_2__ VAR_2 ;

void FUNC_2(struct wined3d_blitter **VAR_3, const struct wined3d_gl_info *VAR_4)
{
    struct wined3d_blitter *VAR_5;

    if ((VAR_2.offscreen_rendering_mode != VAR_0) || !VAR_4->fbo_ops.glBlitFramebuffer)
        return;

    if (!(VAR_5 = FUNC_1(sizeof(*VAR_5))))
        return;

    FUNC_0("Created blitter %p.\n", VAR_5);

    VAR_5->ops = &VAR_1;
    VAR_5->next = *VAR_3;
    *VAR_3 = VAR_5;
}
