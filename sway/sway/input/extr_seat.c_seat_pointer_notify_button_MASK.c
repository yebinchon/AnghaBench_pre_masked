
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sway_seat {int wlr_seat; int last_button_serial; } ;
typedef enum wlr_button_state { ____Placeholder_wlr_button_state } wlr_button_state ;


 int FUNC_0 (int ,int ,int ,int) ;

void FUNC_1(struct sway_seat *VAR_0, uint32_t VAR_1,
  uint32_t VAR_2, enum wlr_button_state VAR_3) {
 VAR_0->last_button_serial = FUNC_0(VAR_0->wlr_seat,
   VAR_1, VAR_2, VAR_3);
}
