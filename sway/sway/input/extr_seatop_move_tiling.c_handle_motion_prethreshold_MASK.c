
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_output {int scale; } ;
struct sway_seat {TYPE_3__* cursor; struct seatop_move_tiling_event* seatop_data; } ;
struct seatop_move_tiling_event {double ref_lx; double ref_ly; int threshold_reached; } ;
struct TYPE_8__ {double tiling_drag_threshold; } ;
struct TYPE_7__ {TYPE_1__* cursor; } ;
struct TYPE_6__ {int output_layout; } ;
struct TYPE_5__ {double x; double y; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,int *) ;
 TYPE_2__* VAR_1 ;
 struct wlr_output* FUNC_1 (int ,double,double) ;

__attribute__((used)) static void FUNC_2(struct sway_seat *VAR_2) {
 struct seatop_move_tiling_event *VAR_3 = VAR_2->seatop_data;
 double VAR_4 = VAR_2->cursor->cursor->x;
 double VAR_5 = VAR_2->cursor->cursor->y;
 double VAR_6 = VAR_3->ref_lx;
 double VAR_7 = VAR_3->ref_ly;




 struct wlr_output *VAR_8 = FUNC_1(
   VAR_1->output_layout, VAR_4, VAR_5);
 double VAR_9 = VAR_8 ? VAR_8->scale : 1;
 double VAR_10 = VAR_0->tiling_drag_threshold * VAR_9;
 VAR_10 *= VAR_10;


 if ((VAR_4 - VAR_6) * (VAR_4 - VAR_6) + (VAR_5 - VAR_7) * (VAR_5 - VAR_7) > VAR_10) {
  VAR_3->threshold_reached = 1;
  FUNC_0(VAR_2->cursor, "grab", ((void*)0));
 }
}
