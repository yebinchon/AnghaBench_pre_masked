
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * id; } ;
typedef TYPE_2__ obs_hotkey_pair_t ;
typedef scalar_t__ obs_hotkey_pair_id ;
struct TYPE_8__ {size_t num; TYPE_2__* array; } ;
struct TYPE_5__ {scalar_t__ next_pair_id; TYPE_4__ hotkey_pairs; } ;
struct TYPE_7__ {TYPE_1__ hotkeys; } ;


 int FUNC_0 (TYPE_4__,size_t) ;
 int FUNC_1 (scalar_t__,size_t*) ;
 int FUNC_2 () ;
 TYPE_3__* VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline bool FUNC_4(obs_hotkey_pair_id VAR_1)
{
 if (VAR_1 >= VAR_0->hotkeys.next_pair_id)
  return 0;

 size_t VAR_2;
 if (!FUNC_1(VAR_1, &VAR_2))
  return 0;

 obs_hotkey_pair_t *VAR_3 = &VAR_0->hotkeys.hotkey_pairs.array[VAR_2];

 bool VAR_4 = FUNC_3(VAR_3->id[0]);
 VAR_4 = FUNC_3(VAR_3->id[1]) || VAR_4;
 if (VAR_4)
  FUNC_2();

 FUNC_0(VAR_0->hotkeys.hotkey_pairs, VAR_2);
 return VAR_0->hotkeys.hotkey_pairs.num >= VAR_2;
}
