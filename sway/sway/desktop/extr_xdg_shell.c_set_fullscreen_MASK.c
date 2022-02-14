
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_xdg_surface {int dummy; } ;
struct sway_view {struct wlr_xdg_surface* wlr_xdg_surface; } ;


 int FUNC_0 (struct wlr_xdg_surface*,int) ;
 int * FUNC_1 (struct sway_view*) ;

__attribute__((used)) static void FUNC_2(struct sway_view *VAR_0, bool VAR_1) {
 if (FUNC_1(VAR_0) == ((void*)0)) {
  return;
 }
 struct wlr_xdg_surface *VAR_2 = VAR_0->wlr_xdg_surface;
 FUNC_0(VAR_2, VAR_1);
}
