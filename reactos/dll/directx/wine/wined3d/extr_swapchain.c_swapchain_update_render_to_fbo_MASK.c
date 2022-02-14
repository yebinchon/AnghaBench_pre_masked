
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int backbuffer_count; } ;
struct wined3d_swapchain {int render_to_fbo; TYPE_1__ desc; } ;
struct TYPE_4__ {scalar_t__ offscreen_rendering_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_1(struct wined3d_swapchain *VAR_4)
{
    if (VAR_3.offscreen_rendering_mode != VAR_1)
        return;

    if (!VAR_4->desc.backbuffer_count)
    {
        FUNC_0("Single buffered rendering.\n");
        VAR_4->render_to_fbo = VAR_0;
        return;
    }

    FUNC_0("Rendering to FBO.\n");
    VAR_4->render_to_fbo = VAR_2;
}
