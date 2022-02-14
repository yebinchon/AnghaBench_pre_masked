
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct wlr_surface {int dummy; } ;
struct wlr_keyboard {int dummy; } ;
struct wlr_input_device {int dummy; } ;
struct wlr_event_pointer_axis {float delta_discrete; float delta; int source; int orientation; int time_msec; TYPE_1__* device; } ;
struct sway_seat {int wlr_seat; struct seatop_default_event* seatop_data; struct sway_cursor* cursor; } ;
struct sway_node {scalar_t__ type; struct sway_container* sway_container; } ;
struct sway_input_device {struct wlr_input_device* wlr_device; } ;
struct sway_cursor {TYPE_4__* seat; TYPE_2__* cursor; } ;
struct sway_container {scalar_t__ content_y; struct sway_node node; } ;
struct sway_binding {int dummy; } ;
struct seatop_default_event {int dummy; } ;
struct input_config {float scroll_factor; } ;
struct TYPE_13__ {int length; struct sway_container** items; } ;
typedef TYPE_5__ list_t ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_14__ {TYPE_3__* current_mode; } ;
struct TYPE_12__ {int wlr_seat; } ;
struct TYPE_11__ {int mouse_bindings; } ;
struct TYPE_10__ {scalar_t__ y; int x; } ;
struct TYPE_9__ {struct sway_input_device* data; } ;


 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_8__* VAR_6 ;
 TYPE_5__* FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*,struct wlr_surface*,struct sway_cursor*) ;
 int FUNC_3 (char*) ;
 struct sway_binding* FUNC_4 (struct seatop_default_event*,int ,int ,int,int,int,int,int,char*) ;
 struct input_config* FUNC_5 (struct sway_input_device*) ;
 char* FUNC_6 (struct wlr_input_device*) ;
 int FUNC_7 (TYPE_5__*,struct sway_container*) ;
 struct sway_node* FUNC_8 (struct sway_seat*,int ,scalar_t__,struct wlr_surface**,double*,double*) ;
 struct sway_node* FUNC_9 (struct sway_node*) ;
 scalar_t__ FUNC_10 (struct sway_node*,struct sway_node*) ;
 int FUNC_11 (float) ;
 int FUNC_12 (struct sway_seat*,struct sway_binding*) ;
 struct sway_node* FUNC_13 (struct sway_seat*,struct sway_node*) ;
 struct sway_node* FUNC_14 (struct sway_seat*) ;
 struct sway_node* FUNC_15 (struct sway_seat*,struct sway_node*) ;
 int FUNC_16 (struct sway_seat*,struct sway_node*) ;
 int FUNC_17 (struct sway_seat*,struct sway_node*) ;
 int FUNC_18 (struct seatop_default_event*,int ) ;
 int FUNC_19 (struct seatop_default_event*,int ) ;
 char* FUNC_20 (char*) ;
 int FUNC_21 (struct wlr_event_pointer_axis*) ;
 int FUNC_22 (struct wlr_keyboard*) ;
 struct wlr_keyboard* FUNC_23 (int ) ;
 int FUNC_24 (int ,int ,int ,float,int,int ) ;

__attribute__((used)) static void FUNC_25(struct sway_seat *VAR_7,
  struct wlr_event_pointer_axis *VAR_8) {
 struct sway_input_device *VAR_9 =
  VAR_8->device ? VAR_8->device->data : ((void*)0);
 struct input_config *VAR_10 =
  VAR_9 ? FUNC_5(VAR_9) : ((void*)0);
 struct sway_cursor *VAR_11 = VAR_7->cursor;
 struct seatop_default_event *VAR_12 = VAR_7->seatop_data;


 struct wlr_surface *VAR_13 = ((void*)0);
 double VAR_14, VAR_15;
 struct sway_node *VAR_16 = FUNC_8(VAR_7,
   VAR_11->cursor->x, VAR_11->cursor->y, &VAR_13, &VAR_14, &VAR_15);
 struct sway_container *VAR_17 = VAR_16 && VAR_16->type == VAR_3 ?
  VAR_16->sway_container : ((void*)0);
 enum wlr_edges VAR_18 = VAR_17 ? FUNC_2(VAR_17, VAR_13, VAR_11) : VAR_5;
 bool VAR_19 = VAR_18 != VAR_5;
 bool VAR_20 = VAR_17 && !VAR_19 && !VAR_13;
 bool VAR_21 = VAR_17 && VAR_19 &&
  VAR_11->cursor->y < VAR_17->content_y;
 bool VAR_22 = VAR_17 && !VAR_19 && VAR_13;
 bool VAR_23 = VAR_16 && VAR_16->type == VAR_4;
 float VAR_24 =
  (VAR_10 == ((void*)0) || VAR_10->scroll_factor == VAR_0) ? 1.0f : VAR_10->scroll_factor;

 bool VAR_25 = 0;


 struct wlr_keyboard *VAR_26 = FUNC_23(VAR_7->wlr_seat);
 uint32_t VAR_27 = VAR_26 ? FUNC_22(VAR_26) : 0;
 struct wlr_input_device *VAR_28 =
  VAR_9 ? VAR_9->wlr_device : ((void*)0);
 char *VAR_29 = VAR_28 ? FUNC_6(VAR_28) : FUNC_20("*");
 uint32_t VAR_30 = FUNC_21(VAR_8);


 struct sway_binding *VAR_31 = ((void*)0);
 FUNC_18(VAR_12, VAR_30);
 VAR_31 = FUNC_4(VAR_12, VAR_6->current_mode->mouse_bindings,
   VAR_27, 0, VAR_20, VAR_19, VAR_22, VAR_23,
   VAR_29);
 if (VAR_31) {
  FUNC_12(VAR_7, VAR_31);
  VAR_25 = 1;
 }


 if (!VAR_25 && (VAR_20 || VAR_21)) {
  enum sway_container_layout VAR_32 = FUNC_1(VAR_17);
  if (VAR_32 == VAR_2 || VAR_32 == VAR_1) {
   struct sway_node *VAR_33 = FUNC_9(VAR_16);
   struct sway_node *VAR_34 =
    FUNC_13(VAR_7, VAR_33);
   list_t *VAR_35 = FUNC_0(VAR_17);
   int VAR_36 = FUNC_7(VAR_35, VAR_34->sway_container) +
    FUNC_11(VAR_24 * VAR_8->delta_discrete);
   if (VAR_36 < 0) {
    VAR_36 = 0;
   } else if (VAR_36 >= VAR_35->length) {
    VAR_36 = VAR_35->length - 1;
   }
   struct sway_node *VAR_37 = FUNC_14(VAR_7);
   struct sway_container *VAR_38 = VAR_35->items[VAR_36];
   struct sway_node *VAR_39 = &VAR_38->node;
   struct sway_node *VAR_40 =
    FUNC_15(VAR_7, VAR_39);
   if (FUNC_10(VAR_37, VAR_33)) {
    FUNC_16(VAR_7, VAR_40);
   } else {

    FUNC_17(VAR_7, VAR_39);
    FUNC_17(VAR_7, VAR_40);
    FUNC_17(VAR_7, VAR_37);
   }
   VAR_25 = 1;
  }
 }


 VAR_31 = FUNC_4(VAR_12, VAR_6->current_mode->mouse_bindings,
   VAR_27, 1, VAR_20, VAR_19, VAR_22, VAR_23,
   VAR_29);
 FUNC_19(VAR_12, VAR_30);
 if (VAR_31) {
  FUNC_12(VAR_7, VAR_31);
  VAR_25 = 1;
 }
 FUNC_3(VAR_29);

 if (!VAR_25) {
  FUNC_24(VAR_11->seat->wlr_seat, VAR_8->time_msec,
   VAR_8->orientation, VAR_24 * VAR_8->delta,
   FUNC_11(VAR_24 * VAR_8->delta_discrete), VAR_8->source);
 }
}
