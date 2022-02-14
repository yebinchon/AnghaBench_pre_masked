
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sway_seat {struct seatop_move_tiling_event* seatop_data; } ;
struct seatop_move_tiling_event {scalar_t__ threshold_reached; } ;


 int FUNC_0 (struct sway_seat*) ;
 int FUNC_1 (struct sway_seat*) ;

__attribute__((used)) static void FUNC_2(struct sway_seat *VAR_0, uint32_t VAR_1,
  double VAR_2, double VAR_3) {
 struct seatop_move_tiling_event *VAR_4 = VAR_0->seatop_data;
 if (VAR_4->threshold_reached) {
  FUNC_0(VAR_0);
 } else {
  FUNC_1(VAR_0);
 }
}
