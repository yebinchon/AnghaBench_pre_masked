
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libinput_device {int dummy; } ;
struct input_config {scalar_t__ send_events; scalar_t__ tap; scalar_t__ tap_button_map; scalar_t__ drag; scalar_t__ drag_lock; scalar_t__ pointer_accel; scalar_t__ accel_profile; scalar_t__ natural_scroll; scalar_t__ left_handed; scalar_t__ click_method; scalar_t__ middle_emulation; scalar_t__ scroll_method; scalar_t__ scroll_button; scalar_t__ dwt; int identifier; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct libinput_device*,scalar_t__) ;
 int FUNC_1 (struct libinput_device*,scalar_t__) ;
 int FUNC_2 (struct libinput_device*,scalar_t__) ;
 int FUNC_3 (struct libinput_device*,scalar_t__) ;
 int FUNC_4 (struct libinput_device*,scalar_t__) ;
 int FUNC_5 (struct libinput_device*,scalar_t__) ;
 int FUNC_6 (struct libinput_device*,scalar_t__) ;
 int FUNC_7 (struct libinput_device*,scalar_t__) ;
 int FUNC_8 (struct libinput_device*,scalar_t__) ;
 int FUNC_9 (struct libinput_device*,scalar_t__) ;
 int FUNC_10 (struct libinput_device*,scalar_t__) ;
 int FUNC_11 (struct libinput_device*,scalar_t__) ;
 int FUNC_12 (struct libinput_device*,scalar_t__) ;
 int FUNC_13 (struct libinput_device*,scalar_t__) ;
 int FUNC_14 (int ,char*,int ,char const*) ;

__attribute__((used)) static bool FUNC_15(struct libinput_device *VAR_3,
  struct input_config *VAR_4, const char *VAR_5) {
 FUNC_14(VAR_2, "config_libinput_pointer('%s' on  '%s')",
   VAR_4->identifier, VAR_5);
 bool VAR_6 = 0;
 if (VAR_4->send_events != VAR_1) {
  VAR_6 |= FUNC_9(VAR_3, VAR_4->send_events);
 }
 if (VAR_4->tap != VAR_1) {
  VAR_6 |= FUNC_10(VAR_3, VAR_4->tap);
 }
 if (VAR_4->tap_button_map != VAR_1) {
  VAR_6 |= FUNC_11(VAR_3, VAR_4->tap_button_map);
 }
 if (VAR_4->drag != VAR_1) {
  VAR_6 |= FUNC_12(VAR_3, VAR_4->drag);
 }
 if (VAR_4->drag_lock != VAR_1) {
  VAR_6 |= FUNC_13(VAR_3, VAR_4->drag_lock);
 }

 if (VAR_4->pointer_accel != VAR_0) {
  VAR_6 |= FUNC_1(VAR_3, VAR_4->pointer_accel);
 }
 if (VAR_4->accel_profile != VAR_1) {
  VAR_6 |= FUNC_0(VAR_3, VAR_4->accel_profile);
 }
 if (VAR_4->natural_scroll != VAR_1) {
  VAR_6 |= FUNC_6(VAR_3, VAR_4->natural_scroll);
 }
 if (VAR_4->left_handed != VAR_1) {
  VAR_6 |= FUNC_4(VAR_3, VAR_4->left_handed);
 }
 if (VAR_4->click_method != VAR_1) {
  VAR_6 |= FUNC_2(VAR_3, VAR_4->click_method);
 }
 if (VAR_4->middle_emulation != VAR_1) {
  VAR_6 |= FUNC_5(VAR_3, VAR_4->middle_emulation);
 }
 if (VAR_4->scroll_method != VAR_1) {
  VAR_6 |= FUNC_8(VAR_3, VAR_4->scroll_method);
 }
 if (VAR_4->scroll_button != VAR_1) {
  VAR_6 |= FUNC_7(VAR_3, VAR_4->scroll_button);
 }
 if (VAR_4->dwt != VAR_1) {
  VAR_6 |= FUNC_3(VAR_3, VAR_4->dwt);
 }
 return VAR_6;
}
