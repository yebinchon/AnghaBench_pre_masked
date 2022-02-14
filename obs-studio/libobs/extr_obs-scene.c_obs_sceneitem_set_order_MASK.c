
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct obs_scene_item {struct obs_scene_item* next; struct obs_scene_item* prev; } ;
struct obs_scene {int dummy; } ;
struct TYPE_6__ {struct obs_scene_item* prev; struct obs_scene_item* next; struct obs_scene* parent; } ;
typedef TYPE_1__ obs_sceneitem_t ;
typedef enum obs_order_movement { ____Placeholder_obs_order_movement } obs_order_movement ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct obs_scene*,TYPE_1__*,struct obs_scene_item*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct obs_scene*) ;
 int FUNC_3 (struct obs_scene*) ;
 int FUNC_4 (struct obs_scene*) ;
 int FUNC_5 (struct obs_scene*) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(obs_sceneitem_t *VAR_4,
        enum obs_order_movement VAR_5)
{
 if (!VAR_4)
  return;

 struct obs_scene_item *VAR_6, *VAR_7;
 struct obs_scene *VAR_8 = VAR_4->parent;

 FUNC_4(VAR_8);
 FUNC_2(VAR_8);

 VAR_6 = VAR_4->next;
 VAR_7 = VAR_4->prev;

 FUNC_1(VAR_4);

 if (VAR_5 == VAR_1) {
  FUNC_0(VAR_8, VAR_4, VAR_7 ? VAR_7->prev : ((void*)0));

 } else if (VAR_5 == VAR_3) {
  FUNC_0(VAR_8, VAR_4, VAR_6 ? VAR_6 : VAR_7);

 } else if (VAR_5 == VAR_2) {
  struct obs_scene_item *VAR_9 = VAR_6;
  if (!VAR_9) {
   VAR_9 = VAR_7;
  } else {
   while (VAR_9->next)
    VAR_9 = VAR_9->next;
  }

  FUNC_0(VAR_8, VAR_4, VAR_9);

 } else if (VAR_5 == VAR_0) {
  FUNC_0(VAR_8, VAR_4, ((void*)0));
 }

 FUNC_3(VAR_8);

 FUNC_6(VAR_4);
 FUNC_5(VAR_8);
}
