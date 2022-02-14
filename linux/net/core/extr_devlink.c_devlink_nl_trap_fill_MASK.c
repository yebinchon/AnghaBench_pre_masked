
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct devlink_trap_item {int stats; TYPE_2__* trap; int action; struct devlink_trap_group_item* group_item; } ;
struct devlink_trap_group_item {TYPE_1__* group; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;
struct TYPE_4__ {scalar_t__ generic; int type; int name; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct devlink*) ;
 int FUNC_1 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (struct sk_buff*,void*) ;
 void* FUNC_5 (struct sk_buff*,int ,int ,int *,int,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_7, struct devlink *VAR_8,
    const struct devlink_trap_item *VAR_9,
    enum devlink_command VAR_10, u32 VAR_11, u32 VAR_12,
    int VAR_13)
{
 struct devlink_trap_group_item *VAR_14 = VAR_9->group_item;
 void *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_5(VAR_7, VAR_11, VAR_12, &VAR_6, VAR_13, VAR_10);
 if (!VAR_15)
  return -VAR_5;

 if (FUNC_0(VAR_7, VAR_8))
  goto nla_put_failure;

 if (FUNC_7(VAR_7, VAR_2,
      VAR_14->group->name))
  goto nla_put_failure;

 if (FUNC_7(VAR_7, VAR_3, VAR_9->trap->name))
  goto nla_put_failure;

 if (FUNC_8(VAR_7, VAR_4, VAR_9->trap->type))
  goto nla_put_failure;

 if (VAR_9->trap->generic &&
     FUNC_6(VAR_7, VAR_1))
  goto nla_put_failure;

 if (FUNC_8(VAR_7, VAR_0, VAR_9->action))
  goto nla_put_failure;

 VAR_16 = FUNC_1(VAR_7, VAR_9->trap);
 if (VAR_16)
  goto nla_put_failure;

 VAR_16 = FUNC_2(VAR_7, VAR_9->stats);
 if (VAR_16)
  goto nla_put_failure;

 FUNC_4(VAR_7, VAR_15);

 return 0;

nla_put_failure:
 FUNC_3(VAR_7, VAR_15);
 return -VAR_5;
}
