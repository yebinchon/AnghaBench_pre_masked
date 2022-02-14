
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_xdg_surface {int dummy; } ;
struct sway_view {struct wlr_xdg_surface* wlr_xdg_surface; } ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wlr_xdg_surface*,int) ;
 int * FUNC_1 (struct sway_view*) ;

__attribute__((used)) static void FUNC_2(struct sway_view *VAR_5, bool VAR_6) {
 if (FUNC_1(VAR_5) == ((void*)0)) {
  return;
 }
 struct wlr_xdg_surface *VAR_7 = VAR_5->wlr_xdg_surface;
 enum wlr_edges VAR_8 = VAR_2;
 if (VAR_6) {
  VAR_8 = VAR_1 | VAR_3 | VAR_4 |
    VAR_0;
 }
 FUNC_0(VAR_7, VAR_8);
}
