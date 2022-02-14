
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct obs_core_hotkeys {TYPE_2__* platform_context; } ;
struct TYPE_5__ {struct TYPE_5__* keysyms; int display; TYPE_1__* keycodes; } ;
typedef TYPE_2__ obs_hotkeys_platform_t ;
struct TYPE_4__ {int list; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct obs_core_hotkeys *VAR_1)
{
 obs_hotkeys_platform_t *VAR_2 = VAR_1->platform_context;

 for (size_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_2->keycodes[VAR_3].list);

 FUNC_0(VAR_2->display);
 FUNC_1(VAR_2->keysyms);
 FUNC_1(VAR_2);

 VAR_1->platform_context = ((void*)0);
}
