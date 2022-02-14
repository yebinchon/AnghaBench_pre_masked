
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct devlink_sb {int index; } ;
struct devlink_port {int index; } ;
struct devlink_ops {int (* sb_port_pool_get ) (struct devlink_port*,int ,int ,int *) ;int (* sb_occ_port_pool_get ) (struct devlink_port*,int ,int ,int *,int *) ;} ;
struct devlink {struct devlink_ops* ops; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct devlink*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct devlink_port*,int ,int ,int *) ;
 int FUNC_7 (struct devlink_port*,int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_9,
     struct devlink *VAR_10,
     struct devlink_port *VAR_11,
     struct devlink_sb *VAR_12,
     u16 VAR_13,
     enum devlink_command VAR_14,
     u32 VAR_15, u32 VAR_16, int VAR_17)
{
 const struct devlink_ops *VAR_18 = VAR_10->ops;
 u32 VAR_19;
 void *VAR_20;
 int VAR_21;

 VAR_21 = VAR_18->sb_port_pool_get(VAR_11, VAR_12->index,
        VAR_13, &VAR_19);
 if (VAR_21)
  return VAR_21;

 VAR_20 = FUNC_3(VAR_9, VAR_15, VAR_16, &VAR_8, VAR_17, VAR_14);
 if (!VAR_20)
  return -VAR_6;

 if (FUNC_0(VAR_9, VAR_10))
  goto nla_put_failure;
 if (FUNC_5(VAR_9, VAR_0, VAR_11->index))
  goto nla_put_failure;
 if (FUNC_5(VAR_9, VAR_1, VAR_12->index))
  goto nla_put_failure;
 if (FUNC_4(VAR_9, VAR_4, VAR_13))
  goto nla_put_failure;
 if (FUNC_5(VAR_9, VAR_5, VAR_19))
  goto nla_put_failure;

 if (VAR_18->sb_occ_port_pool_get) {
  u32 VAR_22;
  u32 VAR_23;

  VAR_21 = VAR_18->sb_occ_port_pool_get(VAR_11, VAR_12->index,
      VAR_13, &VAR_22, &VAR_23);
  if (VAR_21 && VAR_21 != -VAR_7)
   return VAR_21;
  if (!VAR_21) {
   if (FUNC_5(VAR_9, VAR_2, VAR_22))
    goto nla_put_failure;
   if (FUNC_5(VAR_9, VAR_3, VAR_23))
    goto nla_put_failure;
  }
 }

 FUNC_2(VAR_9, VAR_20);
 return 0;

nla_put_failure:
 FUNC_1(VAR_9, VAR_20);
 return -VAR_6;
}
