
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct wlr_input_device {int dummy; } ;
struct sway_seat {TYPE_1__* cursor; } ;
typedef enum wlr_button_state { ____Placeholder_wlr_button_state } wlr_button_state ;
struct TYPE_2__ {scalar_t__ pressed_button_count; } ;


 int FUNC_0 (struct sway_seat*,int ,int ,int) ;
 int FUNC_1 (struct sway_seat*) ;

__attribute__((used)) static void FUNC_2(struct sway_seat *VAR_0, uint32_t VAR_1,
  struct wlr_input_device *VAR_2, uint32_t VAR_3,
  enum wlr_button_state VAR_4) {
 FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);

 if (VAR_0->cursor->pressed_button_count == 0) {
  FUNC_1(VAR_0);
 }
}
