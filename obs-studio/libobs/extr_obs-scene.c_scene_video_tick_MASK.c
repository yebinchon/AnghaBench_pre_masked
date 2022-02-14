
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_scene_item {struct obs_scene_item* next; scalar_t__ item_render; } ;
struct obs_scene {struct obs_scene_item* first_item; } ;


 int FUNC_0 (float) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct obs_scene*) ;
 int FUNC_3 (struct obs_scene*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, float VAR_1)
{
 struct obs_scene *VAR_2 = VAR_0;
 struct obs_scene_item *VAR_3;

 FUNC_2(VAR_2);
 VAR_3 = VAR_2->first_item;
 while (VAR_3) {
  if (VAR_3->item_render)
   FUNC_1(VAR_3->item_render);
  VAR_3 = VAR_3->next;
 }
 FUNC_3(VAR_2);

 FUNC_0(VAR_1);
}
