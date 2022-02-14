
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {struct TYPE_17__* next; TYPE_4__* parent; struct TYPE_17__* prev; TYPE_2__* source; int is_group; } ;
typedef TYPE_3__ obs_sceneitem_t ;
struct TYPE_18__ {TYPE_3__* first_item; } ;
typedef TYPE_4__ obs_scene_t ;
struct TYPE_15__ {TYPE_4__* data; } ;
struct TYPE_16__ {TYPE_1__ context; } ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

void FUNC_6(obs_sceneitem_t *VAR_0, obs_sceneitem_t *VAR_1)
{
 if (!VAR_0 || !VAR_0->is_group || !VAR_1)
  return;

 obs_scene_t *VAR_2 = VAR_0->parent;
 obs_scene_t *VAR_3 = VAR_0->source->context.data;
 obs_sceneitem_t *VAR_4;

 if (VAR_1->parent != VAR_2)
  return;



 FUNC_2(VAR_2);
 FUNC_4(VAR_0, VAR_1);
 FUNC_1(VAR_1);



 FUNC_2(VAR_3);
 VAR_4 = VAR_3->first_item;
 if (VAR_4) {
  for (;;) {
   if (!VAR_4->next)
    break;
   VAR_4 = VAR_4->next;
  }
  VAR_4->next = VAR_1;
  VAR_1->prev = VAR_4;
 } else {
  VAR_3->first_item = VAR_1;
 }
 VAR_1->parent = VAR_3;
 VAR_1->next = ((void*)0);
 FUNC_0(VAR_1, VAR_0);
 FUNC_5(VAR_0);
 FUNC_3(VAR_3);



 FUNC_3(VAR_2);
}
