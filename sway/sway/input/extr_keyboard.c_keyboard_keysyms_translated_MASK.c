
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xkb_mod_mask_t ;
typedef int xkb_keysym_t ;
typedef int xkb_keycode_t ;
typedef int uint32_t ;
struct wlr_input_device {TYPE_3__* keyboard; } ;
struct sway_keyboard {TYPE_2__* seat_device; } ;
struct TYPE_6__ {int xkb_state; } ;
struct TYPE_5__ {TYPE_1__* input_device; } ;
struct TYPE_4__ {struct wlr_input_device* wlr_device; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ) ;
 size_t FUNC_2 (int ,int ,int const**) ;

__attribute__((used)) static size_t FUNC_3(struct sway_keyboard *VAR_1,
  xkb_keycode_t VAR_2, const xkb_keysym_t **VAR_3,
  uint32_t *VAR_4) {
 struct wlr_input_device *VAR_5 =
  VAR_1->seat_device->input_device->wlr_device;
 *VAR_4 = FUNC_0(VAR_5->keyboard);
 xkb_mod_mask_t VAR_6 = FUNC_1(
  VAR_5->keyboard->xkb_state, VAR_2, VAR_0);
 *VAR_4 = *VAR_4 & ~VAR_6;

 return FUNC_2(VAR_5->keyboard->xkb_state,
  VAR_2, VAR_3);
}
