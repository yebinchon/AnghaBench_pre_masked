
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct wlr_event_keyboard_key {scalar_t__ state; scalar_t__ keycode; } ;
struct sway_shortcut_state {scalar_t__ last_raw_modifiers; scalar_t__ last_keycode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sway_shortcut_state*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct sway_shortcut_state*,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct sway_shortcut_state *VAR_1,
  struct wlr_event_keyboard_key *VAR_2, uint32_t VAR_3,
  uint32_t VAR_4) {
 bool VAR_5 = VAR_4 != VAR_1->last_raw_modifiers;
 VAR_1->last_raw_modifiers = VAR_4;

 if (VAR_5 && VAR_1->last_keycode) {

  FUNC_1(VAR_1, VAR_1->last_keycode);
 }

 if (VAR_2->state == VAR_0) {

  FUNC_0(VAR_1, VAR_2->keycode, VAR_3);
  VAR_1->last_keycode = VAR_2->keycode;
 } else {
  return FUNC_1(VAR_1, VAR_2->keycode);
 }

 return 0;
}
