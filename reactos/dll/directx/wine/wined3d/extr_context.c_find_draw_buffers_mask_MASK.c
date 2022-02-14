
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_state {struct wined3d_shader** shader; TYPE_1__* fb; } ;
struct TYPE_8__ {int rt_mask; } ;
struct wined3d_shader {TYPE_2__ reg_maps; } ;
struct wined3d_rendertarget_view {TYPE_4__* format; int resource; } ;
struct wined3d_context {TYPE_3__* d3d_info; int gl_info; int render_offscreen; } ;
struct TYPE_12__ {int container; } ;
struct TYPE_11__ {scalar_t__ offscreen_rendering_mode; } ;
struct TYPE_10__ {scalar_t__ id; } ;
struct TYPE_9__ {int valid_dual_rt_mask; int valid_rt_mask; } ;
struct TYPE_7__ {struct wined3d_rendertarget_view** render_targets; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wined3d_context const*,int ) ;
 unsigned int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (struct wined3d_state const*,int ) ;
 TYPE_6__* FUNC_4 (struct wined3d_rendertarget_view* const) ;
 TYPE_5__ VAR_3 ;

__attribute__((used)) static DWORD FUNC_5(const struct wined3d_context *VAR_4, const struct wined3d_state *VAR_5)
{
    struct wined3d_rendertarget_view * const *VAR_6 = VAR_5->fb->render_targets;
    struct wined3d_shader *VAR_7 = VAR_5->shader[VAR_2];
    DWORD VAR_8, VAR_9;
    unsigned int VAR_10;

    if (VAR_3.offscreen_rendering_mode != VAR_0)
        return FUNC_1(VAR_4, FUNC_4(VAR_6[0])->container);
    else if (!VAR_4->render_offscreen)
        return FUNC_0(VAR_6[0]->resource);






    VAR_8 = VAR_7 ? VAR_7->reg_maps.rt_mask : 1;
    if (FUNC_3(VAR_5, VAR_4->gl_info))
        VAR_8 &= VAR_4->d3d_info->valid_dual_rt_mask;
    else
        VAR_8 &= VAR_4->d3d_info->valid_rt_mask;

    VAR_9 = VAR_8;
    VAR_10 = 0;
    while (VAR_9)
    {
        VAR_10 = FUNC_2(&VAR_9);
        if (!VAR_6[VAR_10] || VAR_6[VAR_10]->format->id == VAR_1)
            VAR_8 &= ~(1u << VAR_10);
    }

    return VAR_8;
}
