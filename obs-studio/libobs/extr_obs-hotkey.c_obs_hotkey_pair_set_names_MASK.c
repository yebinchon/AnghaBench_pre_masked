
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * id; } ;
typedef TYPE_3__ obs_hotkey_pair_t ;
typedef int obs_hotkey_pair_id ;
struct TYPE_5__ {TYPE_3__* array; } ;
struct TYPE_6__ {TYPE_1__ hotkey_pairs; } ;
struct TYPE_8__ {TYPE_2__ hotkeys; } ;


 int FUNC_0 (int ,size_t*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (int ,char const*) ;

void FUNC_2(obs_hotkey_pair_id VAR_1, const char *VAR_2,
          const char *VAR_3)
{
 size_t VAR_4;
 obs_hotkey_pair_t VAR_5;

 if (!FUNC_0(VAR_1, &VAR_4))
  return;

 VAR_5 = VAR_0->hotkeys.hotkey_pairs.array[VAR_4];

 FUNC_1(VAR_5.id[0], VAR_2);
 FUNC_1(VAR_5.id[1], VAR_3);
}
