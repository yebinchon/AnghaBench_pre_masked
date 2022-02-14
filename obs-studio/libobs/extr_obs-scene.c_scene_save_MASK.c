
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_scene_item {struct obs_scene_item* next; } ;
struct obs_scene {int cy; int cx; scalar_t__ custom_size; int id_counter; struct obs_scene_item* first_item; } ;
typedef int obs_data_t ;
typedef int obs_data_array_t ;


 int FUNC_0 (struct obs_scene*) ;
 int FUNC_1 (struct obs_scene*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,char*,scalar_t__) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,struct obs_scene_item*,int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_0, obs_data_t *VAR_1)
{
 struct obs_scene *VAR_2 = VAR_0;
 obs_data_array_t *VAR_3 = FUNC_2();
 struct obs_scene_item *VAR_4;

 FUNC_0(VAR_2);

 VAR_4 = VAR_2->first_item;
 while (VAR_4) {
  FUNC_7(VAR_3, VAR_4, ((void*)0));
  VAR_4 = VAR_4->next;
 }

 FUNC_6(VAR_1, "id_counter", VAR_2->id_counter);
 FUNC_5(VAR_1, "custom_size", VAR_2->custom_size);
 if (VAR_2->custom_size) {
  FUNC_6(VAR_1, "cx", VAR_2->cx);
  FUNC_6(VAR_1, "cy", VAR_2->cy);
 }

 FUNC_1(VAR_2);

 FUNC_4(VAR_1, "items", VAR_3);
 FUNC_3(VAR_3);
}
