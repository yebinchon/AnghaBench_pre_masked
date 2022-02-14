
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_21__ {struct TYPE_21__* next; TYPE_10__* source; TYPE_3__* parent; int is_group; } ;
typedef TYPE_2__ obs_sceneitem_t ;
struct TYPE_22__ {TYPE_2__* first_item; } ;
typedef TYPE_3__ obs_scene_t ;
struct TYPE_20__ {TYPE_3__* data; } ;
struct TYPE_19__ {TYPE_1__ context; } ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int,int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,TYPE_10__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*) ;

void FUNC_8(obs_sceneitem_t *VAR_0)
{
 if (!VAR_0 || !VAR_0->is_group)
  return;

 obs_scene_t *VAR_1 = VAR_0->parent;
 obs_scene_t *VAR_2 = VAR_0->source->context.data;
 obs_sceneitem_t *VAR_3 = VAR_0;
 obs_sceneitem_t *VAR_4;
 obs_sceneitem_t *VAR_5;

 FUNC_3(VAR_1);



 FUNC_3(VAR_2);
 VAR_4 = VAR_2->first_item;
 VAR_5 = VAR_4;
 while (VAR_5) {
  obs_sceneitem_t *VAR_6;

  FUNC_7(VAR_0, VAR_5);
  VAR_6 = FUNC_5(VAR_1, VAR_5->source, VAR_3);
  FUNC_2(VAR_6, VAR_5, 1, 1, 1);
  FUNC_0(VAR_5, VAR_0);

  if (!VAR_5->next)
   break;

  VAR_3 = VAR_6;
  VAR_5 = VAR_5->next;
 }
 FUNC_4(VAR_2);



 FUNC_1(VAR_0);
 FUNC_4(VAR_1);

 FUNC_6(VAR_0);
}
