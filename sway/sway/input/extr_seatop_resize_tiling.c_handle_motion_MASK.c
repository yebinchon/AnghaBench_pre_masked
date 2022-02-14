
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct sway_seat {TYPE_2__* cursor; struct seatop_resize_tiling_event* seatop_data; } ;
struct seatop_resize_tiling_event {int ref_lx; int ref_ly; int edge; int h_con_orig_width; int v_con_orig_height; int edge_y; TYPE_3__* v_con; int edge_x; TYPE_3__* h_con; } ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {TYPE_1__* cursor; } ;
struct TYPE_4__ {int x; int y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct sway_seat *VAR_4, uint32_t VAR_5,
  double VAR_6, double VAR_7) {
 struct seatop_resize_tiling_event *VAR_8 = VAR_4->seatop_data;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = VAR_4->cursor->cursor->x - VAR_8->ref_lx;
 int VAR_12 = VAR_4->cursor->cursor->y - VAR_8->ref_ly;

 if (VAR_8->h_con) {
  if (VAR_8->edge & VAR_1) {
   VAR_9 = (VAR_8->h_con_orig_width - VAR_11) - VAR_8->h_con->width;
  } else if (VAR_8->edge & VAR_2) {
   VAR_9 = (VAR_8->h_con_orig_width + VAR_11) - VAR_8->h_con->width;
  }
 }
 if (VAR_8->v_con) {
  if (VAR_8->edge & VAR_3) {
   VAR_10 = (VAR_8->v_con_orig_height - VAR_12) - VAR_8->v_con->height;
  } else if (VAR_8->edge & VAR_0) {
   VAR_10 = (VAR_8->v_con_orig_height + VAR_12) - VAR_8->v_con->height;
  }
 }

 if (VAR_9 != 0) {
  FUNC_0(VAR_8->h_con, VAR_8->edge_x, VAR_9);
 }
 if (VAR_10 != 0) {
  FUNC_0(VAR_8->v_con, VAR_8->edge_y, VAR_10);
 }
}
