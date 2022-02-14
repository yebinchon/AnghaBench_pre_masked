
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_seat {int wlr_seat; struct seatop_move_floating_event* seatop_data; int * seatop_impl; struct sway_cursor* cursor; } ;
struct sway_cursor {TYPE_1__* cursor; } ;
struct sway_container {scalar_t__ y; scalar_t__ x; } ;
struct seatop_move_floating_event {scalar_t__ dy; scalar_t__ dx; struct sway_container* con; } ;
struct TYPE_2__ {scalar_t__ y; scalar_t__ x; } ;


 struct seatop_move_floating_event* FUNC_0 (int,int) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_cursor*,char*,int *) ;
 int FUNC_3 (struct sway_seat*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

void FUNC_5(struct sway_seat *VAR_1,
  struct sway_container *VAR_2) {
 FUNC_3(VAR_1);

 struct sway_cursor *VAR_3 = VAR_1->cursor;
 struct seatop_move_floating_event *VAR_4 =
  FUNC_0(1, sizeof(struct seatop_move_floating_event));
 if (!VAR_4) {
  return;
 }
 VAR_4->con = VAR_2;
 VAR_4->dx = VAR_3->cursor->x - VAR_2->x;
 VAR_4->dy = VAR_3->cursor->y - VAR_2->y;

 VAR_1->seatop_impl = &VAR_0;
 VAR_1->seatop_data = VAR_4;

 FUNC_1(VAR_2);

 FUNC_2(VAR_3, "grab", ((void*)0));
 FUNC_4(VAR_1->wlr_seat);
}
