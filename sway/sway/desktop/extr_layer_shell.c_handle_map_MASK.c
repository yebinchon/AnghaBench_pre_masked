
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct sway_output {int dummy; } ;
struct TYPE_5__ {int y; int x; } ;
struct sway_layer_surface {TYPE_1__* layer_surface; TYPE_2__ geo; } ;
struct TYPE_6__ {struct sway_output* data; } ;
struct TYPE_4__ {TYPE_3__* output; int surface; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct sway_output*,int ,int ,int ,int) ;
 struct sway_layer_surface* VAR_1 ;
 struct sway_layer_surface* FUNC_2 (struct wl_listener*,int ,int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_layer_surface *VAR_4 = FUNC_2(VAR_2,
   VAR_4, VAR_0);
 struct sway_output *VAR_5 = VAR_4->layer_surface->output->data;
 FUNC_1(VAR_5, VAR_4->geo.x, VAR_4->geo.y,
  VAR_4->layer_surface->surface, 1);
 FUNC_3(VAR_4->layer_surface->surface,
  VAR_4->layer_surface->output);
 FUNC_0();
}
