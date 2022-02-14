
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int obs_hotkey_t ;
typedef int (* obs_hotkey_internal_enum_func ) (void*,size_t,int *) ;
struct TYPE_4__ {size_t num; int * array; } ;
struct TYPE_5__ {TYPE_1__ hotkeys; } ;
struct TYPE_6__ {TYPE_2__ hotkeys; } ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(obs_hotkey_internal_enum_func VAR_1, void *VAR_2)
{
 const size_t VAR_3 = VAR_0->hotkeys.hotkeys.num;
 obs_hotkey_t *VAR_4 = VAR_0->hotkeys.hotkeys.array;
 for (size_t VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (!VAR_1(VAR_2, VAR_5, &VAR_4[VAR_5]))
   break;
 }
}
