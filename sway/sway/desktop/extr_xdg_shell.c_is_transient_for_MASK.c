
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_xdg_surface {scalar_t__ role; TYPE_1__* toplevel; } ;
struct sway_view {struct wlr_xdg_surface* wlr_xdg_surface; } ;
struct TYPE_2__ {struct wlr_xdg_surface* parent; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (struct sway_view*) ;

__attribute__((used)) static bool FUNC_1(struct sway_view *VAR_1,
  struct sway_view *VAR_2) {
 if (FUNC_0(VAR_1) == ((void*)0)) {
  return 0;
 }
 struct wlr_xdg_surface *VAR_3 = VAR_1->wlr_xdg_surface;
 while (VAR_3 && VAR_3->role == VAR_0) {
  if (VAR_3->toplevel->parent == VAR_2->wlr_xdg_surface) {
   return 1;
  }
  VAR_3 = VAR_3->toplevel->parent;
 }
 return 0;
}
