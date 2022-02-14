
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_tablet_tool {struct sway_tablet_tool* data; } ;
struct wlr_event_tablet_tool_proximity {scalar_t__ state; int time_msec; int y; int x; struct wlr_tablet_tool* tool; int device; } ;
struct wl_listener {int dummy; } ;
struct sway_tablet_tool {int tablet; int tablet_v2_tool; } ;
struct sway_tablet {int dummy; } ;
struct sway_cursor {TYPE_1__* seat; } ;
struct TYPE_4__ {int idle; } ;
struct TYPE_3__ {int wlr_seat; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sway_cursor* VAR_2 ;
 struct sway_tablet* FUNC_0 (struct sway_cursor*,int ) ;
 int FUNC_1 (struct sway_cursor*,int ,struct wlr_tablet_tool*,int,int,int ,int ,int ,int ,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sway_tablet*,struct wlr_tablet_tool*) ;
 int VAR_4 ;
 struct sway_cursor* FUNC_4 (struct wl_listener*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct wl_listener *VAR_5, void *VAR_6) {
 struct sway_cursor *VAR_7 = FUNC_4(VAR_5, VAR_7, VAR_4);
 FUNC_5(VAR_3.idle, VAR_7->seat->wlr_seat);
 struct wlr_event_tablet_tool_proximity *VAR_8 = VAR_6;

 struct wlr_tablet_tool *VAR_9 = VAR_8->tool;
 if (!VAR_9->data) {
  struct sway_tablet *VAR_10 = FUNC_0(VAR_7, VAR_8->device);
  if (!VAR_10) {
   FUNC_2(VAR_0, "no tablet for tablet tool");
   return;
  }
  FUNC_3(VAR_10, VAR_9);
 }

 struct sway_tablet_tool *VAR_11 = VAR_9->data;
 if (!VAR_11) {
  FUNC_2(VAR_0, "tablet tool not initialized");
  return;
 }

 if (VAR_8->state == VAR_1) {
  FUNC_6(VAR_11->tablet_v2_tool);
  return;
 }

 FUNC_1(VAR_7, VAR_11->tablet, VAR_8->tool,
  1, 1, VAR_8->x, VAR_8->y, 0, 0, VAR_8->time_msec);
}
