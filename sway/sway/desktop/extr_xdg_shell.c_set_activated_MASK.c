
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_xdg_surface {scalar_t__ role; } ;
struct sway_view {struct wlr_xdg_surface* wlr_xdg_surface; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wlr_xdg_surface*,int) ;
 int * FUNC_1 (struct sway_view*) ;

__attribute__((used)) static void FUNC_2(struct sway_view *VAR_1, bool VAR_2) {
 if (FUNC_1(VAR_1) == ((void*)0)) {
  return;
 }
 struct wlr_xdg_surface *VAR_3 = VAR_1->wlr_xdg_surface;
 if (VAR_3->role == VAR_0) {
  FUNC_0(VAR_3, VAR_2);
 }
}
