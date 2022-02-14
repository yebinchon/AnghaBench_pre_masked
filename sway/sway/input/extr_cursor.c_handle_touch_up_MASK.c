
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_seat {int dummy; } ;
struct wlr_event_touch_up {int touch_id; int time_msec; } ;
struct wl_listener {int dummy; } ;
struct sway_cursor {TYPE_1__* seat; } ;
struct TYPE_4__ {int idle; } ;
struct TYPE_3__ {struct wlr_seat* wlr_seat; } ;


 struct sway_cursor* VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 struct sway_cursor* FUNC_0 (struct wl_listener*,int ,int ) ;
 int FUNC_1 (int ,struct wlr_seat*) ;
 int FUNC_2 (struct wlr_seat*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_cursor *VAR_5 = FUNC_0(VAR_3, VAR_5, VAR_2);
 FUNC_1(VAR_1.idle, VAR_5->seat->wlr_seat);
 struct wlr_event_touch_up *VAR_6 = VAR_4;
 struct wlr_seat *VAR_7 = VAR_5->seat->wlr_seat;

 FUNC_2(VAR_7, VAR_6->time_msec, VAR_6->touch_id);
}
