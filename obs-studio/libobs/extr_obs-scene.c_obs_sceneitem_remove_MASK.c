
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int removed; TYPE_2__* parent; } ;
typedef TYPE_1__ obs_sceneitem_t ;
struct TYPE_11__ {int * source; } ;
typedef TYPE_2__ obs_scene_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(obs_sceneitem_t *VAR_0)
{
 obs_scene_t *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->parent;

 FUNC_2(VAR_1);

 if (VAR_0->removed) {
  if (VAR_1)
   FUNC_3(VAR_1);
  return;
 }

 VAR_0->removed = 1;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_1->source != ((void*)0));

 FUNC_5(VAR_0, 0);

 FUNC_6(VAR_0);
 FUNC_1(VAR_0);

 FUNC_3(VAR_1);

 FUNC_4(VAR_0);
}
