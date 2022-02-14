
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_seat {struct seatop_move_tiling_event* seatop_data; } ;
struct sway_container {int node; } ;
struct seatop_move_tiling_event {struct sway_container* con; int * target_node; } ;


 int FUNC_0 (struct sway_seat*) ;

__attribute__((used)) static void FUNC_1(struct sway_seat *VAR_0, struct sway_container *VAR_1) {
 struct seatop_move_tiling_event *VAR_2 = VAR_0->seatop_data;
 if (VAR_2->target_node == &VAR_1->node) {
  VAR_2->target_node = ((void*)0);
 }
 if (VAR_2->con == VAR_1) {
  FUNC_0(VAR_0);
 }
}
