
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t num; int * array; } ;
struct obs_context_data {TYPE_1__ hotkeys; } ;
typedef int obs_hotkey_t ;
typedef int (* obs_hotkey_internal_enum_func ) (void*,size_t,int *) ;
typedef int obs_hotkey_id ;
struct TYPE_6__ {int * array; } ;
struct TYPE_7__ {TYPE_2__ hotkeys; } ;
struct TYPE_8__ {TYPE_3__ hotkeys; } ;


 int FUNC_0 (int const,size_t*) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct obs_context_data *VAR_1,
     obs_hotkey_internal_enum_func VAR_2,
     void *VAR_3)
{
 const size_t VAR_4 = VAR_1->hotkeys.num;
 const obs_hotkey_id *VAR_5 = VAR_1->hotkeys.array;
 obs_hotkey_t *VAR_6 = VAR_0->hotkeys.hotkeys.array;
 for (size_t VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  size_t VAR_8;
  if (!FUNC_0(VAR_5[VAR_7], &VAR_8))
   continue;

  if (!VAR_2(VAR_3, VAR_8, &VAR_6[VAR_8]))
   break;
 }
}
