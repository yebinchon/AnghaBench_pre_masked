
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo_wayland_state {int user_sbc; int frame_wait; scalar_t__ presentation; TYPE_2__* opts; int feedback; int surface; } ;
struct ra_ctx {TYPE_1__* vo; struct priv* priv; } ;
struct priv {int egl_surface; int egl_display; } ;
struct TYPE_4__ {int frame_offset; int disable_vsync; } ;
struct TYPE_3__ {struct vo_wayland_state* wl; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct vo_wayland_state*) ;
 int FUNC_2 (struct vo_wayland_state*) ;
 int FUNC_3 (struct vo_wayland_state*,int ) ;
 int FUNC_4 (struct vo_wayland_state*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,int *,struct vo_wayland_state*) ;

__attribute__((used)) static void FUNC_7(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    struct vo_wayland_state *VAR_3 = VAR_1->vo->wl;

    if (VAR_3->presentation) {
        VAR_3->feedback = FUNC_5(VAR_3->presentation, VAR_3->surface);
        FUNC_6(VAR_3->feedback, &VAR_0, VAR_3);
        VAR_3->user_sbc += 1;
        int VAR_4 = FUNC_1(VAR_3);
        if (VAR_4 < 0)
            FUNC_2(VAR_3);
    }

    FUNC_0(VAR_2->egl_display, VAR_2->egl_surface);
    if (!VAR_3->opts->disable_vsync)
        FUNC_3(VAR_3, VAR_3->opts->frame_offset);

    if (VAR_3->presentation)
        FUNC_4(VAR_3);

    VAR_3->frame_wait = 1;
}
