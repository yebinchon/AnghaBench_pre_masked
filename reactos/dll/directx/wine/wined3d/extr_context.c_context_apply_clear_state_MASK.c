
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct wined3d_state {struct wined3d_fb_state const* fb; } ;
struct wined3d_rendertarget_view {TYPE_2__* format; TYPE_7__* resource; int layer_count; int sub_resource_idx; int gl_view; } ;
struct TYPE_16__ {int (* p_glDisable ) (int ) ;int (* p_glEnable ) (int ) ;} ;
struct TYPE_17__ {TYPE_4__ gl; } ;
struct TYPE_13__ {unsigned int buffers; } ;
struct wined3d_gl_info {TYPE_5__ gl_ops; scalar_t__* supported; TYPE_1__ limits; } ;
struct wined3d_fb_state {struct wined3d_rendertarget_view* depth_stencil; struct wined3d_rendertarget_view** render_targets; } ;
struct wined3d_context {unsigned int draw_buffers_mask; int last_was_blit; TYPE_3__* current_fbo; TYPE_9__* blit_targets; struct wined3d_gl_info* gl_info; } ;
typedef unsigned int UINT ;
struct TYPE_21__ {int layer_count; int sub_resource_idx; TYPE_7__* resource; int gl_view; } ;
struct TYPE_20__ {int * container; } ;
struct TYPE_19__ {int draw_binding; } ;
struct TYPE_18__ {scalar_t__ offscreen_rendering_mode; } ;
struct TYPE_15__ {unsigned int rt_mask; } ;
struct TYPE_14__ {scalar_t__ id; } ;
typedef unsigned int DWORD ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wined3d_context*,unsigned int) ;
 int FUNC_4 (struct wined3d_context*,int ,TYPE_9__*,TYPE_8__*,int ,int ) ;
 int FUNC_5 (struct wined3d_context*,int ) ;
 unsigned int FUNC_6 (TYPE_7__*) ;
 unsigned int FUNC_7 (struct wined3d_context*,int *) ;
 int FUNC_8 (struct wined3d_context*,int ) ;
 int FUNC_9 (struct wined3d_context*,struct wined3d_rendertarget_view*) ;
 int FUNC_10 (unsigned int,struct wined3d_rendertarget_view* const*,struct wined3d_rendertarget_view*) ;
 scalar_t__ FUNC_11 (struct wined3d_context*,int ) ;
 int FUNC_12 (TYPE_9__*,int ,int) ;
 scalar_t__ FUNC_13 (struct wined3d_context*,struct wined3d_state const*,struct wined3d_fb_state const*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 TYPE_8__* FUNC_18 (struct wined3d_rendertarget_view* const) ;
 scalar_t__ FUNC_19 (TYPE_7__*) ;
 TYPE_6__ VAR_15 ;

BOOL FUNC_20(struct wined3d_context *VAR_16, const struct wined3d_state *VAR_17,
        UINT VAR_18, const struct wined3d_fb_state *VAR_19)
{
    struct wined3d_rendertarget_view * const *VAR_20 = VAR_19->render_targets;
    struct wined3d_rendertarget_view *VAR_21 = VAR_19->depth_stencil;
    const struct wined3d_gl_info *VAR_22 = VAR_16->gl_info;
    DWORD VAR_23 = 0, *VAR_24;
    unsigned int VAR_25;

    if (FUNC_11(VAR_16, VAR_7) || VAR_19 != VAR_17->fb
            || VAR_18 != VAR_22->limits.buffers)
    {
        if (!FUNC_10(VAR_18, VAR_20, VAR_21))
        {
            FUNC_1("Invalid render target config, need at least one attachment.\n");
            return VAR_1;
        }

        if (VAR_15.offscreen_rendering_mode == VAR_6)
        {
            FUNC_9(VAR_16, VAR_21);

            if (!VAR_18 || FUNC_19(VAR_20[0]->resource))
            {
                FUNC_12(VAR_16->blit_targets, 0, sizeof(VAR_16->blit_targets));
                for (VAR_25 = 0; VAR_25 < VAR_18; ++VAR_25)
                {
                    if (VAR_20[VAR_25])
                    {
                        VAR_16->blit_targets[VAR_25].gl_view = VAR_20[VAR_25]->gl_view;
                        VAR_16->blit_targets[VAR_25].resource = VAR_20[VAR_25]->resource;
                        VAR_16->blit_targets[VAR_25].sub_resource_idx = VAR_20[VAR_25]->sub_resource_idx;
                        VAR_16->blit_targets[VAR_25].layer_count = VAR_20[VAR_25]->layer_count;
                    }
                    if (VAR_20[VAR_25] && VAR_20[VAR_25]->format->id != VAR_10)
                        VAR_23 |= (1u << VAR_25);
                }
                FUNC_4(VAR_16, VAR_3, VAR_16->blit_targets,
                        FUNC_18(VAR_21),
                        VAR_18 ? VAR_20[0]->resource->draw_binding : 0,
                        VAR_21 ? VAR_21->resource->draw_binding : 0);
            }
            else
            {
                FUNC_4(VAR_16, VAR_3, ((void*)0), ((void*)0),
                        VAR_11, VAR_11);
                VAR_23 = FUNC_6(VAR_20[0]->resource);
            }




            FUNC_8(VAR_16, VAR_7);
        }
        else
        {
            VAR_23 = FUNC_7(VAR_16,
                    VAR_18 ? FUNC_18(VAR_20[0])->container : ((void*)0));
        }
    }
    else if (VAR_15.offscreen_rendering_mode == VAR_6
            && (!VAR_18 || FUNC_19(VAR_20[0]->resource)))
    {
        for (VAR_25 = 0; VAR_25 < VAR_18; ++VAR_25)
        {
            if (VAR_20[VAR_25] && VAR_20[VAR_25]->format->id != VAR_10)
                VAR_23 |= (1u << VAR_25);
        }
    }
    else
    {
        VAR_23 = FUNC_7(VAR_16,
                VAR_18 ? FUNC_18(VAR_20[0])->container : ((void*)0));
    }

    VAR_24 = VAR_16->current_fbo ? &VAR_16->current_fbo->rt_mask : &VAR_16->draw_buffers_mask;

    if (VAR_23 != *VAR_24)
    {
        FUNC_3(VAR_16, VAR_23);
        *VAR_24 = VAR_23;
        FUNC_8(VAR_16, VAR_7);
    }

    if (VAR_15.offscreen_rendering_mode == VAR_6)
    {
        FUNC_5(VAR_16, VAR_3);
    }

    VAR_16->last_was_blit = VAR_1;




    VAR_22->gl_ops.gl.p_glDisable(VAR_2);
    VAR_22->gl_ops.gl.p_glEnable(VAR_5);
    if (VAR_18 && VAR_22->supported[VAR_0])
    {
        if (FUNC_13(VAR_16, VAR_17, VAR_19))
            VAR_22->gl_ops.gl.p_glEnable(VAR_4);
        else
            VAR_22->gl_ops.gl.p_glDisable(VAR_4);
        FUNC_8(VAR_16, FUNC_0(VAR_14));
    }
    FUNC_2("setting up state for clear");

    FUNC_8(VAR_16, FUNC_0(VAR_12));
    FUNC_8(VAR_16, FUNC_0(VAR_13));
    FUNC_8(VAR_16, VAR_8);

    return VAR_9;
}
