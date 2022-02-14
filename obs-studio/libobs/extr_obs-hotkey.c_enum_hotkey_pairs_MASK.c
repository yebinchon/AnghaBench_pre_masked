
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int obs_hotkey_pair_t ;
typedef int (* obs_hotkey_pair_internal_enum_func ) (size_t,int *,void*) ;
struct TYPE_4__ {size_t num; int * array; } ;
struct TYPE_5__ {TYPE_1__ hotkey_pairs; } ;
struct TYPE_6__ {TYPE_2__ hotkeys; } ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(obs_hotkey_pair_internal_enum_func VAR_1,
         void *VAR_2)
{
 const size_t VAR_3 = VAR_0->hotkeys.hotkey_pairs.num;
 obs_hotkey_pair_t *VAR_4 = VAR_0->hotkeys.hotkey_pairs.array;
 for (size_t VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (!VAR_1(VAR_5, &VAR_4[VAR_5], VAR_2))
   break;
 }
}
