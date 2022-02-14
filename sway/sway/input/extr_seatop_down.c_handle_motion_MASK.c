
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct sway_seat {int wlr_seat; TYPE_3__* cursor; struct seatop_down_event* seatop_data; } ;
struct sway_container {TYPE_1__* view; } ;
struct seatop_down_event {double ref_lx; double ref_ly; double ref_con_lx; double ref_con_ly; struct sway_container* con; } ;
struct TYPE_6__ {TYPE_2__* cursor; } ;
struct TYPE_5__ {double x; double y; } ;
struct TYPE_4__ {int surface; } ;


 scalar_t__ FUNC_0 (struct sway_seat*,int ) ;
 int FUNC_1 (int ,int ,double,double) ;

__attribute__((used)) static void FUNC_2(struct sway_seat *VAR_0, uint32_t VAR_1,
  double VAR_2, double VAR_3) {
 struct seatop_down_event *VAR_4 = VAR_0->seatop_data;
 struct sway_container *VAR_5 = VAR_4->con;
 if (FUNC_0(VAR_0, VAR_5->view->surface)) {
  double VAR_6 = VAR_0->cursor->cursor->x - VAR_4->ref_lx;
  double VAR_7 = VAR_0->cursor->cursor->y - VAR_4->ref_ly;
  double VAR_8 = VAR_4->ref_con_lx + VAR_6;
  double VAR_9 = VAR_4->ref_con_ly + VAR_7;
  FUNC_1(VAR_0->wlr_seat, VAR_1, VAR_8, VAR_9);
 }
}
