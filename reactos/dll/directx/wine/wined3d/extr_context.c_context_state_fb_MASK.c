
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct wined3d_state {struct wined3d_fb_state* fb; } ;
struct wined3d_fb_state {TYPE_8__* depth_stencil; TYPE_4__** render_targets; } ;
struct wined3d_context {scalar_t__ draw_buffers_mask; int constant_update_mask; TYPE_6__* current_fbo; TYPE_9__* blit_targets; TYPE_2__* gl_info; int render_offscreen; } ;
struct TYPE_19__ {int layer_count; int sub_resource_idx; TYPE_3__* resource; int gl_view; } ;
struct TYPE_18__ {TYPE_5__* resource; } ;
struct TYPE_17__ {scalar_t__ offscreen_rendering_mode; } ;
struct TYPE_16__ {scalar_t__ rt_mask; } ;
struct TYPE_15__ {scalar_t__ draw_binding; } ;
struct TYPE_14__ {TYPE_3__* resource; int layer_count; int sub_resource_idx; int gl_view; } ;
struct TYPE_13__ {scalar_t__ draw_binding; } ;
struct TYPE_11__ {unsigned int buffers; } ;
struct TYPE_12__ {TYPE_1__ limits; } ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wined3d_context*,scalar_t__) ;
 int FUNC_1 (struct wined3d_context*,int ,TYPE_9__*,int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct wined3d_context*,struct wined3d_state const*) ;
 int FUNC_3 (TYPE_9__*,int ,int) ;
 int * FUNC_4 (TYPE_8__*) ;
 TYPE_7__ VAR_4 ;

void FUNC_5(struct wined3d_context *VAR_5, const struct wined3d_state *VAR_6, DWORD VAR_7)
{
    DWORD VAR_8 = FUNC_2(VAR_5, VAR_6);
    const struct wined3d_fb_state *VAR_9 = VAR_6->fb;
    DWORD VAR_10 = 0;
    DWORD *VAR_11;

    if (VAR_4.offscreen_rendering_mode == VAR_1)
    {
        if (!VAR_5->render_offscreen)
        {
            FUNC_1(VAR_5, VAR_0, ((void*)0), ((void*)0),
                    VAR_2, VAR_2);
        }
        else
        {
            unsigned int VAR_12;

            FUNC_3(VAR_5->blit_targets, 0, sizeof(VAR_5->blit_targets));
            for (VAR_12 = 0; VAR_12 < VAR_5->gl_info->limits.buffers; ++VAR_12)
            {
                if (!VAR_9->render_targets[VAR_12])
                    continue;

                VAR_5->blit_targets[VAR_12].gl_view = VAR_9->render_targets[VAR_12]->gl_view;
                VAR_5->blit_targets[VAR_12].resource = VAR_9->render_targets[VAR_12]->resource;
                VAR_5->blit_targets[VAR_12].sub_resource_idx = VAR_9->render_targets[VAR_12]->sub_resource_idx;
                VAR_5->blit_targets[VAR_12].layer_count = VAR_9->render_targets[VAR_12]->layer_count;

                if (!VAR_10)
                    VAR_10 = VAR_9->render_targets[VAR_12]->resource->draw_binding;
            }
            FUNC_1(VAR_5, VAR_0, VAR_5->blit_targets,
                    FUNC_4(VAR_9->depth_stencil),
                    VAR_10, VAR_9->depth_stencil ? VAR_9->depth_stencil->resource->draw_binding : 0);
        }
    }

    VAR_11 = VAR_5->current_fbo ? &VAR_5->current_fbo->rt_mask : &VAR_5->draw_buffers_mask;
    if (VAR_8 != *VAR_11)
    {
        FUNC_0(VAR_5, VAR_8);
        *VAR_11 = VAR_8;
    }
    VAR_5->constant_update_mask |= VAR_3;
}
