
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_event_pointer_axis {float delta; float delta_discrete; int source; int orientation; int time_msec; TYPE_1__* device; } ;
struct sway_seat {int wlr_seat; } ;
struct sway_input_device {int dummy; } ;
struct input_config {float scroll_factor; } ;
struct TYPE_2__ {struct sway_input_device* data; } ;


 float VAR_0 ;
 struct input_config* FUNC_0 (struct sway_input_device*) ;
 int FUNC_1 (float) ;
 int FUNC_2 (int ,int ,int ,float,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sway_seat *VAR_1,
  struct wlr_event_pointer_axis *VAR_2) {
 struct sway_input_device *VAR_3 =
  VAR_2->device ? VAR_2->device->data : ((void*)0);
 struct input_config *VAR_4 =
  VAR_3 ? FUNC_0(VAR_3) : ((void*)0);
 float VAR_5 =
  (VAR_4 == ((void*)0) || VAR_4->scroll_factor == VAR_0) ? 1.0f : VAR_4->scroll_factor;

 FUNC_2(VAR_1->wlr_seat, VAR_2->time_msec,
  VAR_2->orientation, VAR_5 * VAR_2->delta,
  FUNC_1(VAR_5 * VAR_2->delta_discrete), VAR_2->source);
}
