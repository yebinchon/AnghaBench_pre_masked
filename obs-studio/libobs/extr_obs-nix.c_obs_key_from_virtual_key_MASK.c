
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ const xcb_keysym_t ;
typedef int xcb_keycode_t ;
typedef int obs_key_t ;
struct TYPE_6__ {scalar_t__* keysyms; int syms_per_code; int num_keysyms; scalar_t__ min_keycode; } ;
typedef TYPE_2__ obs_hotkeys_platform_t ;
struct TYPE_5__ {TYPE_2__* platform_context; } ;
struct TYPE_7__ {TYPE_1__ hotkeys; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_3__* VAR_1 ;

obs_key_t FUNC_1(int VAR_2)
{
 obs_hotkeys_platform_t *VAR_3 = VAR_1->hotkeys.platform_context;
 const xcb_keysym_t *VAR_4 = VAR_3->keysyms;
 int VAR_5 = VAR_3->syms_per_code;
 int VAR_6 = VAR_3->num_keysyms;

 if (VAR_2 == 0)
  return VAR_0;

 for (int VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (VAR_4[VAR_7] == (xcb_keysym_t)VAR_2) {
   xcb_keycode_t VAR_8 = (xcb_keycode_t)(VAR_7 / VAR_5);
   VAR_8 += VAR_3->min_keycode;
   obs_key_t VAR_9 = FUNC_0(VAR_3, VAR_8);

   return VAR_9;
  }
 }

 return VAR_0;
}
