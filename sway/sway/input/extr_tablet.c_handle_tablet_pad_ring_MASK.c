
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_event_tablet_pad_ring {scalar_t__ source; int time_msec; int position; int ring; } ;
struct wl_listener {int dummy; } ;
struct sway_tablet_pad {int tablet_v2_pad; int current_surface; } ;


 scalar_t__ VAR_0 ;
 struct sway_tablet_pad* VAR_1 ;
 int VAR_2 ;
 struct sway_tablet_pad* FUNC_0 (struct wl_listener*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_tablet_pad *VAR_5 = FUNC_0(VAR_3, VAR_5, VAR_2);
 struct wlr_event_tablet_pad_ring *VAR_6 = VAR_4;

 if (!VAR_5->current_surface) {
  return;
 }

 FUNC_1(VAR_5->tablet_v2_pad,
  VAR_6->ring, VAR_6->position,
  VAR_6->source == VAR_0,
  VAR_6->time_msec);
}
