
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_touch_point {int dummy; } ;
struct wlr_drag_icon {TYPE_2__* drag; } ;
struct wlr_cursor {int y; int x; } ;
struct sway_seat {int touch_y; int touch_x; int wlr_seat; TYPE_1__* cursor; } ;
struct sway_drag_icon {int y; int x; struct sway_seat* seat; struct wlr_drag_icon* wlr_drag_icon; } ;
struct TYPE_4__ {int grab_type; int touch_id; } ;
struct TYPE_3__ {struct wlr_cursor* cursor; } ;





 int FUNC_0 (struct sway_drag_icon*) ;
 struct wlr_touch_point* FUNC_1 (int ,int ) ;

void FUNC_2(struct sway_drag_icon *VAR_0) {
 FUNC_0(VAR_0);

 struct wlr_drag_icon *VAR_1 = VAR_0->wlr_drag_icon;
 struct sway_seat *VAR_2 = VAR_0->seat;
 struct wlr_cursor *VAR_3 = VAR_2->cursor->cursor;
 switch (VAR_1->drag->grab_type) {
 case 130:
  return;
 case 129:
  VAR_0->x = VAR_3->x;
  VAR_0->y = VAR_3->y;
  break;
 case 128:;
  struct wlr_touch_point *VAR_4 =
   FUNC_1(VAR_2->wlr_seat, VAR_1->drag->touch_id);
  if (VAR_4 == ((void*)0)) {
   return;
  }
  VAR_0->x = VAR_2->touch_x;
  VAR_0->y = VAR_2->touch_y;
 }

 FUNC_0(VAR_0);
}
