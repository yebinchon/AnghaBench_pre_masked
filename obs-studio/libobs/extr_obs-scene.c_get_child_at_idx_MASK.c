
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct obs_scene_item {int * source; struct obs_scene_item* next; } ;
typedef int obs_source_t ;
struct TYPE_3__ {struct obs_scene_item* first_item; } ;
typedef TYPE_1__ obs_scene_t ;



__attribute__((used)) static obs_source_t *FUNC_0(obs_scene_t *VAR_0, size_t VAR_1)
{
 struct obs_scene_item *VAR_2 = VAR_0->first_item;

 while (VAR_2 && VAR_1--)
  VAR_2 = VAR_2->next;
 return VAR_2 ? VAR_2->source : ((void*)0);
}
