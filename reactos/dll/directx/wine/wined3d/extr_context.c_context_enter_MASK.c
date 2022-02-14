
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_context {int needs_set; scalar_t__ pixel_format; int hdc; TYPE_3__* gl_info; scalar_t__ hdc_has_format; scalar_t__ hdc_is_private; scalar_t__ restore_dc; struct wined3d_context* restore_ctx; struct wined3d_context* glCtx; scalar_t__ level; } ;
struct TYPE_4__ {scalar_t__ (* p_wglGetPixelFormat ) (int ) ;} ;
struct TYPE_5__ {TYPE_1__ wgl; } ;
struct TYPE_6__ {TYPE_2__ gl_ops; } ;
typedef struct wined3d_context* HGLRC ;


 int FUNC_0 (char*,struct wined3d_context*,scalar_t__) ;
 struct wined3d_context* FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 struct wined3d_context* FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct wined3d_context *VAR_0)
{
    FUNC_0("Entering context %p, level %u.\n", VAR_0, VAR_0->level + 1);

    if (!VAR_0->level++)
    {
        const struct wined3d_context *VAR_1 = FUNC_1();
        HGLRC VAR_2 = FUNC_3();

        if (VAR_2 && (!VAR_1 || VAR_1->glCtx != VAR_2))
        {
            FUNC_0("Another GL context (%p on device context %p) is already current.\n",
                    VAR_2, FUNC_4());
            VAR_0->restore_ctx = VAR_2;
            VAR_0->restore_dc = FUNC_4();
            VAR_0->needs_set = 1;
        }
        else if (!VAR_0->needs_set && !(VAR_0->hdc_is_private && VAR_0->hdc_has_format)
                    && VAR_0->pixel_format != VAR_0->gl_info->gl_ops.wgl.p_wglGetPixelFormat(VAR_0->hdc))
            VAR_0->needs_set = 1;
    }
}
