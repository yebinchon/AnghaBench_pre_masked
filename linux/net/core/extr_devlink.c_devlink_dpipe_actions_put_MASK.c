
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct devlink_dpipe_table {int priv; TYPE_1__* table_ops; } ;
struct TYPE_2__ {scalar_t__ (* actions_dump ) (int ,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct devlink_dpipe_table *VAR_2,
         struct sk_buff *VAR_3)
{
 struct nlattr *VAR_4;

 VAR_4 = FUNC_2(VAR_3,
          VAR_0);
 if (!VAR_4)
  return -VAR_1;

 if (VAR_2->table_ops->actions_dump(VAR_2->priv, VAR_3))
  goto nla_put_failure;

 FUNC_1(VAR_3, VAR_4);
 return 0;

nla_put_failure:
 FUNC_0(VAR_3, VAR_4);
 return -VAR_1;
}
