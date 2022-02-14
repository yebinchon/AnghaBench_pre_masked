
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_event_tablet_tool_axis {int updated_axes; int wheel_delta; int slider; int rotation; int tilt_y; int tilt_x; int distance; int pressure; int time_msec; int dy; int dx; int y; int x; TYPE_3__* tool; } ;
struct wl_listener {int dummy; } ;
struct sway_tablet_tool {int tablet_v2_tool; int tilt_y; int tilt_x; int tablet; } ;
struct sway_cursor {TYPE_1__* seat; } ;
struct TYPE_6__ {struct sway_tablet_tool* data; } ;
struct TYPE_5__ {int idle; } ;
struct TYPE_4__ {int wlr_seat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sway_cursor* VAR_10 ;
 int FUNC_0 (struct sway_cursor*,int ,TYPE_3__*,int,int,int ,int ,int ,int ,int ) ;
 TYPE_2__ VAR_11 ;
 int FUNC_1 (int ,char*) ;
 int VAR_12 ;
 struct sway_cursor* FUNC_2 (struct wl_listener*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct wl_listener *VAR_13, void *VAR_14) {
 struct sway_cursor *VAR_15 = FUNC_2(VAR_13, VAR_15, VAR_12);
 FUNC_3(VAR_11.idle, VAR_15->seat->wlr_seat);
 struct wlr_event_tablet_tool_axis *VAR_16 = VAR_14;
 struct sway_tablet_tool *VAR_17 = VAR_16->tool->data;

 if (!VAR_17) {
  FUNC_1(VAR_0, "tool axis before proximity");
  return;
 }

 FUNC_0(VAR_15, VAR_17->tablet, VAR_16->tool,
  VAR_16->updated_axes & VAR_8,
  VAR_16->updated_axes & VAR_9,
  VAR_16->x, VAR_16->y, VAR_16->dx, VAR_16->dy, VAR_16->time_msec);

 if (VAR_16->updated_axes & VAR_2) {
  FUNC_5(
   VAR_17->tablet_v2_tool, VAR_16->pressure);
 }

 if (VAR_16->updated_axes & VAR_1) {
  FUNC_4(
   VAR_17->tablet_v2_tool, VAR_16->distance);
 }

 if (VAR_16->updated_axes & VAR_5) {
  VAR_17->tilt_x = VAR_16->tilt_x;
 }

 if (VAR_16->updated_axes & VAR_6) {
  VAR_17->tilt_y = VAR_16->tilt_y;
 }

 if (VAR_16->updated_axes & (VAR_5 | VAR_6)) {
  FUNC_8(
   VAR_17->tablet_v2_tool,
   VAR_17->tilt_x, VAR_17->tilt_y);
 }

 if (VAR_16->updated_axes & VAR_3) {
  FUNC_6(
   VAR_17->tablet_v2_tool, VAR_16->rotation);
 }

 if (VAR_16->updated_axes & VAR_4) {
  FUNC_7(
   VAR_17->tablet_v2_tool, VAR_16->slider);
 }

 if (VAR_16->updated_axes & VAR_7) {
  FUNC_9(
   VAR_17->tablet_v2_tool, VAR_16->wheel_delta, 0);
 }
}
