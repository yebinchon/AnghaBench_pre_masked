
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct devlink_sb {int egress_tc_count; int ingress_tc_count; int egress_pools_count; int ingress_pools_count; int size; int index; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct devlink*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_8, struct devlink *VAR_9,
         struct devlink_sb *VAR_10,
         enum devlink_command VAR_11, u32 VAR_12,
         u32 VAR_13, int VAR_14)
{
 void *VAR_15;

 VAR_15 = FUNC_3(VAR_8, VAR_12, VAR_13, &VAR_7, VAR_14, VAR_11);
 if (!VAR_15)
  return -VAR_6;

 if (FUNC_0(VAR_8, VAR_9))
  goto nla_put_failure;
 if (FUNC_5(VAR_8, VAR_2, VAR_10->index))
  goto nla_put_failure;
 if (FUNC_5(VAR_8, VAR_5, VAR_10->size))
  goto nla_put_failure;
 if (FUNC_4(VAR_8, VAR_3,
   VAR_10->ingress_pools_count))
  goto nla_put_failure;
 if (FUNC_4(VAR_8, VAR_0,
   VAR_10->egress_pools_count))
  goto nla_put_failure;
 if (FUNC_4(VAR_8, VAR_4,
   VAR_10->ingress_tc_count))
  goto nla_put_failure;
 if (FUNC_4(VAR_8, VAR_1,
   VAR_10->egress_tc_count))
  goto nla_put_failure;

 FUNC_2(VAR_8, VAR_15);
 return 0;

nla_put_failure:
 FUNC_1(VAR_8, VAR_15);
 return -VAR_6;
}
