
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct devlink_dpipe_table {int resource_units; int resource_id; scalar_t__ resource_valid; int counters_enabled; int name; int priv; TYPE_1__* table_ops; } ;
struct TYPE_2__ {int (* size_get ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct devlink_dpipe_table*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct devlink_dpipe_table*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_8,
       struct devlink_dpipe_table *VAR_9)
{
 struct nlattr *VAR_10;
 u64 VAR_11;

 VAR_11 = VAR_9->table_ops->size_get(VAR_9->priv);
 VAR_10 = FUNC_4(VAR_8, VAR_0);
 if (!VAR_10)
  return -VAR_7;

 if (FUNC_5(VAR_8, VAR_2, VAR_9->name) ||
     FUNC_6(VAR_8, VAR_5, VAR_11,
         VAR_6))
  goto nla_put_failure;
 if (FUNC_7(VAR_8, VAR_1,
         VAR_9->counters_enabled))
  goto nla_put_failure;

 if (VAR_9->resource_valid) {
  if (FUNC_6(VAR_8, VAR_3,
          VAR_9->resource_id, VAR_6) ||
      FUNC_6(VAR_8, VAR_4,
          VAR_9->resource_units, VAR_6))
   goto nla_put_failure;
 }
 if (FUNC_1(VAR_9, VAR_8))
  goto nla_put_failure;

 if (FUNC_0(VAR_9, VAR_8))
  goto nla_put_failure;

 FUNC_3(VAR_8, VAR_10);
 return 0;

nla_put_failure:
 FUNC_2(VAR_8, VAR_10);
 return -VAR_7;
}
