
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct obs_scene_item {scalar_t__ id; struct obs_scene_item* next; } ;
typedef struct obs_scene_item obs_sceneitem_t ;
struct TYPE_5__ {struct obs_scene_item* first_item; } ;
typedef TYPE_1__ obs_scene_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

obs_sceneitem_t *FUNC_2(obs_scene_t *VAR_0, int64_t VAR_1)
{
 struct obs_scene_item *VAR_2;

 if (!VAR_0)
  return ((void*)0);

 FUNC_0(VAR_0);

 VAR_2 = VAR_0->first_item;
 while (VAR_2) {
  if (VAR_2->id == VAR_1)
   break;

  VAR_2 = VAR_2->next;
 }

 FUNC_1(VAR_0);

 return VAR_2;
}
