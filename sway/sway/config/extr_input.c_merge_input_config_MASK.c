
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_box {int dummy; } ;
struct input_config_mapped_from_region {int dummy; } ;
struct TYPE_2__ {int * matrix; scalar_t__ configured; } ;
struct input_config {scalar_t__ accel_profile; scalar_t__ click_method; scalar_t__ drag; scalar_t__ drag_lock; scalar_t__ dwt; scalar_t__ left_handed; scalar_t__ middle_emulation; scalar_t__ natural_scroll; scalar_t__ pointer_accel; scalar_t__ scroll_factor; scalar_t__ repeat_delay; scalar_t__ repeat_rate; scalar_t__ scroll_method; scalar_t__ scroll_button; scalar_t__ send_events; scalar_t__ tap; scalar_t__ tap_button_map; scalar_t__ xkb_numlock; scalar_t__ xkb_capslock; TYPE_1__ calibration_matrix; int * mapped_to_region; int * mapped_to_output; scalar_t__ mapped_to; int * mapped_from_region; int * xkb_variant; int * xkb_rules; int * xkb_options; int * xkb_model; int * xkb_layout; int * xkb_file; scalar_t__ xkb_file_is_set; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (int *) ;

void FUNC_4(struct input_config *VAR_2, struct input_config *VAR_3) {
 if (VAR_3->accel_profile != VAR_1) {
  VAR_2->accel_profile = VAR_3->accel_profile;
 }
 if (VAR_3->click_method != VAR_1) {
  VAR_2->click_method = VAR_3->click_method;
 }
 if (VAR_3->drag != VAR_1) {
  VAR_2->drag = VAR_3->drag;
 }
 if (VAR_3->drag_lock != VAR_1) {
  VAR_2->drag_lock = VAR_3->drag_lock;
 }
 if (VAR_3->dwt != VAR_1) {
  VAR_2->dwt = VAR_3->dwt;
 }
 if (VAR_3->left_handed != VAR_1) {
  VAR_2->left_handed = VAR_3->left_handed;
 }
 if (VAR_3->middle_emulation != VAR_1) {
  VAR_2->middle_emulation = VAR_3->middle_emulation;
 }
 if (VAR_3->natural_scroll != VAR_1) {
  VAR_2->natural_scroll = VAR_3->natural_scroll;
 }
 if (VAR_3->pointer_accel != VAR_0) {
  VAR_2->pointer_accel = VAR_3->pointer_accel;
 }
 if (VAR_3->scroll_factor != VAR_0) {
  VAR_2->scroll_factor = VAR_3->scroll_factor;
 }
 if (VAR_3->repeat_delay != VAR_1) {
  VAR_2->repeat_delay = VAR_3->repeat_delay;
 }
 if (VAR_3->repeat_rate != VAR_1) {
  VAR_2->repeat_rate = VAR_3->repeat_rate;
 }
 if (VAR_3->scroll_method != VAR_1) {
  VAR_2->scroll_method = VAR_3->scroll_method;
 }
 if (VAR_3->scroll_button != VAR_1) {
  VAR_2->scroll_button = VAR_3->scroll_button;
 }
 if (VAR_3->send_events != VAR_1) {
  VAR_2->send_events = VAR_3->send_events;
 }
 if (VAR_3->tap != VAR_1) {
  VAR_2->tap = VAR_3->tap;
 }
 if (VAR_3->tap_button_map != VAR_1) {
  VAR_2->tap_button_map = VAR_3->tap_button_map;
 }
 if (VAR_3->xkb_file_is_set) {
  FUNC_0(VAR_2->xkb_file);
  VAR_2->xkb_file = VAR_3->xkb_file ? FUNC_3(VAR_3->xkb_file) : ((void*)0);
  VAR_2->xkb_file_is_set = VAR_2->xkb_file != ((void*)0);
 }
 if (VAR_3->xkb_layout) {
  FUNC_0(VAR_2->xkb_layout);
  VAR_2->xkb_layout = FUNC_3(VAR_3->xkb_layout);
 }
 if (VAR_3->xkb_model) {
  FUNC_0(VAR_2->xkb_model);
  VAR_2->xkb_model = FUNC_3(VAR_3->xkb_model);
 }
 if (VAR_3->xkb_options) {
  FUNC_0(VAR_2->xkb_options);
  VAR_2->xkb_options = FUNC_3(VAR_3->xkb_options);
 }
 if (VAR_3->xkb_rules) {
  FUNC_0(VAR_2->xkb_rules);
  VAR_2->xkb_rules = FUNC_3(VAR_3->xkb_rules);
 }
 if (VAR_3->xkb_variant) {
  FUNC_0(VAR_2->xkb_variant);
  VAR_2->xkb_variant = FUNC_3(VAR_3->xkb_variant);
 }
 if (VAR_3->xkb_numlock != VAR_1) {
  VAR_2->xkb_numlock = VAR_3->xkb_numlock;
 }
 if (VAR_3->xkb_capslock != VAR_1) {
  VAR_2->xkb_capslock = VAR_3->xkb_capslock;
 }
 if (VAR_3->mapped_from_region) {
  FUNC_0(VAR_2->mapped_from_region);
  VAR_2->mapped_from_region =
   FUNC_1(sizeof(struct input_config_mapped_from_region));
  FUNC_2(VAR_2->mapped_from_region, VAR_3->mapped_from_region,
   sizeof(struct input_config_mapped_from_region));
 }
 if (VAR_3->mapped_to) {
  VAR_2->mapped_to = VAR_3->mapped_to;
 }
 if (VAR_3->mapped_to_output) {
  FUNC_0(VAR_2->mapped_to_output);
  VAR_2->mapped_to_output = FUNC_3(VAR_3->mapped_to_output);
 }
 if (VAR_3->mapped_to_region) {
  FUNC_0(VAR_2->mapped_to_region);
  VAR_2->mapped_to_region =
   FUNC_1(sizeof(struct wlr_box));
  FUNC_2(VAR_2->mapped_to_region, VAR_3->mapped_to_region,
   sizeof(struct wlr_box));
 }
 if (VAR_3->calibration_matrix.configured) {
  VAR_2->calibration_matrix.configured = VAR_3->calibration_matrix.configured;
  FUNC_2(VAR_2->calibration_matrix.matrix, VAR_3->calibration_matrix.matrix,
   sizeof(VAR_3->calibration_matrix.matrix));
 }
}
