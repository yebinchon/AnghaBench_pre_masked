
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_fb_state {int dummy; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_color {int dummy; } ;
struct wined3d_blitter {TYPE_1__* ops; struct wined3d_blitter* next; } ;
struct TYPE_2__ {int (* blitter_clear ) (struct wined3d_blitter*,struct wined3d_device*,unsigned int,struct wined3d_fb_state const*,unsigned int,int const*,int const*,int ,struct wined3d_color const*,float,int ) ;} ;
typedef int RECT ;
typedef int DWORD ;


 int FUNC_0 (struct wined3d_blitter*,struct wined3d_device*,unsigned int,struct wined3d_fb_state const*,unsigned int,int const*,int const*,int ,struct wined3d_color const*,float,int ) ;

__attribute__((used)) static void FUNC_1(struct wined3d_blitter *VAR_0, struct wined3d_device *VAR_1,
        unsigned int VAR_2, const struct wined3d_fb_state *VAR_3, unsigned int VAR_4, const RECT *VAR_5,
        const RECT *VAR_6, DWORD VAR_7, const struct wined3d_color *VAR_8, float VAR_9, DWORD VAR_10)
{
    struct wined3d_blitter *VAR_11;

    if ((VAR_11 = VAR_0->next))
        VAR_11->ops->blitter_clear(VAR_11, VAR_1, VAR_2, VAR_3, VAR_4,
                VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
