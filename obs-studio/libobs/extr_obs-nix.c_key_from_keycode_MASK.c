
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xcb_keycode_t ;
struct TYPE_4__ {size_t num; scalar_t__* array; } ;
struct keycode_list {TYPE_1__ list; } ;
typedef int obs_key_t ;
struct TYPE_5__ {struct keycode_list* keycodes; } ;
typedef TYPE_2__ obs_hotkeys_platform_t ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static obs_key_t FUNC_0(obs_hotkeys_platform_t *VAR_2,
      xcb_keycode_t VAR_3)
{
 for (size_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct keycode_list *VAR_5 = &VAR_2->keycodes[VAR_4];

  for (size_t VAR_6 = 0; VAR_6 < VAR_5->list.num; VAR_6++) {
   if (VAR_5->list.array[VAR_6] == VAR_3) {
    return (obs_key_t)VAR_4;
   }
  }
 }

 return VAR_1;
}
