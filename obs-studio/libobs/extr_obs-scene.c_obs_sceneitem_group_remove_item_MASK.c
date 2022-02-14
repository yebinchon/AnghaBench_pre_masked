
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* parent; struct TYPE_11__* next; struct TYPE_11__* prev; int is_group; } ;
typedef TYPE_1__ obs_sceneitem_t ;
struct TYPE_12__ {TYPE_1__* first_item; } ;
typedef TYPE_2__ obs_scene_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(obs_sceneitem_t *VAR_0,
         obs_sceneitem_t *VAR_1)
{
 if (!VAR_1 || !VAR_0 || !VAR_0->is_group)
  return;

 obs_scene_t *VAR_2 = VAR_1->parent;
 obs_scene_t *VAR_3 = VAR_0->parent;



 FUNC_1(VAR_3);
 FUNC_1(VAR_2);
 FUNC_3(VAR_0, VAR_1);
 FUNC_0(VAR_1);



 if (VAR_0->prev) {
  VAR_0->prev->next = VAR_1;
  VAR_1->prev = VAR_0->prev;
 } else {
  VAR_3->first_item = VAR_1;
  VAR_1->prev = ((void*)0);
 }
 VAR_0->prev = VAR_1;
 VAR_1->next = VAR_0;
 VAR_1->parent = VAR_3;



 FUNC_4(VAR_0);
 FUNC_2(VAR_2);
 FUNC_2(VAR_3);
}
