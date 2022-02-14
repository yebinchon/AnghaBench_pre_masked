
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct seatop_default_event {size_t pressed_button_count; scalar_t__* pressed_buttons; } ;



__attribute__((used)) static void FUNC_0(struct seatop_default_event *VAR_0,
  uint32_t VAR_1) {
 size_t VAR_2 = 0;
 for (size_t VAR_3 = 0; VAR_3 < VAR_0->pressed_button_count; ++VAR_3) {
  if (VAR_3 > VAR_2) {
   VAR_0->pressed_buttons[VAR_2] = VAR_0->pressed_buttons[VAR_3];
  }
  if (VAR_0->pressed_buttons[VAR_3] != VAR_1) {
   ++VAR_2;
  }
 }
 while (VAR_0->pressed_button_count > VAR_2) {
  --VAR_0->pressed_button_count;
  VAR_0->pressed_buttons[VAR_0->pressed_button_count] = 0;
 }
}
