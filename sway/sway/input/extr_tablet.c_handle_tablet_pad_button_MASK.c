
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_event_tablet_pad_button {scalar_t__ state; int time_msec; int button; int mode; int group; } ;
struct wl_listener {int dummy; } ;
struct sway_tablet_pad {int tablet_v2_pad; int current_surface; } ;
typedef enum zwp_tablet_pad_v2_button_state { ____Placeholder_zwp_tablet_pad_v2_button_state } zwp_tablet_pad_v2_button_state ;


 int VAR_0 ;
 struct sway_tablet_pad* VAR_1 ;
 struct sway_tablet_pad* FUNC_0 (struct wl_listener*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_tablet_pad *VAR_4 = FUNC_0(VAR_2, VAR_4, VAR_0);
 struct wlr_event_tablet_pad_button *VAR_5 = VAR_3;

 if (!VAR_4->current_surface) {
  return;
 }

 FUNC_2(VAR_4->tablet_v2_pad,
  VAR_5->group, VAR_5->mode, VAR_5->time_msec);

 FUNC_1(VAR_4->tablet_v2_pad,
  VAR_5->button, VAR_5->time_msec,
  (enum zwp_tablet_pad_v2_button_state)VAR_5->state);
}
