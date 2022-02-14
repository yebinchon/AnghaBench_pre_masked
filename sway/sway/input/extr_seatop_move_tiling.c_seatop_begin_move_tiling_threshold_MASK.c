
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_seat {int wlr_seat; struct seatop_move_tiling_event* seatop_data; int * seatop_impl; TYPE_1__* cursor; } ;
struct sway_container {int dummy; } ;
struct seatop_move_tiling_event {int ref_ly; int ref_lx; struct sway_container* con; } ;
struct TYPE_4__ {int y; int x; } ;
struct TYPE_3__ {TYPE_2__* cursor; } ;


 struct seatop_move_tiling_event* FUNC_0 (int,int) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_seat*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

void FUNC_4(struct sway_seat *VAR_1,
  struct sway_container *VAR_2) {
 FUNC_2(VAR_1);

 struct seatop_move_tiling_event *VAR_3 =
  FUNC_0(1, sizeof(struct seatop_move_tiling_event));
 if (!VAR_3) {
  return;
 }
 VAR_3->con = VAR_2;
 VAR_3->ref_lx = VAR_1->cursor->cursor->x;
 VAR_3->ref_ly = VAR_1->cursor->cursor->y;

 VAR_1->seatop_impl = &VAR_0;
 VAR_1->seatop_data = VAR_3;

 FUNC_1(VAR_2);
 FUNC_3(VAR_1->wlr_seat);
}
