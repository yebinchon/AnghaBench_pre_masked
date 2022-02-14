
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_wayland_state {int xdg_toplevel; int xdg_surface; int surface; int wm_base; } ;


 int FUNC_0 (int ,int *,struct vo_wayland_state*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,struct vo_wayland_state*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct vo_wayland_state *VAR_2)
{
    VAR_2->xdg_surface = FUNC_5(VAR_2->wm_base, VAR_2->surface);
    FUNC_0(VAR_2->xdg_surface, &VAR_0, VAR_2);

    VAR_2->xdg_toplevel = FUNC_1(VAR_2->xdg_surface);
    FUNC_2(VAR_2->xdg_toplevel, &VAR_1, VAR_2);

    FUNC_4 (VAR_2->xdg_toplevel, "mpv");
    FUNC_3(VAR_2->xdg_toplevel, "mpv");

    return 0;
}
