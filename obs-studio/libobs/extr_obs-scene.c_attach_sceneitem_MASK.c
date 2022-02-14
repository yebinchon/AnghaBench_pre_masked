
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_scene_item {struct obs_scene_item* prev; struct obs_scene_item* next; struct obs_scene* parent; } ;
struct obs_scene {struct obs_scene_item* first_item; } ;



__attribute__((used)) static inline void FUNC_0(struct obs_scene *VAR_0,
        struct obs_scene_item *VAR_1,
        struct obs_scene_item *VAR_2)
{
 VAR_1->prev = VAR_2;
 VAR_1->parent = VAR_0;

 if (VAR_2) {
  VAR_1->next = VAR_2->next;
  if (VAR_2->next)
   VAR_2->next->prev = VAR_1;
  VAR_2->next = VAR_1;
 } else {
  VAR_1->next = VAR_0->first_item;
  if (VAR_0->first_item)
   VAR_0->first_item->prev = VAR_1;
  VAR_0->first_item = VAR_1;
 }
}
