
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct devlink_info_req {struct sk_buff* msg; } ;
struct devlink {TYPE_1__* ops; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;
struct TYPE_2__ {int (* info_get ) (struct devlink*,struct devlink_info_req*,struct netlink_ext_ack*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct devlink*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int,int) ;
 int FUNC_4 (struct devlink*,struct devlink_info_req*,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_2, struct devlink *VAR_3,
       enum devlink_command VAR_4, u32 VAR_5,
       u32 VAR_6, int VAR_7, struct netlink_ext_ack *VAR_8)
{
 struct devlink_info_req VAR_9;
 void *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_2, VAR_5, VAR_6, &VAR_1, VAR_7, VAR_4);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = -VAR_0;
 if (FUNC_0(VAR_2, VAR_3))
  goto err_cancel_msg;

 VAR_9.msg = VAR_2;
 VAR_11 = VAR_3->ops->info_get(VAR_3, &VAR_9, VAR_8);
 if (VAR_11)
  goto err_cancel_msg;

 FUNC_2(VAR_2, VAR_10);
 return 0;

err_cancel_msg:
 FUNC_1(VAR_2, VAR_10);
 return VAR_11;
}
