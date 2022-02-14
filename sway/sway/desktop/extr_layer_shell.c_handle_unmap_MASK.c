
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_listener {int dummy; } ;
struct sway_layer_surface {int dummy; } ;


 struct sway_layer_surface* VAR_0 ;
 int FUNC_0 (struct sway_layer_surface*) ;
 struct sway_layer_surface* FUNC_1 (struct wl_listener*,int ,int (*) (struct sway_layer_surface*)) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_1, void *VAR_2) {
 struct sway_layer_surface *VAR_3 = FUNC_1(
   VAR_1, VAR_3, FUNC_0);
 FUNC_0(VAR_3);
}
