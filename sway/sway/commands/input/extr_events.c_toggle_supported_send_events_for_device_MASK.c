
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wlr_input_device {int dummy; } ;
struct sway_input_device {struct wlr_input_device* wlr_device; } ;
struct libinput_device {int dummy; } ;
struct input_config {int send_events; } ;
typedef enum libinput_config_send_events_mode { ____Placeholder_libinput_config_send_events_mode } libinput_config_send_events_mode ;





 int FUNC_0 (struct libinput_device*) ;
 int FUNC_1 (struct libinput_device*) ;
 int FUNC_2 (struct wlr_input_device*) ;
 struct libinput_device* FUNC_3 (struct wlr_input_device*) ;

__attribute__((used)) static void FUNC_4(struct input_config *VAR_0,
  struct sway_input_device *VAR_1) {
 struct wlr_input_device *VAR_2 = VAR_1->wlr_device;
 if (!FUNC_2(VAR_2)) {
  return;
 }
 struct libinput_device *VAR_3 =
  FUNC_3(VAR_2);

 enum libinput_config_send_events_mode VAR_4 =
  FUNC_0(VAR_3);
 uint32_t VAR_5 =
  FUNC_1(VAR_3);

 switch (VAR_4) {
 case 128:
  VAR_4 = 129;
  if (VAR_5 & VAR_4) {
   break;
  }

 case 129:
  VAR_4 = 130;
  if (VAR_5 & VAR_4) {
   break;
  }

 case 130:
 default:
  VAR_4 = 128;
  break;
 }

 VAR_0->send_events = VAR_4;
}
