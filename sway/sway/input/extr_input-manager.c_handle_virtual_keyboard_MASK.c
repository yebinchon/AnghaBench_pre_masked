
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int destroy; } ;
struct wlr_input_device {TYPE_1__ events; struct sway_input_device* data; } ;
struct wlr_virtual_keyboard_v1 {struct wlr_input_device input_device; } ;
struct wl_listener {int dummy; } ;
struct sway_seat {int dummy; } ;
struct sway_input_manager {int devices; } ;
struct TYPE_4__ {int notify; } ;
struct sway_input_device {TYPE_2__ device_destroy; int identifier; int link; struct wlr_input_device* wlr_device; } ;


 int VAR_0 ;
 struct sway_input_device* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct wlr_input_device*) ;
 struct sway_input_manager* VAR_2 ;
 struct sway_seat* FUNC_2 () ;
 int FUNC_3 (struct sway_seat*,struct sway_input_device*) ;
 int FUNC_4 (struct sway_input_device*,char*) ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_3 ;
 struct sway_input_manager* FUNC_6 (struct wl_listener*,int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,TYPE_2__*) ;

void FUNC_9(struct wl_listener *VAR_4, void *VAR_5) {
 struct sway_input_manager *VAR_6 =
  FUNC_6(VAR_4, VAR_6, VAR_3);
 struct wlr_virtual_keyboard_v1 *VAR_7 = VAR_5;
 struct wlr_input_device *VAR_8 = &VAR_7->input_device;

 struct sway_seat *VAR_9 = FUNC_2();


 struct sway_input_device *VAR_10 =
  FUNC_0(1, sizeof(struct sway_input_device));
 if (!FUNC_4(VAR_10, "could not allocate input device")) {
  return;
 }
 VAR_8->data = VAR_10;

 VAR_10->wlr_device = VAR_8;
 VAR_10->identifier = FUNC_1(VAR_8);
 FUNC_7(&VAR_6->devices, &VAR_10->link);

 FUNC_5(VAR_0, "adding virtual keyboard: '%s'",
  VAR_10->identifier);

 FUNC_8(&VAR_8->events.destroy, &VAR_10->device_destroy);
 VAR_10->device_destroy.notify = VAR_1;

 FUNC_3(VAR_9, VAR_10);
}
