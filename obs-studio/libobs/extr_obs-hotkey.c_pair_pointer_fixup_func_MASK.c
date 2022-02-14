
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * id; } ;
typedef TYPE_4__ obs_hotkey_pair_t ;
struct TYPE_8__ {TYPE_1__* array; } ;
struct TYPE_9__ {TYPE_2__ hotkeys; } ;
struct TYPE_11__ {TYPE_3__ hotkeys; } ;
struct TYPE_7__ {TYPE_4__* data; } ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ,size_t*) ;
 TYPE_6__* VAR_0 ;

__attribute__((used)) static inline bool FUNC_2(size_t VAR_1, obs_hotkey_pair_t *VAR_2,
        void *VAR_3)
{
 FUNC_0(VAR_1);
 FUNC_0(VAR_3);

 if (FUNC_1(VAR_2->id[0], &VAR_1))
  VAR_0->hotkeys.hotkeys.array[VAR_1].data = VAR_2;

 if (FUNC_1(VAR_2->id[1], &VAR_1))
  VAR_0->hotkeys.hotkeys.array[VAR_1].data = VAR_2;

 return 1;
}
