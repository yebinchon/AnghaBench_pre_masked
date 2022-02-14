
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_output {struct sway_output* data; } ;
struct TYPE_2__ {size_t layer; } ;
struct wlr_layer_surface_v1 {int surface; TYPE_1__ current; struct wlr_output* output; } ;
struct wlr_box {int y; int x; } ;
struct wl_listener {int dummy; } ;
struct sway_output {int * layers; } ;
struct sway_layer_surface {size_t layer; struct wlr_box geo; int link; struct wlr_layer_surface_v1* layer_surface; } ;


 int FUNC_0 (struct sway_output*) ;
 struct sway_layer_surface* VAR_0 ;
 scalar_t__ FUNC_1 (struct wlr_box*,struct wlr_box*,int) ;
 int FUNC_2 (struct sway_output*,int ,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_3 () ;
 struct sway_layer_surface* FUNC_4 (struct wl_listener*,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_layer_surface *VAR_4 =
  FUNC_4(VAR_2, VAR_4, VAR_1);
 struct wlr_layer_surface_v1 *VAR_5 = VAR_4->layer_surface;
 struct wlr_output *VAR_6 = VAR_5->output;
 if (VAR_6 == ((void*)0)) {
  return;
 }

 struct sway_output *VAR_7 = VAR_6->data;
 struct wlr_box VAR_8 = VAR_4->geo;
 FUNC_0(VAR_7);

 bool VAR_9 =
  FUNC_1(&VAR_8, &VAR_4->geo, sizeof(struct wlr_box)) != 0;
 bool VAR_10 = VAR_4->layer != VAR_5->current.layer;
 if (VAR_10) {
  FUNC_6(&VAR_4->link);
  FUNC_5(&VAR_7->layers[VAR_5->current.layer],
   &VAR_4->link);
  VAR_4->layer = VAR_5->current.layer;
 }
 if (VAR_9 || VAR_10) {
  FUNC_2(VAR_7, VAR_8.x, VAR_8.y,
   VAR_5->surface, 1);
  FUNC_2(VAR_7, VAR_4->geo.x, VAR_4->geo.y,
   VAR_5->surface, 1);
 } else {
  FUNC_2(VAR_7, VAR_4->geo.x, VAR_4->geo.y,
   VAR_5->surface, 0);
 }

 FUNC_3();
}
