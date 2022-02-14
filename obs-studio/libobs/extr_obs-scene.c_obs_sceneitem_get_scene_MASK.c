
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; } ;
typedef TYPE_1__ obs_sceneitem_t ;
typedef int obs_scene_t ;



obs_scene_t *FUNC_0(const obs_sceneitem_t *VAR_0)
{
 return VAR_0 ? VAR_0->parent : ((void*)0);
}
