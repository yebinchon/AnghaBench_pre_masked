
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct seatop_default_event {size_t pressed_button_count; scalar_t__* pressed_buttons; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct seatop_default_event *VAR_1, uint32_t VAR_2) {
 if (VAR_1->pressed_button_count >= VAR_0) {
  return;
 }
 size_t VAR_3 = 0;
 while (VAR_3 < VAR_1->pressed_button_count && VAR_1->pressed_buttons[VAR_3] < VAR_2) {
  ++VAR_3;
 }
 size_t VAR_4 = VAR_1->pressed_button_count;
 while (VAR_4 > VAR_3) {
  VAR_1->pressed_buttons[VAR_4] = VAR_1->pressed_buttons[VAR_4 - 1];
  --VAR_4;
 }
 VAR_1->pressed_buttons[VAR_3] = VAR_2;
 VAR_1->pressed_button_count++;
}
