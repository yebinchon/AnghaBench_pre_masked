
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_xwayland_surface {int mapped; } ;
struct wl_listener {int dummy; } ;
struct sway_view {int container; struct wlr_xwayland_surface* wlr_xwayland_surface; } ;
struct sway_xwayland_view {struct sway_view view; } ;
struct sway_seat {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sway_seat* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct sway_seat*,int ) ;
 struct sway_xwayland_view* FUNC_3 (struct wl_listener*,int ,int ) ;
 struct sway_xwayland_view* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_xwayland_view *VAR_4 =
  FUNC_3(VAR_2, VAR_4, VAR_0);
 struct sway_view *VAR_5 = &VAR_4->view;
 struct wlr_xwayland_surface *VAR_6 = VAR_5->wlr_xwayland_surface;
 if (!VAR_6->mapped) {
  return;
 }
 if (!FUNC_0(VAR_5->container)) {
  return;
 }
 struct sway_seat *VAR_7 = FUNC_1();
 FUNC_2(VAR_7, VAR_5->container);
}
