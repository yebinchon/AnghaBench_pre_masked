
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct wlr_cursor {scalar_t__ y; scalar_t__ x; } ;
struct sway_seat {TYPE_1__* cursor; struct seatop_move_floating_event* seatop_data; } ;
struct seatop_move_floating_event {int con; scalar_t__ dy; scalar_t__ dx; } ;
struct TYPE_2__ {struct wlr_cursor* cursor; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sway_seat *VAR_0, uint32_t VAR_1,
  double VAR_2, double VAR_3) {
 struct seatop_move_floating_event *VAR_4 = VAR_0->seatop_data;
 struct wlr_cursor *VAR_5 = VAR_0->cursor->cursor;
 FUNC_1(VAR_4->con);
 FUNC_0(VAR_4->con, VAR_5->x - VAR_4->dx, VAR_5->y - VAR_4->dy);
 FUNC_1(VAR_4->con);
}
