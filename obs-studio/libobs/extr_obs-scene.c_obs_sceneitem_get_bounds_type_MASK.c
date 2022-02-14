
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bounds_type; } ;
typedef TYPE_1__ obs_sceneitem_t ;
typedef enum obs_bounds_type { ____Placeholder_obs_bounds_type } obs_bounds_type ;


 int VAR_0 ;

enum obs_bounds_type FUNC_0(const obs_sceneitem_t *VAR_1)
{
 return VAR_1 ? VAR_1->bounds_type : VAR_0;
}
