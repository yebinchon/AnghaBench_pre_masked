
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ auto_depth_stencil_format; int enable_auto_depth_stencil; } ;
struct wined3d_swapchain {int num_contexts; int * context; TYPE_5__* ds_format; TYPE_3__ desc; int front_buffer; TYPE_2__* device; } ;
struct wined3d_gl_info {int dummy; } ;
typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
struct TYPE_11__ {scalar_t__ id; } ;
struct TYPE_10__ {scalar_t__ offscreen_rendering_mode; } ;
struct TYPE_8__ {TYPE_1__* adapter; } ;
struct TYPE_7__ {struct wined3d_gl_info gl_info; } ;


 unsigned int FUNC_0 (int const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;





 int VAR_1 ;
 int FUNC_4 (struct wined3d_swapchain*,int ,TYPE_5__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int const) ;
 TYPE_5__* FUNC_7 (struct wined3d_gl_info const*,int const,int ) ;
 TYPE_4__ VAR_2 ;
 int FUNC_8 (struct wined3d_swapchain*) ;

__attribute__((used)) static void FUNC_9(void *VAR_3)
{
    struct wined3d_swapchain *VAR_4 = VAR_3;
    const struct wined3d_gl_info *VAR_5;
    unsigned int VAR_6;

    static const enum wined3d_format_id VAR_7[] =
    {
        131,
        130,
        129,
        132,
        128,
    };

    VAR_5 = &VAR_4->device->adapter->gl_info;



    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_7); ++VAR_6)
    {
        VAR_4->ds_format = FUNC_7(VAR_5, VAR_7[VAR_6], VAR_1);
        if ((VAR_4->context[0] = FUNC_4(VAR_4, VAR_4->front_buffer, VAR_4->ds_format)))
            break;
        FUNC_2("Depth stencil format %s is not supported, trying next format.\n", FUNC_6(VAR_7[VAR_6]));
    }

    if (!VAR_4->context[0])
    {
        FUNC_3("Failed to create context.\n");
        return;
    }
    VAR_4->num_contexts = 1;

    if (VAR_2.offscreen_rendering_mode != VAR_0
            && (!VAR_4->desc.enable_auto_depth_stencil
            || VAR_4->desc.auto_depth_stencil_format != VAR_4->ds_format->id))
        FUNC_1("Add OpenGL context recreation support.\n");

    FUNC_5(VAR_4->context[0]);

    FUNC_8(VAR_4);
}
