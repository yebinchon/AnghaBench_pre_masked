
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ xkb_keysym_t ;
typedef scalar_t__ xkb_keycode_t ;
typedef int uint32_t ;
struct wlr_seat {int dummy; } ;
struct wlr_input_device {TYPE_5__* keyboard; } ;
struct wlr_event_keyboard_key {scalar_t__ state; scalar_t__ keycode; int time_msec; } ;
struct wl_listener {int dummy; } ;
struct sway_seat {int * exclusive_client; struct wlr_seat* wlr_seat; } ;
struct sway_keyboard {int state_pressed_sent; struct sway_binding* repeat_binding; int key_repeat_source; int effective_layout; int state_keysyms_translated; int state_keysyms_raw; int state_keycodes; struct sway_binding* held_binding; TYPE_2__* seat_device; } ;
struct sway_binding {int dummy; } ;
struct TYPE_14__ {TYPE_3__* current_mode; } ;
struct TYPE_13__ {int idle; } ;
struct TYPE_11__ {scalar_t__ delay; } ;
struct TYPE_12__ {TYPE_4__ repeat_info; } ;
struct TYPE_10__ {int keysym_bindings; int keycode_bindings; } ;
struct TYPE_9__ {TYPE_1__* input_device; struct sway_seat* sway_seat; } ;
struct TYPE_8__ {struct wlr_input_device* wlr_device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_7__* VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,struct sway_binding**,int ,int,int,char*,int ) ;
 char* FUNC_2 (struct wlr_input_device*) ;
 struct sway_keyboard* VAR_4 ;
 int FUNC_3 (struct sway_keyboard*,scalar_t__ const*,int ,size_t) ;
 int VAR_5 ;
 size_t FUNC_4 (struct sway_keyboard*,scalar_t__,scalar_t__ const**,int *) ;
 size_t FUNC_5 (struct sway_keyboard*,scalar_t__,scalar_t__ const**,int *) ;
 int FUNC_6 (struct sway_seat*,struct sway_binding*) ;
 TYPE_6__ VAR_6 ;
 int FUNC_7 (struct sway_keyboard*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,struct wlr_event_keyboard_key*,int ,int ) ;
 struct sway_keyboard* FUNC_11 (struct wl_listener*,int ,int ) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int ,struct wlr_seat*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (struct wlr_seat*,int ,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct wlr_seat*,struct wlr_input_device*) ;

__attribute__((used)) static void FUNC_17(struct wl_listener *VAR_7, void *VAR_8) {
 struct sway_keyboard *VAR_9 =
  FUNC_11(VAR_7, VAR_9, VAR_5);
 struct sway_seat* VAR_10 = VAR_9->seat_device->sway_seat;
 struct wlr_seat *VAR_11 = VAR_10->wlr_seat;
 struct wlr_input_device *VAR_12 =
  VAR_9->seat_device->input_device->wlr_device;
 char *VAR_13 = FUNC_2(VAR_12);
 FUNC_13(VAR_6.idle, VAR_11);
 struct wlr_event_keyboard_key *VAR_14 = VAR_8;
 bool VAR_15 = VAR_10->exclusive_client != ((void*)0);


 xkb_keycode_t VAR_16 = VAR_14->keycode + 8;

 const xkb_keysym_t *VAR_17;
 uint32_t VAR_18;
 size_t VAR_19 =
  FUNC_4(VAR_9, VAR_16, &VAR_17, &VAR_18);

 const xkb_keysym_t *VAR_20;
 uint32_t VAR_21;
 size_t VAR_22 =
  FUNC_5(VAR_9, VAR_16, &VAR_20,
   &VAR_21);

 uint32_t VAR_23 = FUNC_14(VAR_12->keyboard);


 FUNC_10(&VAR_9->state_keycodes, VAR_14,
   (uint32_t)VAR_16, VAR_23);
 for (size_t VAR_24 = 0; VAR_24 < VAR_19; ++VAR_24) {
  FUNC_10(&VAR_9->state_keysyms_raw,
    VAR_14, (uint32_t)VAR_17[VAR_24],
    VAR_23);
 }
 for (size_t VAR_25 = 0; VAR_25 < VAR_22; ++VAR_25) {
  FUNC_10(&VAR_9->state_keysyms_translated,
    VAR_14, (uint32_t)VAR_20[VAR_25],
    VAR_23);
 }

 bool VAR_26 = 0;


 struct sway_binding *VAR_27 = ((void*)0);
 FUNC_1(&VAR_9->state_keycodes,
   VAR_3->current_mode->keycode_bindings, &VAR_27,
   VAR_23, 1, VAR_15, VAR_13,
   VAR_9->effective_layout);
 FUNC_1(&VAR_9->state_keysyms_raw,
   VAR_3->current_mode->keysym_bindings, &VAR_27,
   VAR_18, 1, VAR_15, VAR_13,
   VAR_9->effective_layout);
 FUNC_1(&VAR_9->state_keysyms_translated,
   VAR_3->current_mode->keysym_bindings, &VAR_27,
   VAR_21, 1, VAR_15, VAR_13,
   VAR_9->effective_layout);


 if (VAR_9->held_binding && VAR_27 != VAR_9->held_binding &&
   VAR_14->state == VAR_2) {
  FUNC_6(VAR_10, VAR_9->held_binding);
  VAR_26 = 1;
 }
 if (VAR_27 != VAR_9->held_binding) {
  VAR_9->held_binding = ((void*)0);
 }
 if (VAR_27 && VAR_14->state == VAR_1) {
  VAR_9->held_binding = VAR_27;
 }


 struct sway_binding *VAR_28 = ((void*)0);
 if (VAR_14->state == VAR_1) {
  FUNC_1(&VAR_9->state_keycodes,
    VAR_3->current_mode->keycode_bindings, &VAR_28,
    VAR_23, 0, VAR_15, VAR_13,
    VAR_9->effective_layout);
  FUNC_1(&VAR_9->state_keysyms_raw,
    VAR_3->current_mode->keysym_bindings, &VAR_28,
    VAR_18, 0, VAR_15, VAR_13,
    VAR_9->effective_layout);
  FUNC_1(&VAR_9->state_keysyms_translated,
    VAR_3->current_mode->keysym_bindings, &VAR_28,
    VAR_21, 0, VAR_15,
    VAR_13, VAR_9->effective_layout);
 }



 if (VAR_28 && VAR_12->keyboard->repeat_info.delay > 0) {
  VAR_9->repeat_binding = VAR_28;
  if (FUNC_12(VAR_9->key_repeat_source,
    VAR_12->keyboard->repeat_info.delay) < 0) {
   FUNC_8(VAR_0, "failed to set key repeat timer");
  }
 } else if (VAR_9->repeat_binding) {
  FUNC_7(VAR_9);
 }

 if (VAR_28) {
  FUNC_6(VAR_10, VAR_28);
  VAR_26 = 1;
 }


 if (!VAR_26 && VAR_14->state == VAR_1) {
  VAR_26 = FUNC_3(
    VAR_9, VAR_20, VAR_21,
    VAR_22);
 }
 if (!VAR_26 && VAR_14->state == VAR_1) {
  VAR_26 = FUNC_3(
    VAR_9, VAR_17, VAR_18,
    VAR_19);
 }

 if (!VAR_26 || VAR_14->state == VAR_2) {
  bool VAR_29 = FUNC_10(
    &VAR_9->state_pressed_sent, VAR_14, (uint32_t)VAR_16, 0);
  if (VAR_29 || VAR_14->state == VAR_1) {
   FUNC_16(VAR_11, VAR_12);
   FUNC_15(VAR_11, VAR_14->time_msec,
     VAR_14->keycode, VAR_14->state);
  }
 }

 FUNC_9();

 FUNC_0(VAR_13);
}
