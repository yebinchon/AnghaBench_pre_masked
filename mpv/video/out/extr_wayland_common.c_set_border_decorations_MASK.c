
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_wayland_state {int xdg_toplevel_decoration; } ;
typedef enum zxdg_toplevel_decoration_v1_mode { ____Placeholder_zxdg_toplevel_decoration_v1_mode } zxdg_toplevel_decoration_v1_mode ;


 int FUNC_0 (struct vo_wayland_state*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct vo_wayland_state *VAR_4, int VAR_5)
{
    if (!VAR_4->xdg_toplevel_decoration)
        return VAR_0;

    enum zxdg_toplevel_decoration_v1_mode VAR_6;
    if (VAR_5) {
        FUNC_0(VAR_4, "Enabling server decorations\n");
        VAR_6 = VAR_3;
    } else {
        FUNC_0(VAR_4, "Disabling server decorations\n");
        VAR_6 = VAR_2;
    }
    FUNC_1(VAR_4->xdg_toplevel_decoration, VAR_6);
    return VAR_1;
}
