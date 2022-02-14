
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* format; int draw_binding; } ;
struct wined3d_texture {TYPE_7__ resource; TYPE_2__* sub_resources; } ;
struct wined3d_surface {int dummy; } ;
struct wined3d_device {int dummy; } ;
struct TYPE_10__ {size_t sub_resource_idx; struct wined3d_texture* texture; } ;
struct wined3d_context {int draw_buffers_mask; TYPE_5__* current_fbo; TYPE_3__ current_rt; scalar_t__ render_offscreen; } ;
struct TYPE_13__ {scalar_t__ offscreen_rendering_mode; } ;
struct TYPE_12__ {int rt_mask; } ;
struct TYPE_11__ {scalar_t__ id; } ;
struct TYPE_8__ {struct wined3d_surface* surface; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wined3d_device const*,struct wined3d_context*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct wined3d_context*,int) ;
 int FUNC_2 (struct wined3d_context*,int ,struct wined3d_surface*,int *,int ) ;
 int FUNC_3 (struct wined3d_context*,int ,int ) ;
 int FUNC_4 (struct wined3d_context*,int ) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (struct wined3d_context*,struct wined3d_texture*) ;
 int FUNC_7 (struct wined3d_context*,int ) ;
 TYPE_6__ VAR_5 ;
 int FUNC_8 (struct wined3d_texture*,struct wined3d_context*,int ) ;

void FUNC_9(struct wined3d_context *VAR_6, const struct wined3d_device *VAR_7)
{
    struct wined3d_texture *VAR_8 = VAR_6->current_rt.texture;
    struct wined3d_surface *VAR_9;
    DWORD VAR_10, *VAR_11;

    if (VAR_5.offscreen_rendering_mode == VAR_2)
    {
        if (VAR_6->render_offscreen)
        {
            FUNC_8(VAR_8, VAR_6, VAR_0);

            VAR_9 = VAR_8->sub_resources[VAR_6->current_rt.sub_resource_idx].u.surface;
            FUNC_2(VAR_6, VAR_1, VAR_9, ((void*)0), VAR_8->resource.draw_binding);
            if (VAR_8->resource.format->id != VAR_4)
                VAR_10 = 1;
            else
                VAR_10 = 0;
        }
        else
        {
            VAR_6->current_fbo = ((void*)0);
            FUNC_3(VAR_6, VAR_1, 0);
            VAR_10 = FUNC_5(&VAR_8->resource);
        }
    }
    else
    {
        VAR_10 = FUNC_6(VAR_6, VAR_8);
    }

    VAR_11 = VAR_6->current_fbo ? &VAR_6->current_fbo->rt_mask : &VAR_6->draw_buffers_mask;

    if (VAR_10 != *VAR_11)
    {
        FUNC_1(VAR_6, VAR_10);
        *VAR_11 = VAR_10;
    }

    if (VAR_5.offscreen_rendering_mode == VAR_2)
    {
        FUNC_4(VAR_6, VAR_1);
    }

    FUNC_0(VAR_7, VAR_6);
    FUNC_7(VAR_6, VAR_3);
}
