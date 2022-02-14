
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union devlink_param_value {int vstr; } ;
typedef int u32 ;
struct list_head {int dummy; } ;
struct devlink_param_item {int driverinit_value_valid; union devlink_param_value driverinit_value; TYPE_1__* param; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct devlink_param_item* FUNC_1 (struct list_head*,int ) ;
 int FUNC_2 (struct devlink*,unsigned int,struct devlink_param_item*,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct devlink *VAR_4,
         unsigned int VAR_5,
         struct list_head *VAR_6, u32 VAR_7,
         union devlink_param_value VAR_8,
         enum devlink_command VAR_9)
{
 struct devlink_param_item *VAR_10;

 VAR_10 = FUNC_1(VAR_6, VAR_7);
 if (!VAR_10)
  return -VAR_2;

 if (!FUNC_0(VAR_10->param,
           VAR_0))
  return -VAR_3;

 if (VAR_10->param->type == VAR_1)
  FUNC_3(VAR_10->driverinit_value.vstr, VAR_8.vstr);
 else
  VAR_10->driverinit_value = VAR_8;
 VAR_10->driverinit_value_valid = 1;

 FUNC_2(VAR_4, VAR_5, VAR_10, VAR_9);
 return 0;
}
