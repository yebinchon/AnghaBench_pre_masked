
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_seat {int cursor; struct seatop_move_tiling_event* seatop_data; } ;
struct sway_container {int dummy; } ;
struct seatop_move_tiling_event {int threshold_reached; } ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (struct sway_seat*,struct sway_container*) ;

void FUNC_2(struct sway_seat *VAR_0,
  struct sway_container *VAR_1) {
 FUNC_1(VAR_0, VAR_1);
 struct seatop_move_tiling_event *VAR_2 = VAR_0->seatop_data;
 if (VAR_2) {
  VAR_2->threshold_reached = 1;
  FUNC_0(VAR_0->cursor, "grab", ((void*)0));
 }
}
