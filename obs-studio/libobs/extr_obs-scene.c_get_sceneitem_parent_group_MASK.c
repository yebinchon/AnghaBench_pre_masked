
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ parent; struct TYPE_10__* next; TYPE_2__* source; scalar_t__ is_group; } ;
typedef TYPE_3__ obs_sceneitem_t ;
struct TYPE_11__ {TYPE_3__* first_item; } ;
typedef TYPE_4__ obs_scene_t ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_9__ {TYPE_1__ context; } ;



__attribute__((used)) static obs_sceneitem_t *
FUNC_0(obs_scene_t *VAR_0, obs_sceneitem_t *VAR_1)
{
 if (VAR_1->is_group)
  return ((void*)0);

 obs_sceneitem_t *VAR_2 = VAR_0->first_item;
 while (VAR_2) {
  if (VAR_2->is_group &&
      VAR_2->source->context.data == VAR_1->parent)
   return VAR_2;
  VAR_2 = VAR_2->next;
 }

 return ((void*)0);
}
