
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * private_settings; } ;
typedef TYPE_1__ obs_sceneitem_t ;
typedef int obs_data_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*) ;

obs_data_t *FUNC_2(obs_sceneitem_t *VAR_0)
{
 if (!FUNC_1(VAR_0, "obs_sceneitem_get_private_settings"))
  return ((void*)0);

 FUNC_0(VAR_0->private_settings);
 return VAR_0->private_settings;
}
