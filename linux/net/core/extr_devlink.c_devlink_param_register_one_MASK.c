
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct devlink_param_item {int list; struct devlink_param const* param; } ;
struct devlink_param {scalar_t__ supported_cmodes; scalar_t__ set; scalar_t__ get; int name; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct list_head*,int ) ;
 int FUNC_3 (struct devlink*,unsigned int,struct devlink_param_item*,int) ;
 struct devlink_param_item* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_6(struct devlink *VAR_4,
          unsigned int VAR_5,
          struct list_head *VAR_6,
          const struct devlink_param *VAR_7,
          enum devlink_command VAR_8)
{
 struct devlink_param_item *VAR_9;

 if (FUNC_2(VAR_6, VAR_7->name))
  return -VAR_1;

 if (VAR_7->supported_cmodes == FUNC_0(VAR_0))
  FUNC_1(VAR_7->get || VAR_7->set);
 else
  FUNC_1(!VAR_7->get || !VAR_7->set);

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;
 VAR_9->param = VAR_7;

 FUNC_5(&VAR_9->list, VAR_6);
 FUNC_3(VAR_4, VAR_5, VAR_9, VAR_8);
 return 0;
}
