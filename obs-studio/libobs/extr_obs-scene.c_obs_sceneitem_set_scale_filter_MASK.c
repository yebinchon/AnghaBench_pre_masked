
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scale_filter; int update_transform; } ;
typedef TYPE_1__ obs_sceneitem_t ;
typedef enum obs_scale_type { ____Placeholder_obs_scale_type } obs_scale_type ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(obs_sceneitem_t *VAR_0,
        enum obs_scale_type VAR_1)
{
 if (!FUNC_0(VAR_0, "obs_sceneitem_set_scale_filter"))
  return;

 VAR_0->scale_filter = VAR_1;

 FUNC_1(&VAR_0->update_transform, 1);
}
