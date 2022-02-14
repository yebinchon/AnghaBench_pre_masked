
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct wlr_input_device {int dummy; } ;
struct sway_seat {struct seatop_move_floating_event* seatop_data; TYPE_1__* cursor; } ;
struct seatop_move_floating_event {TYPE_2__* con; } ;
typedef enum wlr_button_state { ____Placeholder_wlr_button_state } wlr_button_state ;
struct TYPE_4__ {int y; int x; } ;
struct TYPE_3__ {scalar_t__ pressed_button_count; } ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (struct sway_seat*) ;

__attribute__((used)) static void FUNC_2(struct sway_seat *VAR_0, uint32_t VAR_1,
  struct wlr_input_device *VAR_2, uint32_t VAR_3,
  enum wlr_button_state VAR_4) {
 if (VAR_0->cursor->pressed_button_count == 0) {
  struct seatop_move_floating_event *VAR_5 = VAR_0->seatop_data;



  FUNC_0(VAR_5->con, VAR_5->con->x, VAR_5->con->y);

  FUNC_1(VAR_0);
 }
}
