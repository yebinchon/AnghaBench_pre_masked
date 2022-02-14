
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
typedef TYPE_3__ obs_hotkey_t ;
typedef int obs_hotkey_id ;
struct TYPE_5__ {TYPE_3__* array; } ;
struct TYPE_6__ {TYPE_1__ hotkeys; } ;
struct TYPE_8__ {TYPE_2__ hotkeys; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,size_t*) ;
 TYPE_4__* VAR_0 ;

void FUNC_3(obs_hotkey_id VAR_1, const char *VAR_2)
{
 size_t VAR_3;

 if (!FUNC_2(VAR_1, &VAR_3))
  return;

 obs_hotkey_t *VAR_4 = &VAR_0->hotkeys.hotkeys.array[VAR_3];
 FUNC_0(VAR_4->name);
 VAR_4->name = FUNC_1(VAR_2);
}
