
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_mode {TYPE_1__* switch_bindings; TYPE_1__* mouse_bindings; TYPE_1__* keycode_bindings; TYPE_1__* keysym_bindings; struct sway_mode* name; } ;
struct TYPE_2__ {int length; int * items; } ;


 int FUNC_0 (struct sway_mode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct sway_mode *VAR_0) {
 if (!VAR_0) {
  return;
 }
 FUNC_0(VAR_0->name);
 if (VAR_0->keysym_bindings) {
  for (int VAR_1 = 0; VAR_1 < VAR_0->keysym_bindings->length; VAR_1++) {
   FUNC_1(VAR_0->keysym_bindings->items[VAR_1]);
  }
  FUNC_3(VAR_0->keysym_bindings);
 }
 if (VAR_0->keycode_bindings) {
  for (int VAR_2 = 0; VAR_2 < VAR_0->keycode_bindings->length; VAR_2++) {
   FUNC_1(VAR_0->keycode_bindings->items[VAR_2]);
  }
  FUNC_3(VAR_0->keycode_bindings);
 }
 if (VAR_0->mouse_bindings) {
  for (int VAR_3 = 0; VAR_3 < VAR_0->mouse_bindings->length; VAR_3++) {
   FUNC_1(VAR_0->mouse_bindings->items[VAR_3]);
  }
  FUNC_3(VAR_0->mouse_bindings);
 }
 if (VAR_0->switch_bindings) {
  for (int VAR_4 = 0; VAR_4 < VAR_0->switch_bindings->length; VAR_4++) {
   FUNC_2(VAR_0->switch_bindings->items[VAR_4]);
  }
  FUNC_3(VAR_0->switch_bindings);
 }
 FUNC_0(VAR_0);
}
