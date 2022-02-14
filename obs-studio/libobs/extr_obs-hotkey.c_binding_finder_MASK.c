
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct binding_find_data {scalar_t__ id; size_t* idx; int found; } ;
struct TYPE_3__ {scalar_t__ hotkey_id; } ;
typedef TYPE_1__ obs_hotkey_binding_t ;



__attribute__((used)) static inline bool FUNC_0(void *VAR_0, size_t VAR_1,
      obs_hotkey_binding_t *VAR_2)
{
 struct binding_find_data *VAR_3 = VAR_0;
 if (VAR_2->hotkey_id != VAR_3->id)
  return 1;

 *VAR_3->idx = VAR_1;
 VAR_3->found = 1;
 return 0;
}
