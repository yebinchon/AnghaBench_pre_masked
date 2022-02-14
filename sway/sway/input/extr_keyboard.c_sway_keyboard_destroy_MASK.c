
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int link; } ;
struct TYPE_3__ {int link; } ;
struct sway_keyboard {int key_repeat_source; TYPE_2__ keyboard_modifiers; TYPE_1__ keyboard_key; scalar_t__ keymap; } ;


 int FUNC_0 (struct sway_keyboard*) ;
 int FUNC_1 (struct sway_keyboard*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct sway_keyboard *VAR_0) {
 if (!VAR_0) {
  return;
 }
 if (VAR_0->keymap) {
  FUNC_4(VAR_0->keymap);
 }
 FUNC_3(&VAR_0->keyboard_key.link);
 FUNC_3(&VAR_0->keyboard_modifiers.link);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0->key_repeat_source);
 FUNC_0(VAR_0);
}
