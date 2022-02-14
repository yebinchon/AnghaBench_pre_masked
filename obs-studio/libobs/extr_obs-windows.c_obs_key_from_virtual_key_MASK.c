
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int obs_key_t ;
struct TYPE_5__ {int* vk_codes; } ;
typedef TYPE_2__ obs_hotkeys_platform_t ;
struct TYPE_4__ {TYPE_2__* platform_context; } ;
struct TYPE_6__ {TYPE_1__ hotkeys; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

obs_key_t FUNC_0(int VAR_3)
{
 obs_hotkeys_platform_t *VAR_4 = VAR_2->hotkeys.platform_context;

 for (size_t VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->vk_codes[VAR_5] == VAR_3) {
   return (obs_key_t)VAR_5;
  }
 }

 return VAR_1;
}
