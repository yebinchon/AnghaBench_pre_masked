
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_layer_surface_v1 {int dummy; } ;
struct sway_workspace {TYPE_1__* floating; int node; struct sway_output* output; struct sway_container* fullscreen; } ;
struct sway_view {scalar_t__ urgent_timer; } ;
struct sway_seat {int has_focus; struct wlr_layer_surface_v1* focused_layer; } ;
struct sway_node {scalar_t__ type; struct sway_container* sway_container; struct sway_workspace* sway_workspace; } ;
struct sway_output {struct sway_node node; } ;
struct sway_container {struct sway_view* view; scalar_t__ is_sticky; int node; struct sway_container* parent; struct sway_workspace* workspace; } ;
struct TYPE_8__ {scalar_t__ urgent_timeout; scalar_t__ smart_gaps; } ;
struct TYPE_7__ {struct sway_container* fullscreen_global; } ;
struct TYPE_6__ {int wl_event_loop; } ;
struct TYPE_5__ {int length; struct sway_container** items; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sway_workspace*) ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*,struct sway_container*) ;
 int FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_container*,struct sway_container*) ;
 int FUNC_5 (struct sway_view*) ;
 int FUNC_6 (struct sway_container*,char*) ;
 struct sway_node* FUNC_7 (struct sway_node*) ;
 scalar_t__ FUNC_8 (struct sway_node*) ;
 int FUNC_9 (struct sway_node*) ;
 struct sway_workspace* FUNC_10 (struct sway_output*) ;
 TYPE_3__* VAR_4 ;
 struct sway_node* FUNC_11 (struct sway_seat*) ;
 struct sway_workspace* FUNC_12 (struct sway_seat*) ;
 int FUNC_13 (int *,struct sway_seat*) ;
 int FUNC_14 (struct sway_node*,struct sway_seat*) ;
 int FUNC_15 (struct sway_seat*,struct wlr_layer_surface_v1*) ;
 int FUNC_16 (struct sway_seat*,int *) ;
 TYPE_2__ VAR_5 ;
 int FUNC_17 (struct sway_seat*,struct sway_workspace*) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (struct sway_view*) ;
 scalar_t__ FUNC_20 (struct sway_view*) ;
 int FUNC_21 (struct sway_view*,int) ;
 scalar_t__ FUNC_22 (int ,int (*) (struct sway_view*),struct sway_view*) ;
 int FUNC_23 (scalar_t__,scalar_t__) ;
 int FUNC_24 (struct sway_workspace*,struct sway_container*) ;
 int FUNC_25 (struct sway_workspace*) ;

void FUNC_26(struct sway_seat *VAR_6, struct sway_node *VAR_7) {
 if (VAR_6->focused_layer) {
  struct wlr_layer_surface_v1 *VAR_8 = VAR_6->focused_layer;
  FUNC_15(VAR_6, ((void*)0));
  FUNC_26(VAR_6, VAR_7);
  FUNC_15(VAR_6, VAR_8);
  return;
 }

 struct sway_node *VAR_9 = FUNC_11(VAR_6);
 if (VAR_9 == VAR_7) {
  return;
 }

 struct sway_workspace *VAR_10 = FUNC_12(VAR_6);

 if (VAR_7 == ((void*)0)) {

  if (FUNC_8(VAR_9)) {
   FUNC_19(VAR_9->sway_container->view);
  }
  FUNC_14(VAR_9, VAR_6);
  VAR_6->has_focus = 0;
  return;
 }

 struct sway_workspace *VAR_11 = VAR_7->type == VAR_1 ?
  VAR_7->sway_workspace : VAR_7->sway_container->workspace;
 struct sway_container *VAR_12 = VAR_7->type == VAR_0 ?
  VAR_7->sway_container : ((void*)0);


 if (VAR_11 && VAR_11->fullscreen && VAR_12 &&
   !FUNC_3(VAR_12)) {

  if (!FUNC_4(VAR_12, VAR_11->fullscreen)) {
   return;
  }
 }

 if (VAR_4->fullscreen_global && !VAR_12 && VAR_11) {
  return;
 }

 if (VAR_4->fullscreen_global && VAR_12 != VAR_4->fullscreen_global &&
    !FUNC_2(VAR_12, VAR_4->fullscreen_global)) {

  if (!FUNC_4(VAR_12, VAR_4->fullscreen_global)) {
   return;
  }
 }

 struct sway_output *VAR_13 =
  VAR_11 ? VAR_11->output : ((void*)0);

 if (VAR_10 != VAR_11 && VAR_13) {
  FUNC_9(&VAR_13->node);
 }


 struct sway_workspace *VAR_14 =
  VAR_13 ? FUNC_10(VAR_13) : ((void*)0);


 if (VAR_9) {
  FUNC_14(VAR_9, VAR_6);
  FUNC_9(VAR_9);
  struct sway_node *VAR_15 = FUNC_7(VAR_9);
  if (VAR_15) {
   FUNC_9(VAR_15);
  }
 }



 if (VAR_12) {
  struct sway_container *VAR_16 = VAR_12->parent;
  while (VAR_16) {
   FUNC_16(VAR_6, &VAR_16->node);
   VAR_16 = VAR_16->parent;
  }
 }
 if (VAR_11) {
  FUNC_16(VAR_6, &VAR_11->node);
 }
 if (VAR_12) {
  FUNC_16(VAR_6, &VAR_12->node);
  FUNC_13(&VAR_12->node, VAR_6);
 }


 FUNC_17(VAR_6, VAR_11);
 if (VAR_12 && VAR_12->view) {
  FUNC_6(VAR_12, "focus");
 }


 if (VAR_11 && VAR_14
   && VAR_11 != VAR_14) {
  for (int VAR_17 = 0; VAR_17 < VAR_14->floating->length; ++VAR_17) {
   struct sway_container *VAR_18 =
    VAR_14->floating->items[VAR_17];
   if (VAR_18->is_sticky) {
    FUNC_1(VAR_18);
    FUNC_24(VAR_11, VAR_18);
    --VAR_17;
   }
  }
 }


 if (VAR_9 && FUNC_8(VAR_9)) {
  FUNC_19(VAR_9->sway_container->view);
 }


 if (VAR_12 && VAR_12->view && FUNC_20(VAR_12->view) &&
   !VAR_12->view->urgent_timer) {
  struct sway_view *VAR_19 = VAR_12->view;
  if (VAR_10 && VAR_10 != VAR_11 &&
    VAR_3->urgent_timeout > 0) {
   VAR_19->urgent_timer = FUNC_22(VAR_5.wl_event_loop,
     FUNC_5, VAR_19);
   if (VAR_19->urgent_timer) {
    FUNC_23(VAR_19->urgent_timer,
      VAR_3->urgent_timeout);
   } else {
    FUNC_18(VAR_2, "Unable to create urgency timer");
    FUNC_5(VAR_19);
   }
  } else {
   FUNC_21(VAR_19, 0);
  }
 }

 if (VAR_14) {
  FUNC_25(VAR_14);
 }
 if (VAR_10 && VAR_10 != VAR_14) {
  FUNC_25(VAR_10);
 }

 VAR_6->has_focus = 1;

 if (VAR_3->smart_gaps && VAR_11) {


  FUNC_0(VAR_11);
 }
}
