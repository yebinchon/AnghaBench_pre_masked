
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_xdg_toplevel_state {scalar_t__ min_width; scalar_t__ min_height; scalar_t__ max_width; scalar_t__ max_height; } ;
struct wlr_xdg_toplevel {scalar_t__ parent; struct wlr_xdg_toplevel_state current; } ;
struct sway_view {TYPE_1__* wlr_xdg_surface; } ;
struct TYPE_2__ {struct wlr_xdg_toplevel* toplevel; } ;



__attribute__((used)) static bool FUNC_0(struct sway_view *VAR_0) {
 struct wlr_xdg_toplevel *VAR_1 = VAR_0->wlr_xdg_surface->toplevel;
 struct wlr_xdg_toplevel_state *VAR_2 = &VAR_1->current;
 return (VAR_2->min_width != 0 && VAR_2->min_height != 0
  && (VAR_2->min_width == VAR_2->max_width
  || VAR_2->min_height == VAR_2->max_height))
  || VAR_1->parent;
}
