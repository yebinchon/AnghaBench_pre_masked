
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_param {int supported_cmodes; } ;
typedef enum devlink_param_cmode { ____Placeholder_devlink_param_cmode } devlink_param_cmode ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static bool
FUNC_1(const struct devlink_param *VAR_0,
     enum devlink_param_cmode VAR_1)
{
 return FUNC_0(VAR_1, &VAR_0->supported_cmodes);
}
