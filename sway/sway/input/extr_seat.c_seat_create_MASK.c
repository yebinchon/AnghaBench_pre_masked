
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int notify; } ;
struct sway_seat {int link; int devices; TYPE_6__ request_set_primary_selection; TYPE_4__* wlr_seat; TYPE_6__ request_set_selection; TYPE_6__ start_drag; TYPE_6__ request_start_drag; TYPE_6__ new_node; int deferred_bindings; int focus_stack; int cursor; } ;
struct sway_node {int dummy; } ;
struct TYPE_10__ {int new_node; } ;
struct TYPE_16__ {TYPE_1__ events; int node; } ;
struct TYPE_15__ {TYPE_3__* input; int wl_display; } ;
struct TYPE_11__ {int request_set_primary_selection; int request_set_selection; int start_drag; int request_start_drag; } ;
struct TYPE_13__ {TYPE_2__ events; struct sway_seat* data; } ;
struct TYPE_12__ {int seats; } ;


 struct sway_seat* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct sway_seat*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sway_seat* FUNC_3 () ;
 TYPE_9__* VAR_7 ;
 int FUNC_4 (int ,struct sway_seat*) ;
 int FUNC_5 (int ,struct sway_seat*) ;
 struct sway_node* FUNC_6 (struct sway_seat*,int *) ;
 int FUNC_7 (struct sway_seat*,struct sway_node*) ;
 int FUNC_8 (struct sway_seat*) ;
 TYPE_8__ VAR_8 ;
 int FUNC_9 (TYPE_4__*,char*) ;
 int FUNC_10 (struct sway_seat*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,TYPE_6__*) ;
 TYPE_4__* FUNC_15 (int ,char const*) ;
 int FUNC_16 (TYPE_4__*) ;

struct sway_seat *FUNC_17(const char *VAR_9) {
 struct sway_seat *VAR_10 = FUNC_0(1, sizeof(struct sway_seat));
 if (!VAR_10) {
  return ((void*)0);
 }

 VAR_10->wlr_seat = FUNC_15(VAR_8.wl_display, VAR_9);
 if (!FUNC_9(VAR_10->wlr_seat, "could not allocate seat")) {
  FUNC_2(VAR_10);
  return ((void*)0);
 }
 VAR_10->wlr_seat->data = VAR_10;

 VAR_10->cursor = FUNC_10(VAR_10);
 if (!VAR_10->cursor) {
  FUNC_16(VAR_10->wlr_seat);
  FUNC_2(VAR_10);
  return ((void*)0);
 }


 FUNC_12(&VAR_10->focus_stack);

 FUNC_5(VAR_1, VAR_10);
 FUNC_4(VAR_0, VAR_10);

 VAR_10->deferred_bindings = FUNC_1();

 if (!FUNC_11(&VAR_8.input->seats)) {

  struct sway_seat *VAR_11 = FUNC_3();
  struct sway_node *VAR_12 =
   FUNC_6(VAR_11, &VAR_7->node);
  FUNC_7(VAR_10, VAR_12);
 }

 FUNC_14(&VAR_7->events.new_node, &VAR_10->new_node);
 VAR_10->new_node.notify = VAR_2;

 FUNC_14(&VAR_10->wlr_seat->events.request_start_drag,
  &VAR_10->request_start_drag);
 VAR_10->request_start_drag.notify = VAR_5;

 FUNC_14(&VAR_10->wlr_seat->events.start_drag, &VAR_10->start_drag);
 VAR_10->start_drag.notify = VAR_6;

 FUNC_14(&VAR_10->wlr_seat->events.request_set_selection,
  &VAR_10->request_set_selection);
 VAR_10->request_set_selection.notify = VAR_4;

 FUNC_14(&VAR_10->wlr_seat->events.request_set_primary_selection,
  &VAR_10->request_set_primary_selection);
 VAR_10->request_set_primary_selection.notify =
  VAR_3;

 FUNC_12(&VAR_10->devices);

 FUNC_13(&VAR_8.input->seats, &VAR_10->link);

 FUNC_8(VAR_10);

 return VAR_10;
}
