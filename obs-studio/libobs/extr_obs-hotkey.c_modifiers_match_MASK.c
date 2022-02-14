
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int modifiers; } ;
struct TYPE_5__ {TYPE_1__ key; } ;
typedef TYPE_2__ obs_hotkey_binding_t ;



__attribute__((used)) static inline bool FUNC_0(obs_hotkey_binding_t *VAR_0,
       uint32_t VAR_1, bool VAR_2)
{
 uint32_t VAR_3 = VAR_0->key.modifiers;
 return !VAR_3 ||
        (!VAR_2 && (VAR_3 & VAR_1) == VAR_3) ||
        (VAR_2 && VAR_3 == VAR_1);
}
