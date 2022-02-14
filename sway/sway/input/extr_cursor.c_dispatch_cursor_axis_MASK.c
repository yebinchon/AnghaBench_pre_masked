
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_event_pointer_axis {int dummy; } ;
struct sway_cursor {int seat; } ;


 int FUNC_0 (int ,struct wlr_event_pointer_axis*) ;

void FUNC_1(struct sway_cursor *VAR_0,
  struct wlr_event_pointer_axis *VAR_1) {
 FUNC_0(VAR_0->seat, VAR_1);
}
