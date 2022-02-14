
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int data; int (* func ) (int ,int ,TYPE_3__*,int) ;} ;
typedef TYPE_3__ obs_hotkey_t ;
typedef int obs_hotkey_id ;
struct TYPE_6__ {TYPE_3__* array; } ;
struct TYPE_7__ {TYPE_1__ hotkeys; int reroute_hotkeys; } ;
struct TYPE_9__ {TYPE_2__ hotkeys; } ;


 int FUNC_0 (int ,size_t*) ;
 int FUNC_1 () ;
 TYPE_5__* VAR_0 ;
 int FUNC_2 (int ,int ,TYPE_3__*,int) ;
 int FUNC_3 () ;

void FUNC_4(obs_hotkey_id VAR_1, bool VAR_2)
{
 if (!FUNC_1())
  return;

 if (!VAR_0->hotkeys.reroute_hotkeys)
  goto unlock;

 size_t VAR_3;
 if (!FUNC_0(VAR_1, &VAR_3))
  goto unlock;

 obs_hotkey_t *VAR_4 = &VAR_0->hotkeys.hotkeys.array[VAR_3];
 VAR_4->func(VAR_4->data, VAR_1, VAR_4, VAR_2);

unlock:
 FUNC_3();
}
