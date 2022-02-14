
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_1; int member_0; } ;
struct obs_hotkey_internal_inject {int member_1; int member_2; TYPE_1__ member_0; } ;
struct TYPE_8__ {int key; int modifiers; } ;
typedef TYPE_3__ obs_key_combination_t ;
struct TYPE_7__ {int strict_modifiers; } ;
struct TYPE_9__ {TYPE_2__ hotkeys; } ;


 int FUNC_0 (int ,struct obs_hotkey_internal_inject*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 TYPE_5__* VAR_1 ;
 int FUNC_2 () ;

void FUNC_3(obs_key_combination_t VAR_2, bool VAR_3)
{
 if (!FUNC_1())
  return;

 struct obs_hotkey_internal_inject VAR_4 = {
  {VAR_2.modifiers, VAR_2.key},
  VAR_3,
  VAR_1->hotkeys.strict_modifiers,
 };
 FUNC_0(VAR_0, &VAR_4);
 FUNC_2();
}
