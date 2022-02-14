
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int xkb_mod_mask_t ;
typedef int xkb_mod_index_t ;
typedef int uint32_t ;
struct xkb_keymap {int dummy; } ;
struct wlr_seat {int dummy; } ;
struct wlr_input_device {TYPE_4__* keyboard; } ;
struct TYPE_17__ {int notify; int link; } ;
struct sway_keyboard {scalar_t__ effective_layout; TYPE_3__* seat_device; TYPE_8__ keyboard_modifiers; TYPE_8__ keyboard_key; struct xkb_keymap* keymap; } ;
struct input_config {scalar_t__ xkb_numlock; scalar_t__ xkb_capslock; int repeat_rate; int repeat_delay; } ;
struct TYPE_18__ {struct wlr_input_device* wlr_device; } ;
struct TYPE_14__ {int modifiers; int key; } ;
struct TYPE_16__ {TYPE_2__ events; int * led_indexes; int xkb_state; } ;
struct TYPE_15__ {TYPE_9__* input_device; TYPE_1__* sway_seat; } ;
struct TYPE_13__ {struct wlr_seat* wlr_seat; } ;
struct TYPE_12__ {scalar_t__ reloading; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_11__* VAR_7 ;
 int FUNC_0 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct input_config* FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (char*,TYPE_9__*) ;
 int FUNC_3 (char*,char*) ;
 struct xkb_keymap* FUNC_4 (struct input_config*,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_8__*) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_4__*,int ,int ,int,int ) ;
 int FUNC_10 (TYPE_4__*,struct xkb_keymap*) ;
 int FUNC_11 (TYPE_4__*,int,int) ;
 int FUNC_12 (struct wlr_seat*,struct wlr_input_device*) ;
 char* FUNC_13 (struct xkb_keymap*,int ) ;
 int FUNC_14 (struct xkb_keymap*) ;
 int FUNC_15 (struct xkb_keymap*,int ) ;
 scalar_t__ FUNC_16 (int ,int ) ;

void FUNC_17(struct sway_keyboard *VAR_10) {
 struct input_config *VAR_11 =
  FUNC_1(VAR_10->seat_device->input_device);
 struct wlr_input_device *VAR_12 =
  VAR_10->seat_device->input_device->wlr_device;

 struct xkb_keymap *VAR_13 = FUNC_4(VAR_11, ((void*)0));
 if (!VAR_13) {
  FUNC_5(VAR_1, "Failed to compile keymap. Attempting defaults");
  VAR_13 = FUNC_4(((void*)0), ((void*)0));
  if (!VAR_13) {
   FUNC_5(VAR_1,
     "Failed to compile default keymap. Aborting configure");
   return;
  }
 }

 bool VAR_14 = 0;
 bool VAR_15 = VAR_10->effective_layout != 0;
 if (VAR_10->keymap) {
  char *VAR_16 = FUNC_13(VAR_10->keymap,
   VAR_3);
  char *VAR_17 = FUNC_13(VAR_13,
   VAR_3);
  VAR_14 = FUNC_3(VAR_16, VAR_17);
  FUNC_0(VAR_16);
  FUNC_0(VAR_17);
 } else {
  VAR_14 = 1;
 }

 if (VAR_14 || VAR_7->reloading) {
  FUNC_14(VAR_10->keymap);
  VAR_10->keymap = VAR_13;
  VAR_10->effective_layout = 0;
  FUNC_10(VAR_12->keyboard, VAR_10->keymap);

  xkb_mod_mask_t VAR_18 = 0;
  if (VAR_11 && VAR_11->xkb_numlock > 0) {
   xkb_mod_index_t VAR_19 = FUNC_15(VAR_13,
     VAR_6);
   if (VAR_19 != VAR_4) {
          VAR_18 |= (uint32_t)1 << VAR_19;
   }
  }
  if (VAR_11 && VAR_11->xkb_capslock > 0) {
   xkb_mod_index_t VAR_20 = FUNC_15(VAR_13,
     VAR_5);
   if (VAR_20 != VAR_4) {
          VAR_18 |= (uint32_t)1 << VAR_20;
   }
  }
  if (VAR_18) {
   FUNC_9(VAR_12->keyboard, 0, 0,
     VAR_18, 0);
   uint32_t VAR_21 = 0;
   for (uint32_t VAR_22 = 0; VAR_22 < VAR_2; ++VAR_22) {
    if (FUNC_16(
      VAR_12->keyboard->xkb_state,
      VAR_12->keyboard->led_indexes[VAR_22])) {
     VAR_21 |= (1 << VAR_22);
    }
   }
   FUNC_8(VAR_12->keyboard, VAR_21);
  }
 } else {
  FUNC_14(VAR_13);
 }

 int VAR_23 = 25;
 if (VAR_11 && VAR_11->repeat_rate != VAR_0) {
  VAR_23 = VAR_11->repeat_rate;
 }
 int VAR_24 = 600;
 if (VAR_11 && VAR_11->repeat_delay != VAR_0) {
  VAR_24 = VAR_11->repeat_delay;
 }
 FUNC_11(VAR_12->keyboard, VAR_23,
   VAR_24);

 struct wlr_seat *VAR_25 = VAR_10->seat_device->sway_seat->wlr_seat;
 FUNC_12(VAR_25, VAR_12);

 FUNC_6(&VAR_10->keyboard_key.link);
 FUNC_7(&VAR_12->keyboard->events.key, &VAR_10->keyboard_key);
 VAR_10->keyboard_key.notify = VAR_8;

 FUNC_6(&VAR_10->keyboard_modifiers.link);
 FUNC_7(&VAR_12->keyboard->events.modifiers,
  &VAR_10->keyboard_modifiers);
 VAR_10->keyboard_modifiers.notify = VAR_9;

 if (VAR_14) {
  FUNC_2("xkb_keymap",
   VAR_10->seat_device->input_device);
 } else if (VAR_15) {
  FUNC_2("xkb_layout",
   VAR_10->seat_device->input_device);
 }
}
