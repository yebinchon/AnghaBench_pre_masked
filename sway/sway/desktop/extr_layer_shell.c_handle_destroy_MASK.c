
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct sway_output {int dummy; } ;
struct TYPE_14__ {int link; } ;
struct TYPE_13__ {int link; } ;
struct TYPE_12__ {int link; } ;
struct TYPE_11__ {int link; } ;
struct TYPE_10__ {int link; } ;
struct TYPE_9__ {int link; } ;
struct sway_layer_surface {TYPE_8__* layer_surface; TYPE_6__ output_destroy; TYPE_5__ new_popup; TYPE_4__ surface_commit; TYPE_3__ unmap; TYPE_2__ map; TYPE_1__ destroy; int link; } ;
struct TYPE_16__ {TYPE_7__* output; scalar_t__ mapped; int namespace; } ;
struct TYPE_15__ {struct sway_output* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_output*) ;
 int VAR_1 ;
 int FUNC_1 (struct sway_layer_surface*) ;
 struct sway_layer_surface* VAR_2 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct sway_layer_surface*) ;
 struct sway_layer_surface* FUNC_5 (struct wl_listener*,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_layer_surface *VAR_5 =
  FUNC_5(VAR_3, VAR_5, VAR_1);
 FUNC_2(VAR_0, "Layer surface destroyed (%s)",
  VAR_5->layer_surface->namespace);
 if (VAR_5->layer_surface->mapped) {
  FUNC_4(VAR_5);
 }
 FUNC_6(&VAR_5->link);
 FUNC_6(&VAR_5->destroy.link);
 FUNC_6(&VAR_5->map.link);
 FUNC_6(&VAR_5->unmap.link);
 FUNC_6(&VAR_5->surface_commit.link);
 FUNC_6(&VAR_5->new_popup.link);
 if (VAR_5->layer_surface->output != ((void*)0)) {
  struct sway_output *VAR_6 = VAR_5->layer_surface->output->data;
  if (VAR_6 != ((void*)0)) {
   FUNC_0(VAR_6);
   FUNC_3();
  }
  FUNC_6(&VAR_5->output_destroy.link);
  VAR_5->layer_surface->output = ((void*)0);
 }
 FUNC_1(VAR_5);
}
