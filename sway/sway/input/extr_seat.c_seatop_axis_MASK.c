
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_event_pointer_axis {int dummy; } ;
struct sway_seat {TYPE_1__* seatop_impl; } ;
struct TYPE_2__ {int (* axis ) (struct sway_seat*,struct wlr_event_pointer_axis*) ;} ;


 int FUNC_0 (struct sway_seat*,struct wlr_event_pointer_axis*) ;

void FUNC_1(struct sway_seat *VAR_0, struct wlr_event_pointer_axis *VAR_1) {
 if (VAR_0->seatop_impl->axis) {
  VAR_0->seatop_impl->axis(VAR_0, VAR_1);
 }
}
