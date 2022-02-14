
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_sceneitem_order_info {scalar_t__ group; scalar_t__ item; } ;
typedef int obs_scene_t ;


 int FUNC_0 (struct obs_sceneitem_order_info*) ;
 int FUNC_1 (int *,struct obs_sceneitem_order_info**,size_t*) ;

__attribute__((used)) static bool FUNC_2(obs_scene_t *VAR_0,
         struct obs_sceneitem_order_info *VAR_1,
         size_t VAR_2)
{
 struct obs_sceneitem_order_info *VAR_3;
 size_t VAR_4;

 FUNC_1(VAR_0, &VAR_3, &VAR_4);
 if (VAR_4 != VAR_2) {
  FUNC_0(VAR_3);
  return 0;
 }

 for (size_t VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct obs_sceneitem_order_info *VAR_6 = &VAR_1[VAR_5];
  struct obs_sceneitem_order_info *VAR_7 = &VAR_3[VAR_5];

  if (VAR_6->group != VAR_7->group || VAR_6->item != VAR_7->item) {
   FUNC_0(VAR_3);
   return 0;
  }
 }

 FUNC_0(VAR_3);
 return 1;
}
