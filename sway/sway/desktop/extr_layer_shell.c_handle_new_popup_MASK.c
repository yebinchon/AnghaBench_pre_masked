
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_xdg_popup {int dummy; } ;
struct wl_listener {int dummy; } ;
struct sway_layer_surface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wlr_xdg_popup*,int ,struct sway_layer_surface*) ;
 int VAR_1 ;
 struct sway_layer_surface* VAR_2 ;
 struct sway_layer_surface* FUNC_1 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_layer_surface *VAR_5 =
  FUNC_1(VAR_3, VAR_5, VAR_1);
 struct wlr_xdg_popup *VAR_6 = VAR_4;
 FUNC_0(VAR_6, VAR_0, VAR_5);
}
