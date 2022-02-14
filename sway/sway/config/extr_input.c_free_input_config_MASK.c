
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_config {struct input_config* mapped_to_region; struct input_config* mapped_to_output; struct input_config* mapped_from_region; struct input_config* xkb_variant; struct input_config* xkb_rules; struct input_config* xkb_options; struct input_config* xkb_model; struct input_config* xkb_layout; struct input_config* xkb_file; struct input_config* identifier; } ;


 int FUNC_0 (struct input_config*) ;

void FUNC_1(struct input_config *VAR_0) {
 if (!VAR_0) {
  return;
 }
 FUNC_0(VAR_0->identifier);
 FUNC_0(VAR_0->xkb_file);
 FUNC_0(VAR_0->xkb_layout);
 FUNC_0(VAR_0->xkb_model);
 FUNC_0(VAR_0->xkb_options);
 FUNC_0(VAR_0->xkb_rules);
 FUNC_0(VAR_0->xkb_variant);
 FUNC_0(VAR_0->mapped_from_region);
 FUNC_0(VAR_0->mapped_to_output);
 FUNC_0(VAR_0->mapped_to_region);
 FUNC_0(VAR_0);
}
