
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_xwayland_surface {scalar_t__ decorations; } ;
struct wl_listener {int dummy; } ;
struct sway_view {struct wlr_xwayland_surface* wlr_xwayland_surface; } ;
struct sway_xwayland_view {struct sway_view view; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sway_view*,int) ;
 struct sway_xwayland_view* FUNC_1 (struct wl_listener*,int ,int ) ;
 struct sway_xwayland_view* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_xwayland_view *VAR_5 =
  FUNC_1(VAR_3, VAR_5, VAR_1);
 struct sway_view *VAR_6 = &VAR_5->view;
 struct wlr_xwayland_surface *VAR_7 = VAR_6->wlr_xwayland_surface;

 bool VAR_8 = VAR_7->decorations != VAR_0;
 FUNC_0(VAR_6, VAR_8);
}
