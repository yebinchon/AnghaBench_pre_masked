
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct genl_info {struct devlink** user_ptr; struct netlink_ext_ack* extack; } ;
struct devlink_trap_item {int dummy; } ;
struct devlink {int trap_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct devlink*,struct devlink_trap_item*,struct genl_info*) ;
 struct devlink_trap_item* FUNC_2 (struct devlink*,struct genl_info*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2,
     struct genl_info *VAR_3)
{
 struct netlink_ext_ack *VAR_4 = VAR_3->extack;
 struct devlink *VAR_5 = VAR_3->user_ptr[0];
 struct devlink_trap_item *VAR_6;
 int VAR_7;

 if (FUNC_3(&VAR_5->trap_list))
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_5, VAR_3);
 if (!VAR_6) {
  FUNC_0(VAR_4, "Device did not register this trap");
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_3);
 if (VAR_7)
  return VAR_7;

 return 0;
}
