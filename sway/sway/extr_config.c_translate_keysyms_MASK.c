
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xkb_rule_names {int member_0; } ;
struct sway_mode {int * keycode_bindings; int * keysym_bindings; } ;
struct input_config {int identifier; } ;
typedef int list_t ;
struct TYPE_4__ {TYPE_1__* modes; int keysym_translation_state; } ;
struct TYPE_3__ {int length; struct sway_mode** items; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (struct input_config*,struct xkb_rule_names*) ;
 int FUNC_2 (struct xkb_rule_names) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int *,int *,int *) ;

void FUNC_7(struct input_config *VAR_2) {
 FUNC_3(VAR_1->keysym_translation_state);

 struct xkb_rule_names VAR_3 = {0};
 FUNC_1(VAR_2, &VAR_3);
 VAR_1->keysym_translation_state =
  FUNC_2(VAR_3);

 for (int VAR_4 = 0; VAR_4 < VAR_1->modes->length; ++VAR_4) {
  struct sway_mode *VAR_5 = VAR_1->modes->items[VAR_4];

  list_t *VAR_6 = FUNC_0();
  list_t *VAR_7 = FUNC_0();

  FUNC_6(VAR_5->keysym_bindings, VAR_6, VAR_7);
  FUNC_6(VAR_5->keycode_bindings, VAR_6, VAR_7);

  FUNC_4(VAR_5->keysym_bindings);
  FUNC_4(VAR_5->keycode_bindings);

  VAR_5->keysym_bindings = VAR_6;
  VAR_5->keycode_bindings = VAR_7;
 }

 FUNC_5(VAR_0, "Translated keysyms using config for device '%s'",
   VAR_2->identifier);
}
