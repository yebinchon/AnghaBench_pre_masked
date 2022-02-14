
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_rendertarget_view {int format_flags; TYPE_2__* format; TYPE_1__* resource; } ;
struct wined3d_fb_state {struct wined3d_rendertarget_view* depth_stencil; struct wined3d_rendertarget_view** render_targets; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_color {int dummy; } ;
struct wined3d_blitter {TYPE_3__* ops; struct wined3d_blitter* next; } ;
struct TYPE_8__ {scalar_t__ offscreen_rendering_mode; } ;
struct TYPE_7__ {int (* blitter_clear ) (struct wined3d_blitter*,struct wined3d_device*,unsigned int,struct wined3d_fb_state const*,unsigned int,int const*,int const*,int,struct wined3d_color const*,float,int) ;} ;
struct TYPE_6__ {int stencil_size; int depth_size; } ;
struct TYPE_5__ {int usage; } ;
typedef int RECT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wined3d_device*,unsigned int,struct wined3d_fb_state const*,unsigned int,int const*,int const*,int,struct wined3d_color const*,float,int) ;
 scalar_t__ FUNC_1 (struct wined3d_rendertarget_view*) ;
 int FUNC_2 (struct wined3d_blitter*,struct wined3d_device*,unsigned int,struct wined3d_fb_state const*,unsigned int,int const*,int const*,int,struct wined3d_color const*,float,int) ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static void FUNC_3(struct wined3d_blitter *VAR_7, struct wined3d_device *VAR_8,
        unsigned int VAR_9, const struct wined3d_fb_state *VAR_10, unsigned int VAR_11, const RECT *VAR_12,
        const RECT *VAR_13, DWORD VAR_14, const struct wined3d_color *VAR_15, float VAR_16, DWORD VAR_17)
{
    struct wined3d_rendertarget_view *VAR_18;
    struct wined3d_blitter *VAR_19;
    DWORD VAR_20 = 0;
    unsigned int VAR_21;

    if (VAR_14 & VAR_2)
    {
        for (VAR_21 = 0; VAR_21 < VAR_9; ++VAR_21)
        {
            if (!(VAR_18 = VAR_10->render_targets[VAR_21]))
                continue;

            if (FUNC_1(VAR_18)
                    || (!(VAR_18->resource->usage & VAR_5)
                    && (VAR_6.offscreen_rendering_mode != VAR_0
                    || !(VAR_18->format_flags & VAR_4))))
            {
                VAR_20 |= VAR_2;
                VAR_14 &= ~VAR_2;
                break;
            }



        }
    }

    if ((VAR_14 & (VAR_3 | VAR_1)) && (VAR_18 = VAR_10->depth_stencil)
            && (!VAR_18->format->depth_size || (VAR_14 & VAR_3))
            && (!VAR_18->format->stencil_size || (VAR_14 & VAR_1))
            && FUNC_1(VAR_18))
    {
        VAR_20 |= VAR_14 & (VAR_3 | VAR_1);
        VAR_14 &= ~(VAR_3 | VAR_1);
    }

    if (VAR_14)
        FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11,
                VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);

    if (VAR_20 && (VAR_19 = VAR_7->next))
        VAR_19->ops->blitter_clear(VAR_19, VAR_8, VAR_9, VAR_10, VAR_11,
                VAR_12, VAR_13, VAR_20, VAR_15, VAR_16, VAR_17);
}
