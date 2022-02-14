
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union devlink_param_value {int vstr; } ;
typedef int u32 ;
struct list_head {int dummy; } ;
struct devlink_param_item {union devlink_param_value driverinit_value; TYPE_1__* param; int driverinit_value_valid; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct devlink_param_item* FUNC_1 (struct list_head*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct list_head *VAR_4, u32 VAR_5,
         union devlink_param_value *VAR_6)
{
 struct devlink_param_item *VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_5);
 if (!VAR_7)
  return -VAR_2;

 if (!VAR_7->driverinit_value_valid ||
     !FUNC_0(VAR_7->param,
           VAR_0))
  return -VAR_3;

 if (VAR_7->param->type == VAR_1)
  FUNC_2(VAR_6->vstr, VAR_7->driverinit_value.vstr);
 else
  *VAR_6 = VAR_7->driverinit_value;

 return 0;
}
