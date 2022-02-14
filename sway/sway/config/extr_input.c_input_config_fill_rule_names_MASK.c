
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xkb_rule_names {int variant; int rules; int options; int model; int layout; } ;
struct input_config {int xkb_variant; int xkb_rules; int xkb_options; int xkb_model; int xkb_layout; } ;



void FUNC_0(struct input_config *VAR_0,
  struct xkb_rule_names *VAR_1) {
 VAR_1->layout = VAR_0->xkb_layout;
 VAR_1->model = VAR_0->xkb_model;
 VAR_1->options = VAR_0->xkb_options;
 VAR_1->rules = VAR_0->xkb_rules;
 VAR_1->variant = VAR_0->xkb_variant;
}
