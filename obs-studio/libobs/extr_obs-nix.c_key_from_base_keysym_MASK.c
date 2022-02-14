
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xcb_keysym_t ;
typedef int obs_key_t ;
struct TYPE_3__ {scalar_t__* base_keysyms; } ;
typedef TYPE_1__ obs_hotkeys_platform_t ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static obs_key_t FUNC_0(obs_hotkeys_platform_t *VAR_2,
          xcb_keysym_t VAR_3)
{
 for (size_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->base_keysyms[VAR_4] == (xcb_keysym_t)VAR_3) {
   return (obs_key_t)VAR_4;
  }
 }

 return VAR_1;
}
