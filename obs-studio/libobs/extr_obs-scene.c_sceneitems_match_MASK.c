
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ obs_sceneitem_t ;
struct TYPE_6__ {TYPE_1__* first_item; } ;
typedef TYPE_2__ obs_scene_t ;



__attribute__((used)) static bool FUNC_0(obs_scene_t *VAR_0, obs_sceneitem_t *const *VAR_1,
        size_t VAR_2, bool *VAR_3)
{
 obs_sceneitem_t *VAR_4 = VAR_0->first_item;

 size_t VAR_5 = 0;
 while (VAR_4) {
  bool VAR_6 = 0;
  for (size_t VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   if (VAR_1[VAR_7] != VAR_4)
    continue;

   if (VAR_5 != VAR_7)
    *VAR_3 = 0;

   VAR_6 = 1;
   break;
  }

  if (!VAR_6)
   return 0;

  VAR_4 = VAR_4->next;
  VAR_5 += 1;
 }

 return VAR_5 == VAR_2;
}
