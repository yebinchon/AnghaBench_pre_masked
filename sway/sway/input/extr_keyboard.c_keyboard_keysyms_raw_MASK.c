
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xkb_layout_index_t ;
typedef int xkb_keysym_t ;
typedef int xkb_keycode_t ;
typedef int uint32_t ;
struct wlr_input_device {TYPE_3__* keyboard; } ;
struct sway_keyboard {TYPE_2__* seat_device; } ;
struct TYPE_6__ {int keymap; int xkb_state; } ;
struct TYPE_5__ {TYPE_1__* input_device; } ;
struct TYPE_4__ {struct wlr_input_device* wlr_device; } ;


 int FUNC_0 (TYPE_3__*) ;
 size_t FUNC_1 (int ,int ,int ,int ,int const**) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static size_t FUNC_3(struct sway_keyboard *VAR_0,
  xkb_keycode_t VAR_1, const xkb_keysym_t **VAR_2,
  uint32_t *VAR_3) {
 struct wlr_input_device *VAR_4 =
  VAR_0->seat_device->input_device->wlr_device;
 *VAR_3 = FUNC_0(VAR_4->keyboard);

 xkb_layout_index_t VAR_5 = FUNC_2(
  VAR_4->keyboard->xkb_state, VAR_1);
 return FUNC_1(VAR_4->keyboard->keymap,
  VAR_1, VAR_5, 0, VAR_2);
}
