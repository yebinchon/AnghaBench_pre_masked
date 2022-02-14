
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcamsg {scalar_t__ tca__pad2; scalar_t__ tca__pad1; int tca_family; } ;
struct tc_action_ops {int (* walk ) (struct net*,struct sk_buff*,struct netlink_callback*,int ,struct tc_action_ops const*,struct netlink_ext_ack*) ;int owner; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_flags; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_callback {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 struct tcamsg* FUNC_8 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_9 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_10 (struct sk_buff*,struct net*,int ,int ,int) ;
 unsigned char* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct net*,struct sk_buff*,struct netlink_callback*,int ,struct tc_action_ops const*,struct netlink_ext_ack*) ;
 struct tc_action_ops* FUNC_13 (struct nlattr*) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_14(struct net *VAR_13, struct nlattr *VAR_14,
       struct nlmsghdr *VAR_15, u32 VAR_16,
       struct netlink_ext_ack *VAR_17)
{
 struct sk_buff *VAR_18;
 unsigned char *VAR_19;
 struct nlmsghdr *VAR_20;
 struct tcamsg *VAR_21;
 struct netlink_callback VAR_22;
 struct nlattr *VAR_23;
 struct nlattr *VAR_24[VAR_10 + 1];
 const struct tc_action_ops *VAR_25;
 struct nlattr *VAR_26;
 int VAR_27 = -VAR_2;

 VAR_18 = FUNC_1(VAR_4, VAR_3);
 if (!VAR_18)
  return VAR_27;

 VAR_19 = FUNC_11(VAR_18);

 VAR_27 = FUNC_7(VAR_24, VAR_10, VAR_14,
       VAR_12, VAR_17);
 if (VAR_27 < 0)
  goto err_out;

 VAR_27 = -VAR_1;
 VAR_26 = VAR_24[VAR_9];
 VAR_25 = FUNC_13(VAR_26);
 if (!VAR_25) {
  FUNC_0(VAR_17, "Cannot flush unknown TC action");
  goto err_out;
 }

 VAR_20 = FUNC_9(VAR_18, VAR_16, VAR_15->nlmsg_seq, VAR_7,
   sizeof(*VAR_21), 0);
 if (!VAR_20) {
  FUNC_0(VAR_17, "Failed to create TC action flush notification");
  goto out_module_put;
 }
 VAR_21 = FUNC_8(VAR_20);
 VAR_21->tca_family = VAR_0;
 VAR_21->tca__pad1 = 0;
 VAR_21->tca__pad2 = 0;

 VAR_23 = FUNC_6(VAR_18, VAR_11);
 if (!VAR_23) {
  FUNC_0(VAR_17, "Failed to add new netlink message");
  goto out_module_put;
 }

 VAR_27 = VAR_25->walk(VAR_13, VAR_18, &VAR_22, VAR_7, VAR_25, VAR_17);
 if (VAR_27 <= 0) {
  FUNC_4(VAR_18, VAR_23);
  goto out_module_put;
 }

 FUNC_5(VAR_18, VAR_23);

 VAR_20->nlmsg_len = FUNC_11(VAR_18) - VAR_19;
 VAR_20->nlmsg_flags |= VAR_6;
 FUNC_3(VAR_25->owner);
 VAR_27 = FUNC_10(VAR_18, VAR_13, VAR_16, VAR_8,
        VAR_15->nlmsg_flags & VAR_5);
 if (VAR_27 > 0)
  return 0;
 if (VAR_27 < 0)
  FUNC_0(VAR_17, "Failed to send TC action flush notification");

 return VAR_27;

out_module_put:
 FUNC_3(VAR_25->owner);
err_out:
 FUNC_2(VAR_18);
 return VAR_27;
}
