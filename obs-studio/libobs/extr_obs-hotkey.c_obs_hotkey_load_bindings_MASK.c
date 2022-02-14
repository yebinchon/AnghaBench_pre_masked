
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int obs_key_combination_t ;
typedef int obs_hotkey_t ;
typedef int obs_hotkey_id ;
struct TYPE_4__ {int * array; } ;
struct TYPE_5__ {TYPE_1__ hotkeys; } ;
struct TYPE_6__ {TYPE_2__ hotkeys; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,size_t*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 () ;
 TYPE_3__* VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

void FUNC_6(obs_hotkey_id VAR_1,
         obs_key_combination_t *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 if (!FUNC_3())
  return;

 if (FUNC_1(VAR_1, &VAR_4)) {
  obs_hotkey_t *VAR_5 = &VAR_0->hotkeys.hotkeys.array[VAR_4];
  FUNC_4(VAR_1);
  for (size_t VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
   FUNC_0(VAR_5, VAR_2[VAR_6]);

  FUNC_2("hotkey_bindings_changed", VAR_5);
 }
 FUNC_5();
}
