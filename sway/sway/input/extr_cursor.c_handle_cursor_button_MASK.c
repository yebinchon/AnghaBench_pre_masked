
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_event_pointer_button {scalar_t__ state; int button; int time_msec; int device; } ;
struct wl_listener {int dummy; } ;
struct sway_cursor {scalar_t__ pressed_button_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sway_cursor* VAR_3 ;
 int FUNC_0 (struct sway_cursor*) ;
 int FUNC_1 (struct sway_cursor*,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 struct sway_cursor* FUNC_4 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct wl_listener *VAR_4, void *VAR_5) {
 struct sway_cursor *VAR_6 = FUNC_4(VAR_4, VAR_6, VAR_2);
 struct wlr_event_pointer_button *VAR_7 = VAR_5;

 if (VAR_7->state == VAR_1) {
  VAR_6->pressed_button_count++;
 } else {
  if (VAR_6->pressed_button_count > 0) {
   VAR_6->pressed_button_count--;
  } else {
   FUNC_2(VAR_0, "Pressed button count was wrong");
  }
 }

 FUNC_0(VAR_6);
 FUNC_1(VAR_6, VAR_7->device,
   VAR_7->time_msec, VAR_7->button, VAR_7->state);
 FUNC_3();
}
