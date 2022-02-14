
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_config {int xkb_file_is_set; void* xkb_capslock; void* xkb_numlock; void* repeat_rate; void* repeat_delay; void* left_handed; void* scroll_method; void* scroll_button; void* scroll_factor; void* pointer_accel; void* accel_profile; void* natural_scroll; void* middle_emulation; void* click_method; void* send_events; void* dwt; void* drag_lock; void* drag; void* tap_button_map; void* tap; int * input_type; int identifier; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 struct input_config* FUNC_0 (int,int) ;
 int FUNC_1 (struct input_config*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,...) ;

struct input_config *FUNC_4(const char* VAR_3) {
 struct input_config *VAR_4 = FUNC_0(1, sizeof(struct input_config));
 if (!VAR_4) {
  FUNC_3(VAR_2, "Unable to allocate input config");
  return ((void*)0);
 }
 FUNC_3(VAR_2, "new_input_config(%s)", VAR_3);
 if (!(VAR_4->identifier = FUNC_2(VAR_3))) {
  FUNC_1(VAR_4);
  FUNC_3(VAR_2, "Unable to allocate input config");
  return ((void*)0);
 }

 VAR_4->input_type = ((void*)0);
 VAR_4->tap = VAR_1;
 VAR_4->tap_button_map = VAR_1;
 VAR_4->drag = VAR_1;
 VAR_4->drag_lock = VAR_1;
 VAR_4->dwt = VAR_1;
 VAR_4->send_events = VAR_1;
 VAR_4->click_method = VAR_1;
 VAR_4->middle_emulation = VAR_1;
 VAR_4->natural_scroll = VAR_1;
 VAR_4->accel_profile = VAR_1;
 VAR_4->pointer_accel = VAR_0;
 VAR_4->scroll_factor = VAR_0;
 VAR_4->scroll_button = VAR_1;
 VAR_4->scroll_method = VAR_1;
 VAR_4->left_handed = VAR_1;
 VAR_4->repeat_delay = VAR_1;
 VAR_4->repeat_rate = VAR_1;
 VAR_4->xkb_numlock = VAR_1;
 VAR_4->xkb_capslock = VAR_1;
 VAR_4->xkb_file_is_set = 0;

 return VAR_4;
}
