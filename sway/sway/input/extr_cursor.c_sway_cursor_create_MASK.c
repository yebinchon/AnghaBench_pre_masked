
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int link; } ;
struct TYPE_14__ {int notify; } ;
struct TYPE_10__ {int tablet_tool_button; int tablet_tool_proximity; int tablet_tool_tip; int tablet_tool_axis; int touch_motion; int touch_up; int touch_down; int frame; int axis; int button; int motion_absolute; int motion; } ;
struct TYPE_9__ {int y; int x; } ;
struct wlr_cursor {struct wlr_cursor* cursor; int tablet_pads; int tablets; TYPE_5__ constraint_commit; TYPE_6__ request_set_cursor; TYPE_6__ tool_button; TYPE_2__ events; TYPE_6__ tool_proximity; TYPE_6__ tool_tip; TYPE_6__ tool_axis; TYPE_6__ touch_motion; TYPE_6__ touch_up; TYPE_6__ touch_down; TYPE_6__ frame; TYPE_6__ axis; TYPE_6__ button; TYPE_6__ motion_absolute; TYPE_6__ motion; int hide_source; struct sway_seat* seat; int y; TYPE_1__ previous; int x; } ;
struct sway_seat {TYPE_4__* wlr_seat; } ;
struct sway_cursor {struct sway_cursor* cursor; int tablet_pads; int tablets; TYPE_5__ constraint_commit; TYPE_6__ request_set_cursor; TYPE_6__ tool_button; TYPE_2__ events; TYPE_6__ tool_proximity; TYPE_6__ tool_tip; TYPE_6__ tool_axis; TYPE_6__ touch_motion; TYPE_6__ touch_up; TYPE_6__ touch_down; TYPE_6__ frame; TYPE_6__ axis; TYPE_6__ button; TYPE_6__ motion_absolute; TYPE_6__ motion; int hide_source; struct sway_seat* seat; int y; TYPE_1__ previous; int x; } ;
struct TYPE_16__ {int output_layout; } ;
struct TYPE_15__ {int wl_event_loop; } ;
struct TYPE_11__ {int request_set_cursor; } ;
struct TYPE_12__ {TYPE_3__ events; } ;


 struct wlr_cursor* FUNC_0 (int,int) ;
 int FUNC_1 (struct wlr_cursor*) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_8__* VAR_14 ;
 TYPE_7__ VAR_15 ;
 int FUNC_2 (struct wlr_cursor*,char*) ;
 int FUNC_3 (int ,int ,struct wlr_cursor*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_6__*) ;
 int FUNC_6 (struct wlr_cursor*,int ) ;
 struct wlr_cursor* FUNC_7 () ;

struct sway_cursor *FUNC_8(struct sway_seat *VAR_16) {
 struct sway_cursor *VAR_17 = FUNC_0(1, sizeof(struct sway_cursor));
 if (!FUNC_2(VAR_17, "could not allocate sway cursor")) {
  return ((void*)0);
 }

 struct wlr_cursor *VAR_18 = FUNC_7();
 if (!FUNC_2(VAR_18, "could not allocate wlr cursor")) {
  FUNC_1(VAR_17);
  return ((void*)0);
 }

 VAR_17->previous.x = VAR_18->x;
 VAR_17->previous.y = VAR_18->y;

 VAR_17->seat = VAR_16;
 FUNC_6(VAR_18, VAR_14->output_layout);

 VAR_17->hide_source = FUNC_3(VAR_15.wl_event_loop,
   VAR_13, VAR_17);


 FUNC_5(&VAR_18->events.motion, &VAR_17->motion);
 VAR_17->motion.notify = VAR_4;

 FUNC_5(&VAR_18->events.motion_absolute,
  &VAR_17->motion_absolute);
 VAR_17->motion_absolute.notify = VAR_3;

 FUNC_5(&VAR_18->events.button, &VAR_17->button);
 VAR_17->button.notify = VAR_1;

 FUNC_5(&VAR_18->events.axis, &VAR_17->axis);
 VAR_17->axis.notify = VAR_0;

 FUNC_5(&VAR_18->events.frame, &VAR_17->frame);
 VAR_17->frame.notify = VAR_2;

 FUNC_5(&VAR_18->events.touch_down, &VAR_17->touch_down);
 VAR_17->touch_down.notify = VAR_10;

 FUNC_5(&VAR_18->events.touch_up, &VAR_17->touch_up);
 VAR_17->touch_up.notify = VAR_12;

 FUNC_5(&VAR_18->events.touch_motion,
  &VAR_17->touch_motion);
 VAR_17->touch_motion.notify = VAR_11;

 FUNC_5(&VAR_18->events.tablet_tool_axis,
  &VAR_17->tool_axis);
 VAR_17->tool_axis.notify = VAR_6;

 FUNC_5(&VAR_18->events.tablet_tool_tip, &VAR_17->tool_tip);
 VAR_17->tool_tip.notify = VAR_9;

 FUNC_5(&VAR_18->events.tablet_tool_proximity, &VAR_17->tool_proximity);
 VAR_17->tool_proximity.notify = VAR_8;

 FUNC_5(&VAR_18->events.tablet_tool_button, &VAR_17->tool_button);
 VAR_17->tool_button.notify = VAR_7;

 FUNC_5(&VAR_16->wlr_seat->events.request_set_cursor,
   &VAR_17->request_set_cursor);
 VAR_17->request_set_cursor.notify = VAR_5;

 FUNC_4(&VAR_17->constraint_commit.link);
 FUNC_4(&VAR_17->tablets);
 FUNC_4(&VAR_17->tablet_pads);

 VAR_17->cursor = VAR_18;

 return VAR_17;
}
