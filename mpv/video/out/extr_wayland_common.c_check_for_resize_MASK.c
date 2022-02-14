
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wl_fixed_t ;
struct vo_wayland_state {int geometry; scalar_t__ maximized; scalar_t__ fullscreen; scalar_t__ touch_entries; } ;
typedef enum xdg_toplevel_resize_edge { ____Placeholder_xdg_toplevel_resize_edge } xdg_toplevel_resize_edge ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int const FUNC_0 (int ) ;
 int const FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct vo_wayland_state *VAR_8, wl_fixed_t VAR_9, wl_fixed_t VAR_10,
                            enum xdg_toplevel_resize_edge *VAR_11)
{
    if (VAR_8->touch_entries || VAR_8->fullscreen || VAR_8->maximized)
        return 0;

    const int VAR_12 = 64;
    int VAR_13[2] = { FUNC_2(VAR_9), FUNC_2(VAR_10) };
    int VAR_14 = VAR_13[0] < VAR_12;
    int VAR_15 = VAR_13[1] < VAR_12;
    int VAR_16 = VAR_13[0] > (FUNC_1(VAR_8->geometry) - VAR_12);
    int VAR_17 = VAR_13[1] > (FUNC_0(VAR_8->geometry) - VAR_12);

    if (VAR_14) {
        *VAR_11 = VAR_3;
        if (VAR_15)
            *VAR_11 = VAR_6;
        else if (VAR_17)
            *VAR_11 = VAR_1;
    } else if (VAR_16) {
        *VAR_11 = VAR_4;
        if (VAR_15)
            *VAR_11 = VAR_7;
        else if (VAR_17)
            *VAR_11 = VAR_2;
    } else if (VAR_15) {
        *VAR_11 = VAR_5;
    } else if (VAR_17) {
        *VAR_11 = VAR_0;
    } else {
        *VAR_11 = 0;
        return 0;
    }

    return 1;
}
