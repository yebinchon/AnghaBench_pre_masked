
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct wlr_input_device {int dummy; } ;
struct sway_workspace {int dummy; } ;
struct sway_seat {struct seatop_move_tiling_event* seatop_data; TYPE_1__* cursor; } ;
struct sway_node {scalar_t__ type; struct sway_container* sway_container; struct sway_workspace* sway_workspace; } ;
struct sway_container {int height_fraction; int width_fraction; int height; int width; struct sway_workspace* workspace; struct sway_container* parent; } ;
struct seatop_move_tiling_event {int target_edge; struct sway_node* target_node; struct sway_container* con; } ;
struct TYPE_6__ {int length; struct sway_container** items; } ;
typedef TYPE_2__ list_t ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;
typedef enum wlr_button_state { ____Placeholder_wlr_button_state } wlr_button_state ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_5__ {scalar_t__ pressed_button_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sway_workspace*) ;
 int FUNC_1 (struct sway_container*,struct sway_container*,int) ;
 int FUNC_2 (struct sway_container*) ;
 TYPE_2__* FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_container*) ;
 int FUNC_5 (struct sway_container*) ;
 int FUNC_6 (struct sway_container*,int) ;
 int FUNC_7 (struct sway_container*,struct sway_container*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (TYPE_2__*,struct sway_container*) ;
 int FUNC_10 (struct sway_seat*) ;
 int FUNC_11 (struct sway_workspace*,struct sway_container*) ;
 int FUNC_12 (struct sway_workspace*,struct sway_container*,int) ;
 int FUNC_13 (struct sway_workspace*,int) ;

__attribute__((used)) static void FUNC_14(struct sway_seat *VAR_8, uint32_t VAR_9,
  struct wlr_input_device *VAR_10, uint32_t VAR_11,
  enum wlr_button_state VAR_12) {
 if (VAR_8->cursor->pressed_button_count != 0) {
  return;
 }

 struct seatop_move_tiling_event *VAR_13 = VAR_8->seatop_data;

 if (!VAR_13->target_node) {
  FUNC_10(VAR_8);
  return;
 }

 struct sway_container *VAR_14 = VAR_13->con;
 struct sway_container *VAR_15 = VAR_14->parent;
 struct sway_workspace *VAR_16 = VAR_14->workspace;
 struct sway_node *VAR_17 = VAR_13->target_node;
 struct sway_workspace *VAR_18 = VAR_17->type == VAR_3 ?
  VAR_17->sway_workspace : VAR_17->sway_container->workspace;
 enum wlr_edges VAR_19 = VAR_13->target_edge;
 int VAR_20 = VAR_19 != VAR_7 && VAR_19 != VAR_5;
 bool VAR_21 = VAR_19 == VAR_6 && VAR_17->type == VAR_2;

 if (!VAR_21) {
  FUNC_2(VAR_14);
 }



 if (VAR_17->type == VAR_3 && VAR_19 == VAR_6) {
  FUNC_11(VAR_18, VAR_14);
 } else if (VAR_17->type == VAR_2) {

  struct sway_container *VAR_22 = VAR_17->sway_container;
  if (VAR_21) {
   FUNC_7(VAR_17->sway_container, VAR_14);
  } else {
   enum sway_container_layout VAR_23 = FUNC_4(VAR_22);
   if (VAR_19 && !FUNC_8(VAR_23, VAR_19)) {
    enum sway_container_layout VAR_24 = VAR_19 == VAR_7 ||
     VAR_19 == VAR_4 ? VAR_1 : VAR_0;
    FUNC_6(VAR_22, VAR_24);
   }
   FUNC_1(VAR_22, VAR_14, VAR_20);
  }
 } else {

  enum sway_container_layout VAR_25 = VAR_19 == VAR_7 ||
   VAR_19 == VAR_4 ? VAR_1 : VAR_0;
  FUNC_13(VAR_18, VAR_25);
  FUNC_12(VAR_18, VAR_14, VAR_20);
 }

 if (VAR_15) {
  FUNC_5(VAR_15);
 }




 list_t *VAR_26 = FUNC_3(VAR_14);
 if (VAR_26->length > 1) {
  int VAR_27 = FUNC_9(VAR_26, VAR_14);
  struct sway_container *VAR_28 = VAR_27 == 0 ?
   VAR_26->items[1] : VAR_26->items[VAR_27 - 1];
  VAR_14->width = VAR_28->width;
  VAR_14->height = VAR_28->height;
  VAR_14->width_fraction = VAR_28->width_fraction;
  VAR_14->height_fraction = VAR_28->height_fraction;
 }

 FUNC_0(VAR_16);
 if (VAR_18 != VAR_16) {
  FUNC_0(VAR_18);
 }

 FUNC_10(VAR_8);
}
