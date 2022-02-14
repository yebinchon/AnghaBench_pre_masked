
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_keyboard {int key_repeat_source; int * repeat_binding; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

void FUNC_2(struct sway_keyboard *VAR_1) {
 if (!VAR_1) {
  return;
 }
 VAR_1->repeat_binding = ((void*)0);
 if (FUNC_1(VAR_1->key_repeat_source, 0) < 0) {
  FUNC_0(VAR_0, "failed to disarm key repeat timer");
 }
}
