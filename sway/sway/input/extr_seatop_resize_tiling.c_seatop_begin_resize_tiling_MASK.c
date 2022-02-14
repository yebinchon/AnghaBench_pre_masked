
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_seat {int wlr_seat; struct seatop_resize_tiling_event* seatop_data; int * seatop_impl; TYPE_2__* cursor; } ;
struct sway_container {int dummy; } ;
struct seatop_resize_tiling_event {int edge; int edge_x; int edge_y; TYPE_4__* v_con; int v_con_orig_height; struct sway_container* con; TYPE_3__* h_con; int h_con_orig_width; int ref_ly; int ref_lx; } ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;
struct TYPE_8__ {int height; } ;
struct TYPE_7__ {int width; } ;
struct TYPE_6__ {TYPE_1__* cursor; } ;
struct TYPE_5__ {int y; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct seatop_resize_tiling_event* FUNC_0 (int,int) ;
 void* FUNC_1 (struct sway_container*,int) ;
 int FUNC_2 (struct sway_seat*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

void FUNC_4(struct sway_seat *VAR_5,
  struct sway_container *VAR_6, enum wlr_edges VAR_7) {
 FUNC_2(VAR_5);

 struct seatop_resize_tiling_event *VAR_8 =
  FUNC_0(1, sizeof(struct seatop_resize_tiling_event));
 if (!VAR_8) {
  return;
 }
 VAR_8->con = VAR_6;
 VAR_8->edge = VAR_7;

 VAR_8->ref_lx = VAR_5->cursor->cursor->x;
 VAR_8->ref_ly = VAR_5->cursor->cursor->y;

 if (VAR_7 & (VAR_1 | VAR_2)) {
  VAR_8->edge_x = VAR_7 & (VAR_1 | VAR_2);
  VAR_8->h_con = FUNC_1(VAR_8->con, VAR_8->edge_x);

  if (VAR_8->h_con) {
   VAR_8->h_con_orig_width = VAR_8->h_con->width;
  }
 }
 if (VAR_7 & (VAR_3 | VAR_0)) {
  VAR_8->edge_y = VAR_7 & (VAR_3 | VAR_0);
  VAR_8->v_con = FUNC_1(VAR_8->con, VAR_8->edge_y);

  if (VAR_8->v_con) {
   VAR_8->v_con_orig_height = VAR_8->v_con->height;
  }
 }

 VAR_5->seatop_impl = &VAR_4;
 VAR_5->seatop_data = VAR_8;

 FUNC_3(VAR_5->wlr_seat);
}
