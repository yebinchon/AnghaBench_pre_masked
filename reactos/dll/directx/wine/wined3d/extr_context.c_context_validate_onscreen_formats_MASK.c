
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_swapchain {int render_to_fbo; int ds_format; } ;
struct wined3d_rendertarget_view {int format; } ;
struct TYPE_3__ {int sub_resource_idx; TYPE_2__* texture; } ;
struct wined3d_context {TYPE_1__ current_rt; scalar_t__ render_offscreen; } ;
struct TYPE_4__ {struct wined3d_swapchain* swapchain; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (struct wined3d_context*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wined3d_swapchain*) ;
 int FUNC_5 (TYPE_2__*,int ,struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_6(struct wined3d_context *VAR_2,
        const struct wined3d_rendertarget_view *VAR_3)
{

    struct wined3d_swapchain *VAR_4 = VAR_2->current_rt.texture->swapchain;

    if (VAR_2->render_offscreen || !VAR_3) return;
    if (FUNC_3(VAR_4->ds_format, VAR_3->format)) return;




    FUNC_1("Depth stencil format is not supported by WGL, rendering the backbuffer in an FBO\n");


    if (!(FUNC_5(VAR_2->current_rt.texture, VAR_2->current_rt.sub_resource_idx,
            VAR_2, VAR_1)))
        FUNC_0("Failed to load location.\n");
    VAR_4->render_to_fbo = VAR_0;
    FUNC_4(VAR_4);
    FUNC_2(VAR_2, VAR_0);
}
