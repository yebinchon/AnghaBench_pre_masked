
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_xdg_popup {int dummy; } ;
struct wlr_box {int height; int width; int y; int x; } ;
struct sway_output {int height; int width; } ;
struct TYPE_6__ {int y; int x; } ;
struct sway_layer_surface {TYPE_3__ geo; TYPE_2__* layer_surface; } ;
struct sway_layer_popup {struct wlr_xdg_popup* wlr_popup; } ;
struct TYPE_5__ {TYPE_1__* output; } ;
struct TYPE_4__ {struct sway_output* data; } ;


 struct sway_layer_surface* FUNC_0 (struct sway_layer_popup*) ;
 int FUNC_1 (struct wlr_xdg_popup*,struct wlr_box*) ;

__attribute__((used)) static void FUNC_2(struct sway_layer_popup *VAR_0) {
 struct sway_layer_surface *VAR_1 = FUNC_0(VAR_0);
 struct wlr_xdg_popup *VAR_2 = VAR_0->wlr_popup;

 struct sway_output *VAR_3 = VAR_1->layer_surface->output->data;



 struct wlr_box VAR_4 = {
  .x = -VAR_1->geo.x,
  .y = -VAR_1->geo.y,
  .width = VAR_3->width,
  .height = VAR_3->height,
 };

 FUNC_1(VAR_2, &VAR_4);
}
