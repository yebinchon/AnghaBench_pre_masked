
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_xdg_surface {scalar_t__ role; scalar_t__ toplevel; } ;
struct sway_view {struct wlr_xdg_surface* wlr_xdg_surface; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wlr_xdg_surface*) ;
 int * FUNC_1 (struct sway_view*) ;

__attribute__((used)) static void FUNC_2(struct sway_view *VAR_1) {
 if (FUNC_1(VAR_1) == ((void*)0)) {
  return;
 }
 struct wlr_xdg_surface *VAR_2 = VAR_1->wlr_xdg_surface;
 if (VAR_2->role == VAR_0
   && VAR_2->toplevel) {
  FUNC_0(VAR_2);
 }
}
