
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct devlink_sb_pool_info {int cell_size; int threshold_type; int size; int pool_type; } ;
struct devlink_sb {int index; } ;
struct devlink {TYPE_1__* ops; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;
struct TYPE_2__ {int (* sb_pool_get ) (struct devlink*,int ,int ,struct devlink_sb_pool_info*) ;} ;


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
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct devlink*,int ,int ,struct devlink_sb_pool_info*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_8, struct devlink *VAR_9,
       struct devlink_sb *VAR_10,
       u16 VAR_11, enum devlink_command VAR_12,
       u32 VAR_13, u32 VAR_14, int VAR_15)
{
 struct devlink_sb_pool_info VAR_16;
 void *VAR_17;
 int VAR_18;

 VAR_18 = VAR_9->ops->sb_pool_get(VAR_9, VAR_10->index,
     VAR_11, &VAR_16);
 if (VAR_18)
  return VAR_18;

 VAR_17 = FUNC_3(VAR_8, VAR_13, VAR_14, &VAR_7, VAR_15, VAR_12);
 if (!VAR_17)
  return -VAR_6;

 if (FUNC_0(VAR_8, VAR_9))
  goto nla_put_failure;
 if (FUNC_5(VAR_8, VAR_0, VAR_10->index))
  goto nla_put_failure;
 if (FUNC_4(VAR_8, VAR_2, VAR_11))
  goto nla_put_failure;
 if (FUNC_6(VAR_8, VAR_5, VAR_16.pool_type))
  goto nla_put_failure;
 if (FUNC_5(VAR_8, VAR_3, VAR_16.size))
  goto nla_put_failure;
 if (FUNC_6(VAR_8, VAR_4,
         VAR_16.threshold_type))
  goto nla_put_failure;
 if (FUNC_5(VAR_8, VAR_1,
   VAR_16.cell_size))
  goto nla_put_failure;

 FUNC_2(VAR_8, VAR_17);
 return 0;

nla_put_failure:
 FUNC_1(VAR_8, VAR_17);
 return -VAR_6;
}
