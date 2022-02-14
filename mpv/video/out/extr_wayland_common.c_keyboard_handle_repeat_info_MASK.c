
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl_keyboard {int dummy; } ;
struct vo_wayland_state {TYPE_2__* vo; } ;
typedef int int32_t ;
struct TYPE_4__ {int input_ctx; TYPE_1__* opts; } ;
struct TYPE_3__ {scalar_t__ native_keyrepeat; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct wl_keyboard *VAR_1,
                                        int32_t VAR_2, int32_t VAR_3)
{
    struct vo_wayland_state *VAR_4 = VAR_0;
    if (VAR_4->vo->opts->native_keyrepeat)
        FUNC_0(VAR_4->vo->input_ctx, VAR_2, VAR_3);
}
