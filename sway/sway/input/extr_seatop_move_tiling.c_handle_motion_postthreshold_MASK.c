
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_surface {int dummy; } ;
struct wlr_box {scalar_t__ y; scalar_t__ height; scalar_t__ x; scalar_t__ width; } ;
struct sway_seat {struct sway_cursor* cursor; struct seatop_move_tiling_event* seatop_data; } ;
struct sway_node {scalar_t__ type; scalar_t__ sway_workspace; struct sway_container* sway_container; } ;
struct sway_cursor {TYPE_1__* cursor; } ;
struct sway_container {scalar_t__ workspace; scalar_t__ content_width; scalar_t__ content_height; size_t y; size_t x; size_t width; size_t height; scalar_t__ content_x; scalar_t__ content_y; TYPE_2__* view; struct sway_container* parent; struct sway_node node; } ;
struct seatop_move_tiling_event {int target_edge; struct wlr_box drop_box; struct sway_node* target_node; TYPE_3__* con; } ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_6__ {scalar_t__ workspace; struct sway_node node; } ;
struct TYPE_5__ {int surface; } ;
struct TYPE_4__ {size_t x; size_t y; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (struct sway_container*,struct wlr_box*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct wlr_box*) ;
 double FUNC_3 (scalar_t__,scalar_t__) ;
 struct sway_node* FUNC_4 (struct sway_seat*,size_t,size_t,struct wlr_surface**,double*,double*) ;
 int FUNC_5 (struct sway_node*,struct wlr_box*) ;
 void* FUNC_6 (struct sway_node*) ;
 scalar_t__ FUNC_7 (struct sway_node*,struct sway_node*) ;
 int FUNC_8 (struct wlr_box*,int,size_t) ;
 int FUNC_9 (scalar_t__,struct wlr_box*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct sway_seat *VAR_12) {
 struct seatop_move_tiling_event *VAR_13 = VAR_12->seatop_data;
 struct wlr_surface *VAR_14 = ((void*)0);
 double VAR_15, VAR_16;
 struct sway_cursor *VAR_17 = VAR_12->cursor;
 struct sway_node *VAR_18 = FUNC_4(VAR_12,
   VAR_17->cursor->x, VAR_17->cursor->y, &VAR_14, &VAR_15, &VAR_16);

 FUNC_2(&VAR_13->drop_box);

 if (!VAR_18) {

  VAR_13->target_node = ((void*)0);
  VAR_13->target_edge = VAR_9;
  return;
 }

 if (VAR_18->type == VAR_6) {

  VAR_13->target_node = VAR_18;
  VAR_13->target_edge = VAR_9;
  FUNC_9(VAR_18->sway_workspace, &VAR_13->drop_box);
  FUNC_2(&VAR_13->drop_box);
  return;
 }


 struct sway_container *VAR_19 = VAR_18->sway_container;
 if (FUNC_10(VAR_13->con->workspace) == 1 &&
   VAR_19->workspace == VAR_13->con->workspace) {
  VAR_13->target_node = ((void*)0);
  VAR_13->target_edge = VAR_9;
  return;
 }



 while (VAR_19) {
  enum wlr_edges VAR_20 = VAR_9;
  enum sway_container_layout VAR_21 = FUNC_1(VAR_19);
  struct wlr_box VAR_22;
  VAR_19->parent ? FUNC_0(VAR_19->parent, &VAR_22) :
   FUNC_9(VAR_19->workspace, &VAR_22);
  if (VAR_21 == VAR_2 || VAR_21 == VAR_4) {
   if (VAR_17->cursor->y < VAR_22.y + VAR_0) {
    VAR_20 = VAR_11;
   } else if (VAR_17->cursor->y > VAR_22.y + VAR_22.height
     - VAR_0) {
    VAR_20 = VAR_7;
   }
  } else if (VAR_21 == VAR_5 || VAR_21 == VAR_3) {
   if (VAR_17->cursor->x < VAR_22.x + VAR_0) {
    VAR_20 = VAR_8;
   } else if (VAR_17->cursor->x > VAR_22.x + VAR_22.width
     - VAR_0) {
    VAR_20 = VAR_10;
   }
  }
  if (VAR_20) {
   VAR_13->target_node = FUNC_6(&VAR_19->node);
   if (VAR_13->target_node == &VAR_13->con->node) {
    VAR_13->target_node = FUNC_6(VAR_13->target_node);
   }
   VAR_13->target_edge = VAR_20;
   FUNC_5(VAR_13->target_node, &VAR_13->drop_box);
   FUNC_8(&VAR_13->drop_box, VAR_20, VAR_0);
   FUNC_2(&VAR_13->drop_box);
   return;
  }
  VAR_19 = VAR_19->parent;
 }


 VAR_19 = VAR_18->sway_container;
 if (!VAR_19->view || !VAR_19->view->surface || VAR_18 == &VAR_13->con->node
   || FUNC_7(VAR_18, &VAR_13->con->node)) {
  VAR_13->target_node = ((void*)0);
  VAR_13->target_edge = VAR_9;
  return;
 }


 size_t VAR_23 = FUNC_3(VAR_19->content_width, VAR_19->content_height) * 0.3;
 size_t VAR_24 = VAR_1;
 size_t VAR_25;
 VAR_13->target_edge = VAR_9;
 if ((VAR_25 = VAR_17->cursor->y - VAR_19->y) < VAR_24) {
  VAR_24 = VAR_25;
  VAR_13->target_edge = VAR_11;
 }
 if ((VAR_25 = VAR_17->cursor->x - VAR_19->x) < VAR_24) {
  VAR_24 = VAR_25;
  VAR_13->target_edge = VAR_8;
 }
 if ((VAR_25 = VAR_19->x + VAR_19->width - VAR_17->cursor->x) < VAR_24) {
  VAR_24 = VAR_25;
  VAR_13->target_edge = VAR_10;
 }
 if ((VAR_25 = VAR_19->y + VAR_19->height - VAR_17->cursor->y) < VAR_24) {
  VAR_24 = VAR_25;
  VAR_13->target_edge = VAR_7;
 }

 if (VAR_24 > VAR_23) {
  VAR_13->target_edge = VAR_9;
 }

 VAR_13->target_node = VAR_18;
 VAR_13->drop_box.x = VAR_19->content_x;
 VAR_13->drop_box.y = VAR_19->content_y;
 VAR_13->drop_box.width = VAR_19->content_width;
 VAR_13->drop_box.height = VAR_19->content_height;
 FUNC_8(&VAR_13->drop_box, VAR_13->target_edge, VAR_23);
 FUNC_2(&VAR_13->drop_box);
}
