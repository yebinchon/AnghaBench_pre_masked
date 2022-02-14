
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wlr_input_device {TYPE_4__* switch_device; } ;
struct TYPE_10__ {int notify; int link; } ;
struct sway_switch {TYPE_5__ switch_toggle; TYPE_2__* seat_device; } ;
struct TYPE_8__ {int toggle; } ;
struct TYPE_9__ {TYPE_3__ events; } ;
struct TYPE_7__ {TYPE_1__* input_device; } ;
struct TYPE_6__ {struct wlr_input_device* wlr_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_5__*) ;

void FUNC_3(struct sway_switch *VAR_2) {
 struct wlr_input_device *VAR_3 =
  VAR_2->seat_device->input_device->wlr_device;
 FUNC_1(&VAR_2->switch_toggle.link);
 FUNC_2(&VAR_3->switch_device->events.toggle,
   &VAR_2->switch_toggle);
 VAR_2->switch_toggle.notify = VAR_1;
 FUNC_0(VAR_0, "Configured switch for device");
}
