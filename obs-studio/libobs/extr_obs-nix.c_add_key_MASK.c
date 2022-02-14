
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_keycode_t ;
typedef size_t obs_key_t ;
struct TYPE_6__ {TYPE_1__* keycodes; } ;
typedef TYPE_2__ obs_hotkeys_platform_t ;
struct TYPE_7__ {int num; scalar_t__* array; } ;
struct TYPE_5__ {TYPE_3__ list; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int) ;
 int FUNC_1 (TYPE_3__,int *) ;
 int FUNC_2 (size_t) ;

__attribute__((used)) static inline void FUNC_3(obs_hotkeys_platform_t *VAR_1, obs_key_t VAR_2,
      int VAR_3)
{
 xcb_keycode_t VAR_4 = (xcb_keycode_t)VAR_3;
 FUNC_1(VAR_1->keycodes[VAR_2].list, &VAR_4);

 if (VAR_1->keycodes[VAR_2].list.num > 1) {
  FUNC_0(VAR_0,
       "found alternate keycode %d for %s "
       "which already has keycode %d",
       VAR_3, FUNC_2(VAR_2),
       (int)VAR_1->keycodes[VAR_2].list.array[0]);
 }
}
