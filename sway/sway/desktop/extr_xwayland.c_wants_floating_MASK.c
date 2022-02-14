
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xcb_atom_t ;
struct wlr_xwayland_surface_size_hints {scalar_t__ min_width; scalar_t__ min_height; scalar_t__ max_width; scalar_t__ max_height; } ;
struct wlr_xwayland_surface {size_t window_type_len; scalar_t__* window_type; struct wlr_xwayland_surface_size_hints* size_hints; scalar_t__ modal; } ;
struct sway_xwayland {scalar_t__* atoms; } ;
struct sway_view {struct wlr_xwayland_surface* wlr_xwayland_surface; } ;
struct TYPE_2__ {struct sway_xwayland xwayland; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__ VAR_4 ;
 int * FUNC_0 (struct sway_view*) ;

__attribute__((used)) static bool FUNC_1(struct sway_view *VAR_5) {
 if (FUNC_0(VAR_5) == ((void*)0)) {
  return 0;
 }
 struct wlr_xwayland_surface *VAR_6 = VAR_5->wlr_xwayland_surface;
 struct sway_xwayland *VAR_7 = &VAR_4.xwayland;

 if (VAR_6->modal) {
  return 1;
 }

 for (size_t VAR_8 = 0; VAR_8 < VAR_6->window_type_len; ++VAR_8) {
  xcb_atom_t VAR_9 = VAR_6->window_type[VAR_8];
  if (VAR_9 == VAR_7->atoms[VAR_0] ||
    VAR_9 == VAR_7->atoms[VAR_3] ||
    VAR_9 == VAR_7->atoms[VAR_2] ||
    VAR_9 == VAR_7->atoms[VAR_1]) {
   return 1;
  }
 }

 struct wlr_xwayland_surface_size_hints *VAR_10 = VAR_6->size_hints;
 if (VAR_10 != ((void*)0) &&
   VAR_10->min_width > 0 && VAR_10->min_height > 0 &&
   (VAR_10->max_width == VAR_10->min_width ||
   VAR_10->max_height == VAR_10->min_height)) {
  return 1;
 }

 return 0;
}
