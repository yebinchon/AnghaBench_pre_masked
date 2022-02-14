
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_xwayland_surface_configure_event {int height; int width; int y; int x; } ;
struct wlr_xwayland_surface {int dummy; } ;
struct wl_listener {int dummy; } ;
struct sway_xwayland_unmanaged {struct wlr_xwayland_surface* wlr_xwayland_surface; } ;


 int VAR_0 ;
 struct sway_xwayland_unmanaged* VAR_1 ;
 struct sway_xwayland_unmanaged* FUNC_0 (struct wl_listener*,int ,int ) ;
 int FUNC_1 (struct wlr_xwayland_surface*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_2,
  void *VAR_3) {
 struct sway_xwayland_unmanaged *VAR_4 =
  FUNC_0(VAR_2, VAR_4, VAR_0);
 struct wlr_xwayland_surface *VAR_5 = VAR_4->wlr_xwayland_surface;
 struct wlr_xwayland_surface_configure_event *VAR_6 = VAR_3;
 FUNC_1(VAR_5, VAR_6->x, VAR_6->y,
  VAR_6->width, VAR_6->height);
}
