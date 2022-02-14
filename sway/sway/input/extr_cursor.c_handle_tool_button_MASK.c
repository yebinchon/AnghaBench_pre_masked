
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
struct wlr_event_tablet_tool_button {int state; scalar_t__ button; int time_msec; int device; TYPE_1__* tool; } ;
struct wl_listener {int dummy; } ;
struct sway_tablet_tool {int tablet_v2_tool; TYPE_2__* tablet; } ;
struct sway_seat {int wlr_seat; } ;
struct sway_cursor {int tool_buttons; struct sway_seat* seat; TYPE_3__* cursor; } ;
typedef enum zwp_tablet_pad_v2_button_state { ____Placeholder_zwp_tablet_pad_v2_button_state } zwp_tablet_pad_v2_button_state ;
struct TYPE_8__ {int idle; } ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_6__ {struct wlr_tablet_v2_tablet* tablet_v2; } ;
struct TYPE_5__ {struct sway_tablet_tool* data; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct sway_cursor* VAR_2 ;
 int FUNC_0 (struct sway_cursor*,int ,int ,int ,int) ;
 int FUNC_1 (struct sway_seat*,int ,int ,struct wlr_surface**,double*,double*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int VAR_4 ;
 int FUNC_3 () ;
 struct sway_cursor* FUNC_4 (struct wl_listener*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct wlr_tablet_v2_tablet*,struct wlr_surface*) ;
 int FUNC_8 (int ,int,int) ;

__attribute__((used)) static void FUNC_9(struct wl_listener *VAR_5, void *VAR_6) {
 struct sway_cursor *VAR_7 = FUNC_4(VAR_5, VAR_7, VAR_4);
 FUNC_5(VAR_3.idle, VAR_7->seat->wlr_seat);
 struct wlr_event_tablet_tool_button *VAR_8 = VAR_6;
 struct sway_tablet_tool *VAR_9 = VAR_8->tool->data;
 struct wlr_tablet_v2_tablet *VAR_10 = VAR_9->tablet->tablet_v2;
 struct sway_seat *VAR_11 = VAR_7->seat;

 if (!VAR_9) {
  FUNC_2(VAR_1, "tool button before proximity");
  return;
 }

 double VAR_12, VAR_13;
 struct wlr_surface *VAR_14 = ((void*)0);

 FUNC_1(VAR_11, VAR_7->cursor->x, VAR_7->cursor->y,
  &VAR_14, &VAR_12, &VAR_13);

 if (!VAR_14 || !FUNC_7(VAR_10, VAR_14)) {


  switch (VAR_8->state) {
  case 129:
   if (VAR_7->tool_buttons == 0) {
    FUNC_0(VAR_7, VAR_8->device,
      VAR_8->time_msec, VAR_0, VAR_8->state);
   }
   VAR_7->tool_buttons++;
   break;
  case 128:
   if (VAR_7->tool_buttons == 1) {
    FUNC_0(VAR_7, VAR_8->device,
      VAR_8->time_msec, VAR_0, VAR_8->state);
   }
   VAR_7->tool_buttons--;
   break;
  }
  FUNC_6(VAR_7->seat->wlr_seat);
  FUNC_3();
  return;
 }

 FUNC_8(VAR_9->tablet_v2_tool,
  (enum zwp_tablet_pad_v2_button_state)VAR_8->button,
  (enum zwp_tablet_pad_v2_button_state)VAR_8->state);
}
