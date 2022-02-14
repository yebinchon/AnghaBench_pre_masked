
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_rendertarget_view {TYPE_1__* format; } ;
struct wined3d_fb_state {struct wined3d_rendertarget_view* depth_stencil; struct wined3d_rendertarget_view** render_targets; } ;
struct wined3d_device {int dummy; } ;
typedef struct wined3d_color {float member_0; float member_1; float member_2; float member_3; } const wined3d_color ;
struct wined3d_box {scalar_t__ left; scalar_t__ top; scalar_t__ right; scalar_t__ bottom; int back; scalar_t__ front; } ;
struct wined3d_blitter {int dummy; } ;
struct TYPE_6__ {int bottom; int right; int top; int left; } ;
struct TYPE_5__ {int id; scalar_t__ stencil_size; scalar_t__ depth_size; } ;
typedef TYPE_2__ RECT ;
typedef int DWORD ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wined3d_rendertarget_view*,struct wined3d_box*,struct wined3d_color const*) ;

__attribute__((used)) static void FUNC_5(struct wined3d_blitter *VAR_3, struct wined3d_device *VAR_4,
        unsigned int VAR_5, const struct wined3d_fb_state *VAR_6, unsigned int VAR_7, const RECT *VAR_8,
        const RECT *VAR_9, DWORD VAR_10, const struct wined3d_color *VAR_11, float VAR_12, DWORD VAR_13)
{
    struct wined3d_color VAR_14 = {VAR_12, 0.0f, 0.0f, 0.0f};
    struct wined3d_rendertarget_view *VAR_15;
    struct wined3d_box VAR_16;
    unsigned int VAR_17, VAR_18;

    if (!VAR_7)
    {
        VAR_7 = 1;
        VAR_8 = VAR_9;
    }

    for (VAR_17 = 0; VAR_17 < VAR_7; ++VAR_17)
    {
        VAR_16.left = FUNC_2(VAR_8[VAR_17].left, VAR_9->left);
        VAR_16.top = FUNC_2(VAR_8[VAR_17].top, VAR_9->top);
        VAR_16.right = FUNC_3(VAR_8[VAR_17].right, VAR_9->right);
        VAR_16.bottom = FUNC_3(VAR_8[VAR_17].bottom, VAR_9->bottom);
        VAR_16.front = 0;
        VAR_16.back = 1;

        if (VAR_16.left >= VAR_16.right || VAR_16.top >= VAR_16.bottom)
            continue;

        if (VAR_10 & VAR_1)
        {
            for (VAR_18 = 0; VAR_18 < VAR_5; ++VAR_18)
            {
                if ((VAR_15 = VAR_6->render_targets[VAR_18]))
                    FUNC_4(VAR_15, &VAR_16, VAR_11);
            }
        }

        if ((VAR_10 & (VAR_2 | VAR_0)) && (VAR_15 = VAR_6->depth_stencil))
        {
            if ((VAR_15->format->depth_size && !(VAR_10 & VAR_2))
                    || (VAR_15->format->stencil_size && !(VAR_10 & VAR_0)))
                FUNC_0("Clearing %#x on %s.\n", VAR_10, FUNC_1(VAR_15->format->id));

            FUNC_4(VAR_15, &VAR_16, &VAR_14);
        }
    }
}
