
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int new_subsurface; } ;
struct wlr_surface {TYPE_1__ events; } ;
struct wlr_output {struct sway_output* data; } ;
struct sway_workspace {int node; } ;
struct TYPE_9__ {int notify; } ;
struct sway_view {struct sway_container* container; TYPE_2__* impl; TYPE_3__ surface_new_subsurface; struct wlr_surface* surface; } ;
struct sway_seat {int dummy; } ;
struct sway_output {int dummy; } ;
struct sway_node {scalar_t__ type; struct sway_container* sway_container; } ;
struct sway_container {int node; TYPE_6__* workspace; scalar_t__ parent; scalar_t__ view; int border_thickness; int border; } ;
struct TYPE_12__ {struct sway_container* fullscreen; } ;
struct TYPE_11__ {scalar_t__ popup_during_fullscreen; int border_thickness; int border; int floating_border_thickness; int floating_border; } ;
struct TYPE_10__ {int node; } ;
struct TYPE_8__ {scalar_t__ (* wants_floating ) (struct sway_view*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_5__* VAR_2 ;
 int FUNC_2 (struct sway_container*,struct sway_container*,int) ;
 struct sway_container* FUNC_3 (struct sway_view*) ;
 scalar_t__ FUNC_4 (struct sway_container*) ;
 int FUNC_5 (struct sway_container*,int) ;
 int FUNC_6 (struct sway_container*,int) ;
 int FUNC_7 (struct sway_container*) ;
 struct sway_seat* FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sway_container*,char*) ;
 struct sway_workspace* FUNC_11 (struct sway_output*) ;
 TYPE_4__* VAR_3 ;
 struct sway_node* FUNC_12 (struct sway_seat*,int *) ;
 struct sway_workspace* FUNC_13 (struct sway_seat*) ;
 struct sway_workspace* FUNC_14 (struct sway_view*) ;
 scalar_t__ FUNC_15 (struct sway_view*) ;
 scalar_t__ FUNC_16 (struct sway_view*) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (struct sway_view*) ;
 int VAR_4 ;
 int FUNC_19 (struct sway_view*,struct wlr_surface*) ;
 scalar_t__ FUNC_20 (struct sway_view*,scalar_t__) ;
 int FUNC_21 (struct sway_view*) ;
 int FUNC_22 (struct sway_view*,int) ;
 int FUNC_23 (struct sway_view*,int) ;
 int FUNC_24 (struct sway_view*,int) ;
 int FUNC_25 (int *,TYPE_3__*) ;
 int FUNC_26 (struct sway_workspace*,struct sway_container*) ;

void FUNC_27(struct sway_view *VAR_5, struct wlr_surface *VAR_6,
     bool VAR_7, struct wlr_output *VAR_8,
     bool VAR_9) {
 if (!FUNC_17(VAR_5->surface == ((void*)0), "cannot map mapped view")) {
  return;
 }
 VAR_5->surface = VAR_6;
 FUNC_21(VAR_5);
 VAR_5->container = FUNC_3(VAR_5);




 struct sway_workspace *VAR_10 = ((void*)0);
 if (VAR_8 && VAR_8->data) {
  struct sway_output *VAR_11 = VAR_8->data;
  VAR_10 = FUNC_11(VAR_11);
 }
 if (!VAR_10) {
  VAR_10 = FUNC_14(VAR_5);
 }

 struct sway_seat *VAR_12 = FUNC_8();
 struct sway_node *VAR_13 = VAR_10 ? FUNC_12(VAR_12, &VAR_10->node)
  : FUNC_12(VAR_12, &VAR_3->node);
 struct sway_container *VAR_14 = VAR_13->type == VAR_0 ?
  VAR_13->sway_container : ((void*)0);



 if (VAR_14 && FUNC_4(VAR_14)) {
  VAR_14 = ((void*)0);
  VAR_10 = FUNC_13(VAR_12);
 }

 if (VAR_14) {
  FUNC_2(VAR_14, VAR_5->container, 1);
 } else if (VAR_10) {
  FUNC_26(VAR_10, VAR_5->container);
 }
 FUNC_10(VAR_5->container, "new");

 FUNC_19(VAR_5, VAR_6);
 FUNC_25(&VAR_6->events.new_subsurface,
  &VAR_5->surface_new_subsurface);
 VAR_5->surface_new_subsurface.notify = VAR_4;

 if (VAR_9) {
  FUNC_23(VAR_5, VAR_9);
 }

 if (VAR_5->impl->wants_floating && VAR_5->impl->wants_floating(VAR_5)) {
  VAR_5->container->border = VAR_2->floating_border;
  VAR_5->container->border_thickness = VAR_2->floating_border_thickness;
  FUNC_5(VAR_5->container, 1);
 } else {
  VAR_5->container->border = VAR_2->border;
  VAR_5->container->border_thickness = VAR_2->border_thickness;
  FUNC_22(VAR_5, 1);
 }

 if (VAR_2->popup_during_fullscreen == VAR_1 &&
   VAR_5->container->workspace &&
   VAR_5->container->workspace->fullscreen &&
   VAR_5->container->workspace->fullscreen->view) {
  struct sway_container *VAR_15 = VAR_5->container->workspace->fullscreen;
  if (FUNC_20(VAR_5, VAR_15->view)) {
   FUNC_6(VAR_15, 0);
  }
 }

 FUNC_24(VAR_5, 0);
 FUNC_7(VAR_5->container);

 if (VAR_7) {
  FUNC_6(VAR_5->container, 1);
  FUNC_1(VAR_5->container->workspace);
 } else {
  if (VAR_5->container->parent) {
   FUNC_0(VAR_5->container->parent);
  } else if (VAR_5->container->workspace) {
   FUNC_1(VAR_5->container->workspace);
  }
 }

 FUNC_18(VAR_5);

 if (FUNC_15(VAR_5)) {
  FUNC_9(&VAR_5->container->node);
 }
}
