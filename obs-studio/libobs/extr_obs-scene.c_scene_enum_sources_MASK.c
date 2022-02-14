
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_scene_item {int source; int active_refs; struct obs_scene_item* next; } ;
struct obs_scene {int source; struct obs_scene_item* first_item; } ;
typedef int (* obs_source_enum_proc_t ) (int ,int ,void*) ;


 int FUNC_0 (struct obs_scene*) ;
 int FUNC_1 (struct obs_scene*) ;
 int FUNC_2 (struct obs_scene_item*) ;
 int FUNC_3 (struct obs_scene_item*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, obs_source_enum_proc_t VAR_1,
          void *VAR_2, bool VAR_3)
{
 struct obs_scene *VAR_4 = VAR_0;
 struct obs_scene_item *VAR_5;
 struct obs_scene_item *VAR_6;

 FUNC_0(VAR_4);
 VAR_5 = VAR_4->first_item;

 while (VAR_5) {
  VAR_6 = VAR_5->next;

  FUNC_2(VAR_5);
  if (!VAR_3 || FUNC_4(&VAR_5->active_refs) > 0)
   VAR_1(VAR_4->source, VAR_5->source, VAR_2);
  FUNC_3(VAR_5);

  VAR_5 = VAR_6;
 }

 FUNC_1(VAR_4);
}
