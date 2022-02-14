
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct devlink_trap_group_item {int stats; TYPE_1__* group; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;
struct TYPE_2__ {scalar_t__ generic; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct devlink*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct sk_buff *VAR_4, struct devlink *VAR_5,
      const struct devlink_trap_group_item *VAR_6,
      enum devlink_command VAR_7, u32 VAR_8, u32 VAR_9,
      int VAR_10)
{
 void *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_4, VAR_8, VAR_9, &VAR_3, VAR_10, VAR_7);
 if (!VAR_11)
  return -VAR_2;

 if (FUNC_0(VAR_4, VAR_5))
  goto nla_put_failure;

 if (FUNC_6(VAR_4, VAR_1,
      VAR_6->group->name))
  goto nla_put_failure;

 if (VAR_6->group->generic &&
     FUNC_5(VAR_4, VAR_0))
  goto nla_put_failure;

 VAR_12 = FUNC_1(VAR_4, VAR_6->stats);
 if (VAR_12)
  goto nla_put_failure;

 FUNC_3(VAR_4, VAR_11);

 return 0;

nla_put_failure:
 FUNC_2(VAR_4, VAR_11);
 return -VAR_2;
}
