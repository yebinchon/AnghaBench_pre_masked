
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union devlink_param_value {int dummy; } devlink_param_value ;
typedef int u32 ;
struct devlink_port {int param_list; int index; int devlink; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,union devlink_param_value,int ) ;

int FUNC_1(struct devlink_port *VAR_1,
         u32 VAR_2,
         union devlink_param_value VAR_3)
{
 return FUNC_0(VAR_1->devlink,
          VAR_1->index,
          &VAR_1->param_list,
          VAR_2, VAR_3,
          VAR_0);
}
