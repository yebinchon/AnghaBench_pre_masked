
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_port {int param_list; int index; int devlink; } ;
struct devlink_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,struct devlink_param const*,size_t,int ,int ) ;

int FUNC_1(struct devlink_port *VAR_2,
     const struct devlink_param *VAR_3,
     size_t VAR_4)
{
 return FUNC_0(VAR_2->devlink,
      VAR_2->index,
      &VAR_2->param_list, VAR_3,
      VAR_4,
      VAR_1,
      VAR_0);
}
