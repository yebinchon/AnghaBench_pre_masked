
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct wined3d_surface {TYPE_9__* container; } ;
struct wined3d_rendertarget_view {TYPE_6__* format; int sub_resource_idx; } ;
struct wined3d_device {TYPE_4__** swapchains; } ;
struct wined3d_cs_set_depth_stencil_view {TYPE_8__* view; } ;
struct TYPE_14__ {TYPE_8__* depth_stencil; } ;
struct TYPE_11__ {TYPE_1__* fb; } ;
struct wined3d_cs {TYPE_5__ fb; TYPE_2__ state; struct wined3d_device* device; } ;
struct TYPE_18__ {int flags; } ;
struct TYPE_17__ {TYPE_7__* format; } ;
struct TYPE_16__ {scalar_t__ depth_bias_scale; } ;
struct TYPE_15__ {scalar_t__ depth_bias_scale; } ;
struct TYPE_12__ {int flags; } ;
struct TYPE_13__ {TYPE_3__ desc; } ;
struct TYPE_10__ {struct wined3d_rendertarget_view* depth_stencil; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct wined3d_device*,int ) ;
 struct wined3d_surface* FUNC_2 (struct wined3d_rendertarget_view*) ;
 int FUNC_3 (TYPE_9__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct wined3d_cs *VAR_9, const void *VAR_10)
{
    const struct wined3d_cs_set_depth_stencil_view *VAR_11 = VAR_10;
    struct wined3d_device *VAR_12 = VAR_9->device;
    struct wined3d_rendertarget_view *VAR_13;

    if ((VAR_13 = VAR_9->state.fb->depth_stencil))
    {
        struct wined3d_surface *VAR_14 = FUNC_2(VAR_13);

        if (VAR_14 && (VAR_12->swapchains[0]->desc.flags & VAR_7
                || VAR_14->container->flags & VAR_8))
        {
            FUNC_3(VAR_14->container,
                    VAR_13->sub_resource_idx, VAR_1);
        }
    }

    VAR_9->fb.depth_stencil = VAR_11->view;

    if (!VAR_13 != !VAR_11->view)
    {

        FUNC_1(VAR_12, FUNC_0(VAR_6));
        FUNC_1(VAR_12, FUNC_0(VAR_4));
        FUNC_1(VAR_12, FUNC_0(VAR_5));
        FUNC_1(VAR_12, FUNC_0(VAR_2));
        FUNC_1(VAR_12, FUNC_0(VAR_3));
    }
    else if (VAR_13 && VAR_13->format->depth_bias_scale != VAR_11->view->format->depth_bias_scale)
    {
        FUNC_1(VAR_12, FUNC_0(VAR_2));
    }

    FUNC_1(VAR_12, VAR_0);
}
