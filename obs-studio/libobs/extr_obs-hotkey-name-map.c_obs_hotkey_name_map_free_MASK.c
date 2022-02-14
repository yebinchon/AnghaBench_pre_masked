
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* leaves; int root; } ;
struct TYPE_4__ {TYPE_3__* name_map; } ;
struct TYPE_5__ {TYPE_1__ hotkeys; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(void)
{
 if (!VAR_0 || !VAR_0->hotkeys.name_map)
  return;

 FUNC_1(&VAR_0->hotkeys.name_map->root, 0);
 FUNC_0(VAR_0->hotkeys.name_map->leaves);
 FUNC_0(VAR_0->hotkeys.name_map);
}
