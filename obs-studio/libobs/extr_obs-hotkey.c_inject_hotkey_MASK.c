
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ key; int modifiers; } ;
struct obs_hotkey_internal_inject {int strict_modifiers; TYPE_2__ hotkey; int pressed; } ;
struct TYPE_7__ {scalar_t__ key; } ;
struct TYPE_9__ {TYPE_1__ key; } ;
typedef TYPE_3__ obs_hotkey_binding_t ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_3__*,int ,int,int ,int*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static inline bool FUNC_3(void *VAR_0, size_t VAR_1,
     obs_hotkey_binding_t *VAR_2)
{
 FUNC_0(VAR_1);
 struct obs_hotkey_internal_inject *VAR_3 = VAR_0;

 if (FUNC_2(VAR_2, VAR_3->hotkey.modifiers,
       VAR_3->strict_modifiers)) {
  bool VAR_4 = VAR_2->key.key == VAR_3->hotkey.key &&
          VAR_3->pressed;
  FUNC_1(VAR_2, VAR_3->hotkey.modifiers, 0,
          VAR_3->strict_modifiers, &VAR_4);
 }

 return 1;
}
