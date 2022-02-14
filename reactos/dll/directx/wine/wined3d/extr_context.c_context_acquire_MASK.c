
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_texture {struct wined3d_swapchain* swapchain; } ;
struct wined3d_swapchain {struct wined3d_texture* front_buffer; struct wined3d_texture** back_buffers; } ;
struct wined3d_device {struct wined3d_swapchain** swapchains; int cs; } ;
struct TYPE_2__ {unsigned int sub_resource_idx; struct wined3d_texture* texture; } ;
struct wined3d_context {struct wined3d_device const* device; TYPE_1__ current_rt; scalar_t__ destroyed; } ;
typedef int BOOL ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct wined3d_context*,struct wined3d_texture*,unsigned int) ;
 struct wined3d_context* FUNC_2 () ;
 struct wined3d_context* FUNC_3 (struct wined3d_swapchain*) ;
 int FUNC_4 (int ) ;

struct wined3d_context *FUNC_5(const struct wined3d_device *VAR_0,
        struct wined3d_texture *VAR_1, unsigned int VAR_2)
{
    struct wined3d_context *VAR_3 = FUNC_2();
    struct wined3d_context *VAR_4;
    BOOL VAR_5;

    FUNC_0("device %p, texture %p, sub_resource_idx %u.\n", VAR_0, VAR_1, VAR_2);

    FUNC_4(VAR_0->cs);

    if (VAR_3 && VAR_3->destroyed)
        VAR_3 = ((void*)0);

    VAR_5 = VAR_1 && VAR_1->swapchain;
    if (!VAR_1)
    {
        if (VAR_3
                && VAR_3->current_rt.texture
                && VAR_3->device == VAR_0)
        {
            VAR_1 = VAR_3->current_rt.texture;
            VAR_2 = VAR_3->current_rt.sub_resource_idx;
        }
        else
        {
            struct wined3d_swapchain *VAR_6 = VAR_0->swapchains[0];

            if (VAR_6->back_buffers)
                VAR_1 = VAR_6->back_buffers[0];
            else
                VAR_1 = VAR_6->front_buffer;
            VAR_2 = 0;
        }
    }

    if (VAR_3 && VAR_3->current_rt.texture == VAR_1)
    {
        VAR_4 = VAR_3;
    }
    else if (VAR_5)
    {
        FUNC_0("Rendering onscreen.\n");

        VAR_4 = FUNC_3(VAR_1->swapchain);
    }
    else
    {
        FUNC_0("Rendering offscreen.\n");



        if (VAR_3 && VAR_3->device == VAR_0)
            VAR_4 = VAR_3;
        else
            VAR_4 = FUNC_3(VAR_0->swapchains[0]);
    }

    FUNC_1(VAR_4, VAR_1, VAR_2);

    return VAR_4;
}
