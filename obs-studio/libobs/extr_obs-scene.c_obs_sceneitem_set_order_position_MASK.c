
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct obs_scene_item {struct obs_scene_item* next; } ;
struct obs_scene {struct obs_scene_item* first_item; } ;
struct TYPE_6__ {struct obs_scene* parent; } ;
typedef TYPE_1__ obs_sceneitem_t ;


 int FUNC_0 (struct obs_scene*,TYPE_1__*,struct obs_scene_item*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct obs_scene*) ;
 int FUNC_3 (struct obs_scene*) ;
 int FUNC_4 (struct obs_scene*) ;
 int FUNC_5 (struct obs_scene*) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(obs_sceneitem_t *VAR_0, int VAR_1)
{
 if (!VAR_0)
  return;

 struct obs_scene *VAR_2 = VAR_0->parent;
 struct obs_scene_item *VAR_3;

 FUNC_4(VAR_2);
 FUNC_2(VAR_2);

 FUNC_1(VAR_0);
 VAR_3 = VAR_2->first_item;

 if (VAR_1 == 0) {
  FUNC_0(VAR_2, VAR_0, ((void*)0));
 } else {
  for (int VAR_4 = VAR_1; VAR_4 > 1; --VAR_4) {
   if (VAR_3->next == ((void*)0))
    break;
   VAR_3 = VAR_3->next;
  }

  FUNC_0(VAR_2, VAR_0, VAR_3);
 }

 FUNC_3(VAR_2);

 FUNC_6(VAR_0);
 FUNC_5(VAR_2);
}
