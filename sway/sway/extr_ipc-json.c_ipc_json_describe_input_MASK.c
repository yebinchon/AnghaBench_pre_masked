
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xkb_layout_index_t ;
struct xkb_state {int dummy; } ;
struct xkb_keymap {int dummy; } ;
struct wlr_keyboard {struct xkb_state* xkb_state; struct xkb_keymap* keymap; } ;
struct sway_input_device {char const* identifier; TYPE_1__* wlr_device; } ;
struct libinput_device {int dummy; } ;
typedef int json_object ;
struct TYPE_3__ {char const* name; scalar_t__ vendor; scalar_t__ product; scalar_t__ type; struct wlr_keyboard* keyboard; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct libinput_device*) ;
 char const* FUNC_1 (struct sway_input_device*) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 () ;
 int * FUNC_4 (scalar_t__) ;
 int * FUNC_5 () ;
 int * FUNC_6 (char const*) ;
 int FUNC_7 (int *,char*,int *) ;
 int FUNC_8 (struct sway_input_device*,char*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 struct libinput_device* FUNC_10 (TYPE_1__*) ;
 char* FUNC_11 (struct xkb_keymap*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct xkb_keymap*) ;
 int FUNC_13 (struct xkb_state*,scalar_t__,int ) ;

json_object *FUNC_14(struct sway_input_device *VAR_2) {
 if (!(FUNC_8(VAR_2, "Device must not be null"))) {
  return ((void*)0);
 }

 json_object *VAR_3 = FUNC_5();

 FUNC_7(VAR_3, "identifier",
  FUNC_6(VAR_2->identifier));
 FUNC_7(VAR_3, "name",
  FUNC_6(VAR_2->wlr_device->name));
 FUNC_7(VAR_3, "vendor",
  FUNC_4(VAR_2->wlr_device->vendor));
 FUNC_7(VAR_3, "product",
  FUNC_4(VAR_2->wlr_device->product));
 FUNC_7(VAR_3, "type",
  FUNC_6(
   FUNC_1(VAR_2)));

 if (VAR_2->wlr_device->type == VAR_0) {
  struct wlr_keyboard *VAR_4 = VAR_2->wlr_device->keyboard;
  struct xkb_keymap *VAR_5 = VAR_4->keymap;
  struct xkb_state *VAR_6 = VAR_4->xkb_state;

  json_object *VAR_7 = FUNC_3();
  FUNC_7(VAR_3, "xkb_layout_names", VAR_7);

  xkb_layout_index_t VAR_8 = FUNC_12(VAR_5);
  xkb_layout_index_t VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
   const char *VAR_10 = FUNC_11(VAR_5, VAR_9);
   FUNC_2(VAR_7,
    VAR_10 ? FUNC_6(VAR_10) : ((void*)0));

   bool VAR_11 = FUNC_13(VAR_6,
    VAR_9, VAR_1);
   if (VAR_11) {
    FUNC_7(VAR_3, "xkb_active_layout_index",
     FUNC_4(VAR_9));
    FUNC_7(VAR_3, "xkb_active_layout_name",
     VAR_10 ? FUNC_6(VAR_10) : ((void*)0));
   }
  }
 }

 if (FUNC_9(VAR_2->wlr_device)) {
  struct libinput_device *VAR_12;
  VAR_12 = FUNC_10(VAR_2->wlr_device);
  FUNC_7(VAR_3, "libinput",
    FUNC_0(VAR_12));
 }

 return VAR_3;
}
