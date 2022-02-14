
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_touch {int dummy; } ;
struct vo_wayland_state {TYPE_1__* vo; scalar_t__ touch_entries; } ;
typedef int int32_t ;
struct TYPE_2__ {int input_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_2, struct wl_touch *VAR_3,
                            uint32_t VAR_4, uint32_t VAR_5, int32_t VAR_6)
{
    struct vo_wayland_state *VAR_7 = VAR_2;

    VAR_7->touch_entries = 0;

    FUNC_0(VAR_7->vo->input_ctx, VAR_1 | VAR_0);
}
