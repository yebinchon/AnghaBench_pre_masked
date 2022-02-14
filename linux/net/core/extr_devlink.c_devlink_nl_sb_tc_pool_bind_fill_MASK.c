
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct devlink_sb {int index; } ;
struct devlink_port {int index; } ;
struct devlink_ops {int (* sb_tc_pool_bind_get ) (struct devlink_port*,int ,int ,int,int *,int *) ;int (* sb_occ_tc_port_bind_get ) (struct devlink_port*,int ,int ,int,int *,int *) ;} ;
struct devlink {struct devlink_ops* ops; } ;
typedef enum devlink_sb_pool_type { ____Placeholder_devlink_sb_pool_type } devlink_sb_pool_type ;
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
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct devlink*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (struct devlink_port*,int ,int ,int,int *,int *) ;
 int FUNC_8 (struct devlink_port*,int ,int ,int,int *,int *) ;

__attribute__((used)) static int
FUNC_9(struct sk_buff *VAR_11, struct devlink *VAR_12,
    struct devlink_port *VAR_13,
    struct devlink_sb *VAR_14, u16 VAR_15,
    enum devlink_sb_pool_type VAR_16,
    enum devlink_command VAR_17,
    u32 VAR_18, u32 VAR_19, int VAR_20)
{
 const struct devlink_ops *VAR_21 = VAR_12->ops;
 u16 VAR_22;
 u32 VAR_23;
 void *VAR_24;
 int VAR_25;

 VAR_25 = VAR_21->sb_tc_pool_bind_get(VAR_13, VAR_14->index,
           VAR_15, VAR_16,
           &VAR_22, &VAR_23);
 if (VAR_25)
  return VAR_25;

 VAR_24 = FUNC_3(VAR_11, VAR_18, VAR_19, &VAR_10, VAR_20, VAR_17);
 if (!VAR_24)
  return -VAR_8;

 if (FUNC_0(VAR_11, VAR_12))
  goto nla_put_failure;
 if (FUNC_5(VAR_11, VAR_0, VAR_13->index))
  goto nla_put_failure;
 if (FUNC_5(VAR_11, VAR_1, VAR_14->index))
  goto nla_put_failure;
 if (FUNC_4(VAR_11, VAR_6, VAR_15))
  goto nla_put_failure;
 if (FUNC_6(VAR_11, VAR_5, VAR_16))
  goto nla_put_failure;
 if (FUNC_4(VAR_11, VAR_4, VAR_22))
  goto nla_put_failure;
 if (FUNC_5(VAR_11, VAR_7, VAR_23))
  goto nla_put_failure;

 if (VAR_21->sb_occ_tc_port_bind_get) {
  u32 VAR_26;
  u32 VAR_27;

  VAR_25 = VAR_21->sb_occ_tc_port_bind_get(VAR_13,
         VAR_14->index,
         VAR_15, VAR_16,
         &VAR_26, &VAR_27);
  if (VAR_25 && VAR_25 != -VAR_9)
   return VAR_25;
  if (!VAR_25) {
   if (FUNC_5(VAR_11, VAR_2, VAR_26))
    goto nla_put_failure;
   if (FUNC_5(VAR_11, VAR_3, VAR_27))
    goto nla_put_failure;
  }
 }

 FUNC_2(VAR_11, VAR_24);
 return 0;

nla_put_failure:
 FUNC_1(VAR_11, VAR_24);
 return -VAR_8;
}
