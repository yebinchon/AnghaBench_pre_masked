
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sway_seat {struct seatop_down_event* seatop_data; int * seatop_impl; TYPE_2__* cursor; } ;
struct sway_container {int dummy; } ;
struct seatop_down_event {int ref_con_lx; int ref_con_ly; int ref_ly; int ref_lx; struct sway_container* con; } ;
struct TYPE_4__ {TYPE_1__* cursor; } ;
struct TYPE_3__ {int y; int x; } ;


 struct seatop_down_event* FUNC_0 (int,int) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_seat*) ;
 int VAR_0 ;

void FUNC_3(struct sway_seat *VAR_1, struct sway_container *VAR_2,
  uint32_t VAR_3, int VAR_4, int VAR_5) {
 FUNC_2(VAR_1);

 struct seatop_down_event *VAR_6 =
  FUNC_0(1, sizeof(struct seatop_down_event));
 if (!VAR_6) {
  return;
 }
 VAR_6->con = VAR_2;
 VAR_6->ref_lx = VAR_1->cursor->cursor->x;
 VAR_6->ref_ly = VAR_1->cursor->cursor->y;
 VAR_6->ref_con_lx = VAR_4;
 VAR_6->ref_con_ly = VAR_5;

 VAR_1->seatop_impl = &VAR_0;
 VAR_1->seatop_data = VAR_6;

 FUNC_1(VAR_2);
}
