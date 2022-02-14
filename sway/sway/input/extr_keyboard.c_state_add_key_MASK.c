
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sway_shortcut_state {size_t npressed; scalar_t__* pressed_keys; scalar_t__ current_key; scalar_t__* pressed_keycodes; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sway_shortcut_state *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3) {
 if (VAR_1->npressed >= VAR_0) {
  return;
 }
 size_t VAR_4 = 0;
 while (VAR_4 < VAR_1->npressed && VAR_1->pressed_keys[VAR_4] < VAR_3) {
  ++VAR_4;
 }
 size_t VAR_5 = VAR_1->npressed;
 while (VAR_5 > VAR_4) {
  VAR_1->pressed_keys[VAR_5] = VAR_1->pressed_keys[VAR_5 - 1];
  VAR_1->pressed_keycodes[VAR_5] = VAR_1->pressed_keycodes[VAR_5 - 1];
  --VAR_5;
 }
 VAR_1->pressed_keys[VAR_4] = VAR_3;
 VAR_1->pressed_keycodes[VAR_4] = VAR_2;
 VAR_1->npressed++;
 VAR_1->current_key = VAR_3;
}
