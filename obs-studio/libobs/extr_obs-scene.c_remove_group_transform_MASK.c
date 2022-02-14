
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rot; int scale; int pos; int * parent; } ;
typedef TYPE_1__ obs_sceneitem_t ;
typedef int obs_scene_t ;


 int FUNC_0 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(obs_sceneitem_t *VAR_0,
       obs_sceneitem_t *VAR_1)
{
 obs_scene_t *VAR_2 = VAR_1->parent;
 if (!VAR_2 || !VAR_0)
  return;

 FUNC_0(VAR_0, &VAR_1->pos, &VAR_1->scale, &VAR_1->rot);

 FUNC_1(VAR_1, 0);
}
