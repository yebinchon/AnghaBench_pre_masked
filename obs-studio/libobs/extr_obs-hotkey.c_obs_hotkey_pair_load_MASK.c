
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int * id; } ;
typedef TYPE_4__ obs_hotkey_pair_t ;
typedef int obs_hotkey_pair_id ;
typedef int obs_data_array_t ;
struct TYPE_7__ {int * array; } ;
struct TYPE_6__ {TYPE_4__* array; } ;
struct TYPE_8__ {TYPE_2__ hotkeys; TYPE_1__ hotkey_pairs; } ;
struct TYPE_10__ {TYPE_3__ hotkeys; } ;


 scalar_t__ FUNC_0 (int ,size_t*) ;
 int FUNC_1 (int ,size_t*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 TYPE_5__* VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

void FUNC_6(obs_hotkey_pair_id VAR_1, obs_data_array_t *VAR_2,
     obs_data_array_t *VAR_3)
{
 if ((!VAR_2 && !VAR_3) || !FUNC_3())
  return;

 size_t VAR_4;
 if (!FUNC_1(VAR_1, &VAR_4))
  goto unlock;

 obs_hotkey_pair_t *VAR_5 = &VAR_0->hotkeys.hotkey_pairs.array[VAR_4];

 if (FUNC_0(VAR_5->id[0], &VAR_4)) {
  FUNC_4(VAR_5->id[0]);
  FUNC_2(&VAR_0->hotkeys.hotkeys.array[VAR_4], VAR_2);
 }
 if (FUNC_0(VAR_5->id[1], &VAR_4)) {
  FUNC_4(VAR_5->id[1]);
  FUNC_2(&VAR_0->hotkeys.hotkeys.array[VAR_4], VAR_3);
 }

unlock:
 FUNC_5();
}
