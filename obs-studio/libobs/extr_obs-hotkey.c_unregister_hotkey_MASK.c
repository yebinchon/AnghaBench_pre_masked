
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ registerer_type; int registerer; int description; int name; } ;
typedef TYPE_2__ obs_hotkey_t ;
typedef scalar_t__ obs_hotkey_id ;
struct TYPE_10__ {size_t num; TYPE_2__* array; } ;
struct TYPE_7__ {scalar_t__ next_id; TYPE_6__ hotkeys; } ;
struct TYPE_9__ {TYPE_1__ hotkeys; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__,size_t) ;
 int FUNC_2 (scalar_t__,size_t*) ;
 int FUNC_3 (char*,TYPE_2__*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_7(obs_hotkey_id VAR_2)
{
 if (VAR_2 >= VAR_1->hotkeys.next_id)
  return 0;

 size_t VAR_3;
 if (!FUNC_2(VAR_2, &VAR_3))
  return 0;

 obs_hotkey_t *VAR_4 = &VAR_1->hotkeys.hotkeys.array[VAR_3];

 FUNC_3("hotkey_unregister", VAR_4);

 FUNC_5(VAR_4);

 FUNC_0(VAR_4->name);
 FUNC_0(VAR_4->description);

 if (VAR_4->registerer_type == VAR_0)
  FUNC_4(VAR_4->registerer);

 FUNC_1(VAR_1->hotkeys.hotkeys, VAR_3);
 FUNC_6(VAR_2);

 return VAR_1->hotkeys.hotkeys.num >= VAR_3;
}
