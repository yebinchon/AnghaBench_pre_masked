
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct calldata {int dummy; } ;
typedef int stack ;
typedef int obs_source_t ;
struct TYPE_12__ {TYPE_2__* source; } ;
typedef TYPE_3__ obs_sceneitem_t ;
typedef TYPE_3__ obs_scene_t ;
struct TYPE_10__ {int signals; } ;
struct TYPE_11__ {TYPE_1__ context; } ;


 int FUNC_0 (struct calldata*,int *,int) ;
 int FUNC_1 (struct calldata*,char*,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,int *,int *) ;
 int FUNC_3 (int ,char*,struct calldata*) ;

obs_sceneitem_t *FUNC_4(obs_scene_t *VAR_0, obs_source_t *VAR_1)
{
 obs_sceneitem_t *VAR_2 = FUNC_2(VAR_0, VAR_1, ((void*)0));
 struct calldata VAR_3;
 uint8_t VAR_4[128];

 FUNC_0(&VAR_3, VAR_4, sizeof(VAR_4));
 FUNC_1(&VAR_3, "scene", VAR_0);
 FUNC_1(&VAR_3, "item", VAR_2);
 FUNC_3(VAR_0->source->context.signals, "item_add",
         &VAR_3);
 return VAR_2;
}
