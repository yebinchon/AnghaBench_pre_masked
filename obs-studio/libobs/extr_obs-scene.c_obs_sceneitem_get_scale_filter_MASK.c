
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scale_filter; } ;
typedef TYPE_1__ obs_sceneitem_t ;
typedef enum obs_scale_type { ____Placeholder_obs_scale_type } obs_scale_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*) ;

enum obs_scale_type FUNC_1(obs_sceneitem_t *VAR_1)
{
 return FUNC_0(VAR_1, "obs_sceneitem_get_scale_filter")
         ? VAR_1->scale_filter
         : VAR_0;
}
