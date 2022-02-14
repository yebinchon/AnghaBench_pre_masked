
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * description; int * name; } ;
typedef TYPE_2__ obs_hotkey_t ;
struct TYPE_9__ {size_t num; TYPE_2__* array; } ;
struct TYPE_6__ {int ** translations; TYPE_5__ hotkey_pairs; TYPE_5__ hotkeys; TYPE_5__ bindings; } ;
struct TYPE_8__ {TYPE_1__ hotkeys; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(void)
{
 const size_t VAR_2 = VAR_1->hotkeys.hotkeys.num;
 obs_hotkey_t *VAR_3 = VAR_1->hotkeys.hotkeys.array;
 for (size_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_0(VAR_3[VAR_4].name);
  FUNC_0(VAR_3[VAR_4].description);

  FUNC_2(&VAR_3[VAR_4]);
 }
 FUNC_1(VAR_1->hotkeys.bindings);
 FUNC_1(VAR_1->hotkeys.hotkeys);
 FUNC_1(VAR_1->hotkeys.hotkey_pairs);

 for (size_t VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1->hotkeys.translations[VAR_5]) {
   FUNC_0(VAR_1->hotkeys.translations[VAR_5]);
   VAR_1->hotkeys.translations[VAR_5] = ((void*)0);
  }
 }
}
