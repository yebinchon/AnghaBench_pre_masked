
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ key; int modifiers; } ;
struct TYPE_8__ {int modifiers_match; scalar_t__ pressed; TYPE_1__ key; } ;
typedef TYPE_2__ obs_hotkey_binding_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_4(obs_hotkey_binding_t *VAR_1,
      uint32_t VAR_2, bool VAR_3,
      bool VAR_4, bool *VAR_5)
{
 bool VAR_6 =
  FUNC_1(VAR_1, VAR_2, VAR_4);
 bool VAR_7 = VAR_1->key.key == VAR_0;

 if (!VAR_1->key.modifiers)
  VAR_1->modifiers_match = 1;

 if (VAR_7)
  VAR_5 = &VAR_7;

 if (!VAR_1->key.modifiers && VAR_7)
  goto reset;

 if ((!VAR_1->modifiers_match && !VAR_7) || !VAR_6)
  goto reset;

 if ((VAR_5 && !*VAR_5) ||
     (!VAR_5 && !FUNC_0(VAR_1->key.key)))
  goto reset;

 if (VAR_1->pressed || VAR_3)
  return;

 FUNC_2(VAR_1);
 return;

reset:
 VAR_1->modifiers_match = VAR_6;
 if (!VAR_1->pressed)
  return;

 FUNC_3(VAR_1);
}
