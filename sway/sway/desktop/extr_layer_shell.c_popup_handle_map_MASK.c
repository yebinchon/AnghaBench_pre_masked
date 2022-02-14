
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_output {int dummy; } ;
struct wl_listener {int dummy; } ;
struct sway_layer_surface {TYPE_1__* layer_surface; } ;
struct sway_layer_popup {TYPE_3__* wlr_popup; } ;
struct TYPE_6__ {TYPE_2__* base; } ;
struct TYPE_5__ {int surface; } ;
struct TYPE_4__ {struct wlr_output* output; } ;


 int VAR_0 ;
 struct sway_layer_popup* VAR_1 ;
 int FUNC_0 (struct sway_layer_popup*,int) ;
 struct sway_layer_surface* FUNC_1 (struct sway_layer_popup*) ;
 struct sway_layer_popup* FUNC_2 (struct wl_listener*,int ,int ) ;
 int FUNC_3 (int ,struct wlr_output*) ;

__attribute__((used)) static void FUNC_4(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_layer_popup *VAR_4 = FUNC_2(VAR_2, VAR_4, VAR_0);
 struct sway_layer_surface *VAR_5 = FUNC_1(VAR_4);
 struct wlr_output *VAR_6 = VAR_5->layer_surface->output;
 FUNC_3(VAR_4->wlr_popup->base->surface, VAR_6);
 FUNC_0(VAR_4, 1);
}
