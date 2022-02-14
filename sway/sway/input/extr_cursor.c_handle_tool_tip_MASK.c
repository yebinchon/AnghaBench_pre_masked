
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_tablet_v2_tablet {int dummy; } ;
struct wlr_surface {int dummy; } ;
struct wlr_event_tablet_tool_tip {scalar_t__ state; int time_msec; int device; TYPE_1__* tool; } ;
struct wl_listener {int dummy; } ;
struct sway_tablet_tool {int tablet_v2_tool; TYPE_2__* tablet; } ;
struct sway_seat {int wlr_seat; } ;
struct sway_cursor {struct sway_seat* seat; TYPE_3__* cursor; } ;
struct TYPE_8__ {int idle; } ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_6__ {struct wlr_tablet_v2_tablet* tablet_v2; } ;
struct TYPE_5__ {struct sway_tablet_tool* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sway_cursor* VAR_4 ;
 int FUNC_0 (struct sway_cursor*,int ,int ,int ,int ) ;
 int FUNC_1 (struct sway_seat*,int ,int ,struct wlr_surface**,double*,double*) ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 struct sway_cursor* FUNC_3 (struct wl_listener*,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wlr_tablet_v2_tablet*,struct wlr_surface*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct wl_listener *VAR_7, void *VAR_8) {
 struct sway_cursor *VAR_9 = FUNC_3(VAR_7, VAR_9, VAR_6);
 FUNC_4(VAR_5.idle, VAR_9->seat->wlr_seat);
 struct wlr_event_tablet_tool_tip *VAR_10 = VAR_8;
 struct sway_tablet_tool *VAR_11 = VAR_10->tool->data;
 struct wlr_tablet_v2_tablet *VAR_12 = VAR_11->tablet->tablet_v2;
 struct sway_seat *VAR_13 = VAR_9->seat;

 double VAR_14, VAR_15;
 struct wlr_surface *VAR_16 = ((void*)0);
 FUNC_1(VAR_13, VAR_9->cursor->x, VAR_9->cursor->y,
  &VAR_16, &VAR_14, &VAR_15);

 if (!VAR_16 || !FUNC_6(VAR_12, VAR_16)) {
  FUNC_0(VAR_9, VAR_10->device, VAR_10->time_msec,
    VAR_0, VAR_10->state == VAR_3 ?
     VAR_1 : VAR_2);
  FUNC_5(VAR_9->seat->wlr_seat);
  FUNC_2();
  return;
 }

 if (VAR_10->state == VAR_3) {
  FUNC_8(VAR_11->tablet_v2_tool);
  FUNC_7(VAR_11->tablet_v2_tool);
 } else {
  FUNC_9(VAR_11->tablet_v2_tool);
 }
}
