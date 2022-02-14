
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_surface {int dummy; } ;
struct wlr_seat {int dummy; } ;
struct wlr_event_touch_down {int touch_id; int time_msec; int y; int x; int device; } ;
struct wl_listener {int dummy; } ;
struct sway_seat {double touch_x; double touch_y; int touch_id; struct wlr_seat* wlr_seat; } ;
struct sway_cursor {int cursor; struct sway_seat* seat; } ;
struct TYPE_2__ {int idle; } ;


 struct sway_cursor* VAR_0 ;
 int FUNC_0 (struct sway_cursor*) ;
 int FUNC_1 (struct sway_seat*,double,double,struct wlr_surface**,double*,double*) ;
 scalar_t__ FUNC_2 (struct sway_seat*,struct wlr_surface*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 struct sway_cursor* FUNC_3 (struct wl_listener*,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,double*,double*) ;
 int FUNC_5 (int ,struct wlr_seat*) ;
 int FUNC_6 (struct wlr_seat*,struct wlr_surface*,int ,int ,double,double) ;

__attribute__((used)) static void FUNC_7(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_cursor *VAR_5 = FUNC_3(VAR_3, VAR_5, VAR_2);
 FUNC_5(VAR_1.idle, VAR_5->seat->wlr_seat);
 struct wlr_event_touch_down *VAR_6 = VAR_4;

 struct sway_seat *VAR_7 = VAR_5->seat;
 struct wlr_seat *VAR_8 = VAR_7->wlr_seat;
 struct wlr_surface *VAR_9 = ((void*)0);

 double VAR_10, VAR_11;
 FUNC_4(VAR_5->cursor, VAR_6->device,
   VAR_6->x, VAR_6->y, &VAR_10, &VAR_11);
 double VAR_12, VAR_13;
 FUNC_1(VAR_7, VAR_10, VAR_11, &VAR_9, &VAR_12, &VAR_13);

 VAR_7->touch_id = VAR_6->touch_id;
 VAR_7->touch_x = VAR_10;
 VAR_7->touch_y = VAR_11;

 if (!VAR_9) {
  return;
 }


 if (FUNC_2(VAR_7, VAR_9)) {
  FUNC_6(VAR_8, VAR_9, VAR_6->time_msec,
    VAR_6->touch_id, VAR_12, VAR_13);
  FUNC_0(VAR_5);
 }
}
