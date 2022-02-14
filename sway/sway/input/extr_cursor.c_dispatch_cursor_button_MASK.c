
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct wlr_input_device {int dummy; } ;
struct sway_cursor {int seat; } ;
typedef enum wlr_button_state { ____Placeholder_wlr_button_state } wlr_button_state ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__,struct wlr_input_device*,scalar_t__,int) ;

void FUNC_2(struct sway_cursor *VAR_0,
  struct wlr_input_device *VAR_1, uint32_t VAR_2, uint32_t VAR_3,
  enum wlr_button_state VAR_4) {
 if (VAR_2 == 0) {
  VAR_2 = FUNC_0();
 }

 FUNC_1(VAR_0->seat, VAR_2, VAR_1, VAR_3, VAR_4);
}
