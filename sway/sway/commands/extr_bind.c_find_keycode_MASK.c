
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xkb_keysym_t ;
typedef int xkb_keycode_t ;
struct xkb_keymap {int dummy; } ;
struct keycode_matches {scalar_t__ keysym; int count; int keycode; } ;
struct TYPE_2__ {int keysym_translation_state; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct xkb_keymap *VAR_2,
  xkb_keycode_t VAR_3, void *VAR_4) {
 xkb_keysym_t VAR_5 = FUNC_0(
   VAR_1->keysym_translation_state, VAR_3);

 if (VAR_5 == VAR_0) {
  return;
 }

 struct keycode_matches *VAR_6 = VAR_4;
 if (VAR_6->keysym == VAR_5) {
  VAR_6->keycode = VAR_3;
  VAR_6->count++;
 }
}
