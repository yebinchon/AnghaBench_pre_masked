
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int name; int ifindex; } ;
struct ib_device {int name; int ifindex; } ;
struct devlink_port {scalar_t__ type; scalar_t__ desired_type; int type_lock; struct net_device* type_dev; int index; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct devlink_port*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct devlink*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_11, struct devlink *VAR_12,
    struct devlink_port *VAR_13,
    enum devlink_command VAR_14, u32 VAR_15,
    u32 VAR_16, int VAR_17)
{
 void *VAR_18;

 VAR_18 = FUNC_4(VAR_11, VAR_15, VAR_16, &VAR_10, VAR_17, VAR_14);
 if (!VAR_18)
  return -VAR_9;

 if (FUNC_1(VAR_11, VAR_12))
  goto nla_put_failure;
 if (FUNC_7(VAR_11, VAR_2, VAR_13->index))
  goto nla_put_failure;

 FUNC_8(&VAR_13->type_lock);
 if (FUNC_6(VAR_11, VAR_5, VAR_13->type))
  goto nla_put_failure_type_locked;
 if (VAR_13->desired_type != VAR_8 &&
     FUNC_6(VAR_11, VAR_0,
   VAR_13->desired_type))
  goto nla_put_failure_type_locked;
 if (VAR_13->type == VAR_6) {
  struct net_device *VAR_19 = VAR_13->type_dev;

  if (VAR_19 &&
      (FUNC_7(VAR_11, VAR_3,
     VAR_19->ifindex) ||
       FUNC_5(VAR_11, VAR_4,
        VAR_19->name)))
   goto nla_put_failure_type_locked;
 }
 if (VAR_13->type == VAR_7) {
  struct ib_device *VAR_20 = VAR_13->type_dev;

  if (VAR_20 &&
      FUNC_5(VAR_11, VAR_1,
       VAR_20->name))
   goto nla_put_failure_type_locked;
 }
 FUNC_9(&VAR_13->type_lock);
 if (FUNC_0(VAR_11, VAR_13))
  goto nla_put_failure;

 FUNC_3(VAR_11, VAR_18);
 return 0;

nla_put_failure_type_locked:
 FUNC_9(&VAR_13->type_lock);
nla_put_failure:
 FUNC_2(VAR_11, VAR_18);
 return -VAR_9;
}
