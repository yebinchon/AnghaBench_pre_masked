
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wl_keyboard {int dummy; } ;
struct vo_wayland_state {int xkb_state; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct wl_keyboard *VAR_1,
                                      uint32_t VAR_2, uint32_t VAR_3,
                                      uint32_t VAR_4, uint32_t VAR_5,
                                      uint32_t VAR_6)
{
    struct vo_wayland_state *VAR_7 = VAR_0;

    FUNC_0(VAR_7->xkb_state, VAR_3, VAR_4,
                          VAR_5, 0, 0, VAR_6);
}
