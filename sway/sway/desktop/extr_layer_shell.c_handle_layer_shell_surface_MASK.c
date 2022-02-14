
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int left; int bottom; int right; int top; } ;
struct wlr_layer_surface_v1_state {size_t layer; TYPE_1__ margin; int desired_height; int desired_width; } ;
struct TYPE_14__ {int new_popup; int unmap; int map; int destroy; } ;
struct wlr_layer_surface_v1 {struct wlr_layer_surface_v1_state current; struct wlr_layer_surface_v1_state client_pending; TYPE_6__* output; struct sway_layer_surface* data; TYPE_5__ events; TYPE_4__* surface; int namespace; } ;
struct wl_listener {int dummy; } ;
struct sway_workspace {struct sway_output* output; } ;
struct sway_seat {int dummy; } ;
struct TYPE_16__ {int destroy; } ;
struct sway_output {int * layers; TYPE_7__ events; TYPE_6__* wlr_output; } ;
struct TYPE_17__ {int notify; } ;
struct sway_layer_surface {int link; TYPE_8__ output_destroy; struct wlr_layer_surface_v1* layer_surface; TYPE_8__ new_popup; TYPE_8__ unmap; TYPE_8__ map; TYPE_8__ destroy; TYPE_8__ surface_commit; } ;
struct TYPE_18__ {TYPE_2__* outputs; struct sway_output* noop_output; } ;
struct TYPE_15__ {struct sway_output* data; } ;
struct TYPE_12__ {int commit; } ;
struct TYPE_13__ {TYPE_3__ events; } ;
struct TYPE_11__ {struct sway_output** items; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sway_output*) ;
 struct sway_layer_surface* FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sway_seat* FUNC_2 () ;
 TYPE_9__* VAR_8 ;
 struct sway_workspace* FUNC_3 (struct sway_seat*) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,TYPE_8__*) ;
 int FUNC_7 (struct wlr_layer_surface_v1*) ;

void FUNC_8(struct wl_listener *VAR_9, void *VAR_10) {
 struct wlr_layer_surface_v1 *VAR_11 = VAR_10;
 FUNC_4(VAR_0, "new layer surface: namespace %s layer %d anchor %d "
   "size %dx%d margin %d,%d,%d,%d",
  VAR_11->namespace,
  VAR_11->client_pending.layer,
  VAR_11->client_pending.layer,
  VAR_11->client_pending.desired_width,
  VAR_11->client_pending.desired_height,
  VAR_11->client_pending.margin.top,
  VAR_11->client_pending.margin.right,
  VAR_11->client_pending.margin.bottom,
  VAR_11->client_pending.margin.left);

 if (!VAR_11->output) {

  struct sway_output *VAR_12 = ((void*)0);
  struct sway_seat *VAR_13 = FUNC_2();
  if (VAR_13) {
   struct sway_workspace *VAR_14 = FUNC_3(VAR_13);
   if (VAR_14 != ((void*)0)) {
    VAR_12 = VAR_14->output;
   }
  }
  if (!VAR_12 || VAR_12 == VAR_8->noop_output) {
   if (!VAR_8->outputs->length) {
    FUNC_4(VAR_1,
      "no output to auto-assign layer surface '%s' to",
      VAR_11->namespace);
    FUNC_7(VAR_11);
    return;
   }
   VAR_12 = VAR_8->outputs->items[0];
  }
  VAR_11->output = VAR_12->wlr_output;
 }

 struct sway_layer_surface *VAR_15 =
  FUNC_1(1, sizeof(struct sway_layer_surface));
 if (!VAR_15) {
  return;
 }

 VAR_15->surface_commit.notify = VAR_6;
 FUNC_6(&VAR_11->surface->events.commit,
  &VAR_15->surface_commit);

 VAR_15->destroy.notify = VAR_2;
 FUNC_6(&VAR_11->events.destroy, &VAR_15->destroy);
 VAR_15->map.notify = VAR_3;
 FUNC_6(&VAR_11->events.map, &VAR_15->map);
 VAR_15->unmap.notify = VAR_7;
 FUNC_6(&VAR_11->events.unmap, &VAR_15->unmap);
 VAR_15->new_popup.notify = VAR_4;
 FUNC_6(&VAR_11->events.new_popup, &VAR_15->new_popup);

 VAR_15->layer_surface = VAR_11;
 VAR_11->data = VAR_15;

 struct sway_output *VAR_16 = VAR_11->output->data;
 VAR_15->output_destroy.notify = VAR_5;
 FUNC_6(&VAR_16->events.destroy, &VAR_15->output_destroy);

 FUNC_5(&VAR_16->layers[VAR_11->client_pending.layer],
   &VAR_15->link);



 struct wlr_layer_surface_v1_state VAR_17 = VAR_11->current;
 VAR_11->current = VAR_11->client_pending;
 FUNC_0(VAR_16);
 VAR_11->current = VAR_17;
}
