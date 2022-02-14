
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


typedef scalar_t__ uint32_t ;
struct wlr_xwayland_surface {int surface; scalar_t__ override_redirect; } ;
struct wlr_xwayland {int dummy; } ;
struct wlr_surface {int dummy; } ;
struct TYPE_9__ {scalar_t__ keyboard_interactive; } ;
struct wlr_layer_surface_v1 {TYPE_3__ current; } ;
struct wlr_keyboard {int dummy; } ;
struct wlr_input_device {int dummy; } ;
struct sway_seat {int wlr_seat; struct sway_cursor* cursor; struct seatop_default_event* seatop_data; } ;
struct sway_node {scalar_t__ type; struct sway_container* sway_container; } ;
struct sway_cursor {TYPE_4__* cursor; } ;
struct sway_container {scalar_t__ x; int width; scalar_t__ y; int height; scalar_t__ fullscreen_mode; int node; struct sway_container* parent; } ;
struct sway_binding {int dummy; } ;
struct seatop_default_event {int dummy; } ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;
typedef enum wlr_button_state { ____Placeholder_wlr_button_state } wlr_button_state ;
struct TYPE_12__ {scalar_t__ floating_mod; scalar_t__ tiling_drag_threshold; scalar_t__ tiling_drag; scalar_t__ floating_mod_inverse; TYPE_2__* current_mode; } ;
struct TYPE_7__ {struct wlr_xwayland* wlr_xwayland; } ;
struct TYPE_11__ {TYPE_1__ xwayland; } ;
struct TYPE_10__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_8__ {int mouse_bindings; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_6__* VAR_11 ;
 scalar_t__ FUNC_0 (struct sway_container*,struct sway_container*) ;
 scalar_t__ FUNC_1 (struct sway_container*) ;
 scalar_t__ FUNC_2 (struct sway_container*) ;
 scalar_t__ FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_cursor*,char const*,int *) ;
 int FUNC_5 (struct sway_container*,struct wlr_surface*,struct sway_cursor*) ;
 int FUNC_6 (struct sway_container*,struct wlr_surface*,struct sway_cursor*) ;
 int FUNC_7 (char*) ;
 struct sway_binding* FUNC_8 (struct seatop_default_event*,int ,scalar_t__,int,int,int,int,int,char*) ;
 char* FUNC_9 (struct wlr_input_device*) ;
 struct sway_node* FUNC_10 (struct sway_seat*,scalar_t__,scalar_t__,struct wlr_surface**,double*,double*) ;
 int FUNC_11 (struct sway_seat*,struct sway_binding*) ;
 struct sway_node* FUNC_12 (struct sway_seat*,int *) ;
 struct sway_container* FUNC_13 (struct sway_seat*) ;
 int FUNC_14 (struct sway_seat*,scalar_t__,scalar_t__,int) ;
 int FUNC_15 (struct sway_seat*,struct sway_node*) ;
 int FUNC_16 (struct sway_seat*,struct sway_container*) ;
 int FUNC_17 (struct sway_seat*,struct wlr_layer_surface_v1*) ;
 int FUNC_18 (struct sway_seat*,int ,int) ;
 int FUNC_19 (struct sway_seat*,struct sway_container*,scalar_t__,double,double) ;
 int FUNC_20 (struct sway_seat*,struct sway_container*) ;
 int FUNC_21 (struct sway_seat*,struct sway_container*) ;
 int FUNC_22 (struct sway_seat*,struct sway_container*) ;
 int FUNC_23 (struct sway_seat*,struct sway_container*,int) ;
 int FUNC_24 (struct sway_seat*,struct sway_container*,int) ;
 TYPE_5__ VAR_12 ;
 int FUNC_25 (struct seatop_default_event*,scalar_t__) ;
 int FUNC_26 (struct seatop_default_event*,scalar_t__) ;
 char* FUNC_27 (char*) ;
 scalar_t__ FUNC_28 (struct wlr_keyboard*) ;
 struct wlr_layer_surface_v1* FUNC_29 (struct wlr_surface*) ;
 struct wlr_keyboard* FUNC_30 (int ) ;
 scalar_t__ FUNC_31 (struct wlr_surface*) ;
 scalar_t__ FUNC_32 (struct wlr_surface*) ;
 scalar_t__ FUNC_33 (struct wlr_xwayland_surface*) ;
 int FUNC_34 (struct wlr_xwayland*,int ) ;
 struct wlr_xwayland_surface* FUNC_35 (struct wlr_surface*) ;

__attribute__((used)) static void FUNC_36(struct sway_seat *VAR_13, uint32_t VAR_14,
  struct wlr_input_device *VAR_15, uint32_t VAR_16,
  enum wlr_button_state VAR_17) {
 struct seatop_default_event *VAR_18 = VAR_13->seatop_data;
 struct sway_cursor *VAR_19 = VAR_13->cursor;


 struct wlr_surface *VAR_20 = ((void*)0);
 double VAR_21, VAR_22;
 struct sway_node *VAR_23 = FUNC_10(VAR_13,
   VAR_19->cursor->x, VAR_19->cursor->y, &VAR_20, &VAR_21, &VAR_22);

 struct sway_container *VAR_24 = VAR_23 && VAR_23->type == VAR_3 ?
  VAR_23->sway_container : ((void*)0);
 bool VAR_25 = VAR_24 && FUNC_1(VAR_24);
 bool VAR_26 = VAR_24 && FUNC_2(VAR_24);
 bool VAR_27 = VAR_24 && FUNC_3(VAR_24);
 enum wlr_edges VAR_28 = VAR_24 ? FUNC_5(VAR_24, VAR_20, VAR_19) : VAR_8;
 enum wlr_edges VAR_29 = VAR_24 && VAR_28 ?
  FUNC_6(VAR_24, VAR_20, VAR_19) : VAR_8;
 bool VAR_30 = VAR_28 != VAR_8;
 bool VAR_31 = VAR_24 && !VAR_30 && VAR_20;
 bool VAR_32 = VAR_23 && VAR_23->type == VAR_4;
 bool VAR_33 = VAR_24 && !VAR_30 && !VAR_20;


 struct wlr_keyboard *VAR_34 = FUNC_30(VAR_13->wlr_seat);
 uint32_t VAR_35 = VAR_34 ? FUNC_28(VAR_34) : 0;

 char *VAR_36 = VAR_15 ? FUNC_9(VAR_15)
  : FUNC_27("*");
 struct sway_binding *VAR_37 = ((void*)0);
 if (VAR_17 == VAR_5) {
  FUNC_25(VAR_18, VAR_16);
  VAR_37 = FUNC_8(VAR_18,
   VAR_11->current_mode->mouse_bindings, VAR_35, 0,
   VAR_33, VAR_30, VAR_31, VAR_32,
   VAR_36);
 } else {
  VAR_37 = FUNC_8(VAR_18,
   VAR_11->current_mode->mouse_bindings, VAR_35, 1,
   VAR_33, VAR_30, VAR_31, VAR_32,
   VAR_36);
  FUNC_26(VAR_18, VAR_16);
 }
 FUNC_7(VAR_36);
 if (VAR_37) {
  FUNC_11(VAR_13, VAR_37);
  return;
 }


 if (VAR_23 && VAR_23->type == VAR_4) {
  FUNC_15(VAR_13, VAR_23);
  return;
 }


 if (VAR_20 && FUNC_31(VAR_20)) {
  struct wlr_layer_surface_v1 *VAR_38 =
   FUNC_29(VAR_20);
  if (VAR_38->current.keyboard_interactive) {
   FUNC_17(VAR_13, VAR_38);
  }
  FUNC_14(VAR_13, VAR_14, VAR_16, VAR_17);
  return;
 }


 if (VAR_24 && VAR_29 && VAR_16 == VAR_0 &&
   VAR_17 == VAR_5 && !VAR_25) {
  FUNC_16(VAR_13, VAR_24);
  FUNC_24(VAR_13, VAR_24, VAR_28);
  return;
 }


 bool VAR_39 = VAR_34 &&
  (FUNC_28(VAR_34) & VAR_11->floating_mod);
 if (VAR_24 && !VAR_26 && VAR_39 &&
   VAR_17 == VAR_5) {
  uint32_t VAR_40 = VAR_11->floating_mod_inverse ?
   VAR_0 : VAR_1;
  if (VAR_16 == VAR_40) {
   VAR_28 = 0;
   VAR_28 |= VAR_19->cursor->x > VAR_24->x + VAR_24->width / 2 ?
    VAR_9 : VAR_7;
   VAR_28 |= VAR_19->cursor->y > VAR_24->y + VAR_24->height / 2 ?
    VAR_6 : VAR_10;

   const char *VAR_41 = ((void*)0);
   if (VAR_28 == (VAR_7 | VAR_10)) {
    VAR_41 = "nw-resize";
   } else if (VAR_28 == (VAR_10 | VAR_9)) {
    VAR_41 = "ne-resize";
   } else if (VAR_28 == (VAR_9 | VAR_6)) {
    VAR_41 = "se-resize";
   } else if (VAR_28 == (VAR_6 | VAR_7)) {
    VAR_41 = "sw-resize";
   }
   FUNC_4(VAR_13->cursor, VAR_41, ((void*)0));
   FUNC_16(VAR_13, VAR_24);
   FUNC_24(VAR_13, VAR_24, VAR_28);
   return;
  }
 }


 if (VAR_24 && VAR_26 && !VAR_27 &&
   VAR_17 == VAR_5) {
  uint32_t VAR_42 = VAR_11->floating_mod_inverse ? VAR_1 : VAR_0;
  if (VAR_16 == VAR_42 && (VAR_39 || VAR_33)) {
   while (VAR_24->parent) {
    VAR_24 = VAR_24->parent;
   }
   FUNC_16(VAR_13, VAR_24);
   FUNC_20(VAR_13, VAR_24);
   return;
  }
 }


 if (VAR_24 && VAR_26 && !VAR_27 &&
   VAR_17 == VAR_5) {

  if (VAR_16 == VAR_0 && VAR_29 != VAR_8) {
   FUNC_23(VAR_13, VAR_24, VAR_29);
   return;
  }


  uint32_t VAR_43 = VAR_11->floating_mod_inverse ?
   VAR_0 : VAR_1;
  if (VAR_39 && VAR_16 == VAR_43) {
   struct sway_container *VAR_44 = VAR_24;
   while (VAR_44->parent) {
    VAR_44 = VAR_44->parent;
   }
   VAR_28 = 0;
   VAR_28 |= VAR_19->cursor->x > VAR_44->x + VAR_44->width / 2 ?
    VAR_9 : VAR_7;
   VAR_28 |= VAR_19->cursor->y > VAR_44->y + VAR_44->height / 2 ?
    VAR_6 : VAR_10;
   FUNC_23(VAR_13, VAR_44, VAR_28);
   return;
  }
 }


 if (VAR_11->tiling_drag && (VAR_39 || VAR_33) &&
   VAR_17 == VAR_5 && !VAR_26 &&
   VAR_24 && VAR_24->fullscreen_mode == VAR_2) {
  struct sway_container *VAR_45 = FUNC_13(VAR_13);
  bool VAR_46 = VAR_45 == VAR_24 || FUNC_0(VAR_45, VAR_24);
  if (VAR_33 && !VAR_46) {
   VAR_23 = FUNC_12(VAR_13, &VAR_24->node);
   FUNC_15(VAR_13, VAR_23);
  }


  if (!VAR_39 && VAR_11->tiling_drag_threshold > 0) {
   FUNC_22(VAR_13, VAR_24);
  } else {
   FUNC_21(VAR_13, VAR_24);
  }
  return;
 }


 if (VAR_20 && VAR_24 && VAR_17 == VAR_5) {
  FUNC_16(VAR_13, VAR_24);
  FUNC_19(VAR_13, VAR_24, VAR_14, VAR_21, VAR_22);
  FUNC_14(VAR_13, VAR_14, VAR_16, VAR_5);
  return;
 }


 if (VAR_24 && VAR_17 == VAR_5) {
  VAR_23 = FUNC_12(VAR_13, &VAR_24->node);
  FUNC_15(VAR_13, VAR_23);
  FUNC_14(VAR_13, VAR_14, VAR_16, VAR_17);
  return;
 }
 FUNC_14(VAR_13, VAR_14, VAR_16, VAR_17);
}
