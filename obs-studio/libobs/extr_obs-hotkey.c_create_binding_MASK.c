
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int obs_key_combination_t ;
struct TYPE_8__ {int id; } ;
typedef TYPE_2__ obs_hotkey_t ;
struct TYPE_9__ {TYPE_2__* hotkey; int hotkey_id; int key; } ;
typedef TYPE_3__ obs_hotkey_binding_t ;
struct TYPE_7__ {int bindings; } ;
struct TYPE_10__ {TYPE_1__ hotkeys; } ;


 TYPE_3__* FUNC_0 (int ) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static inline void FUNC_1(obs_hotkey_t *VAR_1,
      obs_key_combination_t VAR_2)
{
 obs_hotkey_binding_t *VAR_3 = FUNC_0(VAR_0->hotkeys.bindings);
 if (!VAR_3)
  return;

 VAR_3->key = VAR_2;
 VAR_3->hotkey_id = VAR_1->id;
 VAR_3->hotkey = VAR_1;
}
