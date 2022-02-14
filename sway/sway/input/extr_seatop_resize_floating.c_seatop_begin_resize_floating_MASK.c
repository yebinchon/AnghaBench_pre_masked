
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_keyboard {int dummy; } ;
struct sway_seat {int wlr_seat; TYPE_2__* cursor; struct seatop_resize_floating_event* seatop_data; int * seatop_impl; } ;
struct sway_container {int height; int width; int y; int x; } ;
struct seatop_resize_floating_event {int edge; int ref_height; int ref_width; int ref_con_ly; int ref_con_lx; int ref_ly; int ref_lx; int preserve_ratio; struct sway_container* con; } ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;
struct TYPE_4__ {TYPE_1__* cursor; } ;
struct TYPE_3__ {int y; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct seatop_resize_floating_event* FUNC_0 (int,int) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (TYPE_2__*,char const*,int *) ;
 int FUNC_3 (struct sway_seat*) ;
 int VAR_4 ;
 int FUNC_4 (struct wlr_keyboard*) ;
 struct wlr_keyboard* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int) ;

void FUNC_8(struct sway_seat *VAR_5,
  struct sway_container *VAR_6, enum wlr_edges VAR_7) {
 FUNC_3(VAR_5);

 struct seatop_resize_floating_event *VAR_8 =
  FUNC_0(1, sizeof(struct seatop_resize_floating_event));
 if (!VAR_8) {
  return;
 }
 VAR_8->con = VAR_6;

 struct wlr_keyboard *VAR_9 = FUNC_5(VAR_5->wlr_seat);
 VAR_8->preserve_ratio = VAR_9 &&
  (FUNC_4(VAR_9) & VAR_3);

 VAR_8->edge = VAR_7 == VAR_1 ? VAR_0 | VAR_2 : VAR_7;
 VAR_8->ref_lx = VAR_5->cursor->cursor->x;
 VAR_8->ref_ly = VAR_5->cursor->cursor->y;
 VAR_8->ref_con_lx = VAR_6->x;
 VAR_8->ref_con_ly = VAR_6->y;
 VAR_8->ref_width = VAR_6->width;
 VAR_8->ref_height = VAR_6->height;

 VAR_5->seatop_impl = &VAR_4;
 VAR_5->seatop_data = VAR_8;

 FUNC_1(VAR_6);

 const char *VAR_10 = VAR_7 == VAR_1 ?
  "se-resize" : FUNC_7(VAR_7);
 FUNC_2(VAR_5->cursor, VAR_10, ((void*)0));
 FUNC_6(VAR_5->wlr_seat);
}
