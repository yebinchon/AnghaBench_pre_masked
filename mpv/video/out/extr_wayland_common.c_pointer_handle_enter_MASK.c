
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_surface {int dummy; } ;
struct wl_pointer {int dummy; } ;
struct vo_wayland_state {TYPE_1__* vo; int cursor_visible; int pointer_id; struct wl_pointer* pointer; } ;
struct TYPE_2__ {int input_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vo_wayland_state*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, struct wl_pointer *VAR_2,
                                 uint32_t VAR_3, struct wl_surface *VAR_4,
                                 wl_fixed_t VAR_5, wl_fixed_t VAR_6)
{
    struct vo_wayland_state *VAR_7 = VAR_1;

    VAR_7->pointer = VAR_2;
    VAR_7->pointer_id = VAR_3;

    FUNC_1(VAR_7, VAR_7->cursor_visible);
    FUNC_0(VAR_7->vo->input_ctx, VAR_0);
}
