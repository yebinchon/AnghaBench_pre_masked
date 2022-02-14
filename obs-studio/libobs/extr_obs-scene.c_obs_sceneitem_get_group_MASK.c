
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ is_group; } ;
typedef TYPE_1__ obs_sceneitem_t ;
typedef int obs_scene_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*) ;

obs_sceneitem_t *FUNC_3(obs_scene_t *VAR_0,
      obs_sceneitem_t *VAR_1)
{
 if (!VAR_0 || !VAR_1 || VAR_1->is_group)
  return ((void*)0);

 FUNC_0(VAR_0);
 obs_sceneitem_t *VAR_2 =
  FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0);

 return VAR_2;
}
