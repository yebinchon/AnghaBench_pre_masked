
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xkb_keysym_t ;
struct keycode_matches {int count; int keycode; int keysym; } ;
struct TYPE_2__ {int keysym_translation_state; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct keycode_matches*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct keycode_matches FUNC_2(xkb_keysym_t VAR_3) {
 struct keycode_matches VAR_4 = {
  .keysym = VAR_3,
  .keycode = VAR_0,
  .count = 0,
 };

 FUNC_0(
   FUNC_1(VAR_1->keysym_translation_state),
   VAR_2, &VAR_4);
 return VAR_4;
}
