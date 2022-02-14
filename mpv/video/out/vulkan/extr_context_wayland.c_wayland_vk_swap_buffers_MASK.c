
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo_wayland_state {int user_sbc; int frame_wait; scalar_t__ presentation; TYPE_1__* opts; int feedback; int surface; } ;
struct ra_ctx {TYPE_2__* vo; } ;
struct TYPE_4__ {struct vo_wayland_state* wl; } ;
struct TYPE_3__ {int frame_offset; int disable_vsync; } ;


 int VAR_0 ;
 int FUNC_0 (struct vo_wayland_state*) ;
 int FUNC_1 (struct vo_wayland_state*) ;
 int FUNC_2 (struct vo_wayland_state*,int ) ;
 int FUNC_3 (struct vo_wayland_state*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int *,struct vo_wayland_state*) ;

__attribute__((used)) static void FUNC_6(struct ra_ctx *VAR_1)
{
    struct vo_wayland_state *VAR_2 = VAR_1->vo->wl;

    if (VAR_2->presentation) {
        VAR_2->feedback = FUNC_4(VAR_2->presentation, VAR_2->surface);
        FUNC_5(VAR_2->feedback, &VAR_0, VAR_2);
        VAR_2->user_sbc += 1;
        int VAR_3 = FUNC_0(VAR_2);
        if (VAR_3 < 0)
            FUNC_1(VAR_2);
    }

    if (!VAR_2->opts->disable_vsync)
        FUNC_2(VAR_2, VAR_2->opts->frame_offset);

    if (VAR_2->presentation)
        FUNC_3(VAR_2);

    VAR_2->frame_wait = 1;
}
