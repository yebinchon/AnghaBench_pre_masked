
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_xdg_toplevel_state {double min_width; double max_width; double min_height; double max_height; } ;
struct sway_view {TYPE_2__* wlr_xdg_surface; } ;
struct TYPE_4__ {TYPE_1__* toplevel; } ;
struct TYPE_3__ {struct wlr_xdg_toplevel_state current; } ;


 double VAR_0 ;
 double VAR_1 ;

__attribute__((used)) static void FUNC_0(struct sway_view *VAR_2, double *VAR_3,
  double *VAR_4, double *VAR_5, double *VAR_6) {
 struct wlr_xdg_toplevel_state *VAR_7 =
  &VAR_2->wlr_xdg_surface->toplevel->current;
 *VAR_3 = VAR_7->min_width > 0 ? VAR_7->min_width : VAR_1;
 *VAR_4 = VAR_7->max_width > 0 ? VAR_7->max_width : VAR_0;
 *VAR_5 = VAR_7->min_height > 0 ? VAR_7->min_height : VAR_1;
 *VAR_6 = VAR_7->max_height > 0 ? VAR_7->max_height : VAR_0;
}
