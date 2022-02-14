
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_xwayland_surface_size_hints {double min_width; double max_width; double min_height; double max_height; } ;
struct wlr_xwayland_surface {struct wlr_xwayland_surface_size_hints* size_hints; } ;
struct sway_view {struct wlr_xwayland_surface* wlr_xwayland_surface; } ;


 double VAR_0 ;
 double VAR_1 ;

__attribute__((used)) static void FUNC_0(struct sway_view *VAR_2, double *VAR_3,
  double *VAR_4, double *VAR_5, double *VAR_6) {
 struct wlr_xwayland_surface *VAR_7 = VAR_2->wlr_xwayland_surface;
 struct wlr_xwayland_surface_size_hints *VAR_8 = VAR_7->size_hints;
 *VAR_3 = VAR_8->min_width > 0 ? VAR_8->min_width : VAR_1;
 *VAR_4 = VAR_8->max_width > 0 ? VAR_8->max_width : VAR_0;
 *VAR_5 = VAR_8->min_height > 0 ? VAR_8->min_height : VAR_1;
 *VAR_6 = VAR_8->max_height > 0 ? VAR_8->max_height : VAR_0;
}
