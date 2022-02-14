
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_event_pointer_motion {int unaccel_dy; int unaccel_dx; int delta_y; int delta_x; int device; int time_msec; } ;
struct wl_listener {int dummy; } ;
struct sway_cursor {int dummy; } ;


 struct sway_cursor* VAR_0 ;
 int FUNC_0 (struct sway_cursor*,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct sway_cursor* FUNC_2 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_3(
  struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_cursor *VAR_4 = FUNC_2(VAR_2, VAR_4, VAR_1);
 struct wlr_event_pointer_motion *VAR_5 = VAR_3;

 FUNC_0(VAR_4, VAR_5->time_msec, VAR_5->device, VAR_5->delta_x, VAR_5->delta_y,
   VAR_5->unaccel_dx, VAR_5->unaccel_dy);
 FUNC_1();
}
