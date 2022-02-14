
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct wl_client {int dummy; } ;
struct sway_seat {struct wl_client* exclusive_client; } ;
struct TYPE_4__ {int link; } ;
struct sway_layer_surface {TYPE_2__* layer_surface; int link; TYPE_1__ output_destroy; } ;
struct TYPE_5__ {int * output; int resource; } ;


 struct sway_layer_surface* FUNC_0 (struct wl_client*,int *) ;
 struct sway_seat* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct sway_seat*,TYPE_2__*) ;
 struct sway_layer_surface* VAR_1 ;
 struct sway_layer_surface* FUNC_3 (struct wl_listener*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct wl_client* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_layer_surface *VAR_4 =
  FUNC_3(VAR_2, VAR_4, VAR_0);


 struct sway_seat *VAR_5 = FUNC_1();
 struct wl_client *VAR_6 =
  FUNC_6(VAR_4->layer_surface->resource);
 bool VAR_7 = VAR_5->exclusive_client == VAR_6;

 FUNC_5(&VAR_4->output_destroy.link);
 FUNC_5(&VAR_4->link);
 FUNC_4(&VAR_4->link);

 if (VAR_7) {
  struct sway_layer_surface *VAR_8 =
   FUNC_0(VAR_6, VAR_4->layer_surface->output);
  if (VAR_8) {
   FUNC_2(VAR_5, VAR_8->layer_surface);
  }
 }

 VAR_4->layer_surface->output = ((void*)0);
 FUNC_7(VAR_4->layer_surface);
}
