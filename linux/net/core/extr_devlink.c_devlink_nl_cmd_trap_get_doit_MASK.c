
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; struct devlink** user_ptr; struct netlink_ext_ack* extack; } ;
struct devlink_trap_item {int dummy; } ;
struct devlink {int trap_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct sk_buff*,struct devlink*,struct devlink_trap_item*,int ,int ,int ,int ) ;
 struct devlink_trap_item* FUNC_2 (struct devlink*,struct genl_info*) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_6,
     struct genl_info *VAR_7)
{
 struct netlink_ext_ack *VAR_8 = VAR_7->extack;
 struct devlink *VAR_9 = VAR_7->user_ptr[0];
 struct devlink_trap_item *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12;

 if (FUNC_4(&VAR_9->trap_list))
  return -VAR_3;

 VAR_10 = FUNC_2(VAR_9, VAR_7);
 if (!VAR_10) {
  FUNC_0(VAR_8, "Device did not register this trap");
  return -VAR_1;
 }

 VAR_11 = FUNC_6(VAR_5, VAR_4);
 if (!VAR_11)
  return -VAR_2;

 VAR_12 = FUNC_1(VAR_11, VAR_9, VAR_10,
       VAR_0, VAR_7->snd_portid,
       VAR_7->snd_seq, 0);
 if (VAR_12)
  goto err_trap_fill;

 return FUNC_3(VAR_11, VAR_7);

err_trap_fill:
 FUNC_5(VAR_11);
 return VAR_12;
}
