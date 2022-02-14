
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct tcamsg {scalar_t__ tca__pad2; scalar_t__ tca__pad1; int tca_family; } ;
struct tc_action_ops {int (* walk ) (struct net*,struct sk_buff*,struct netlink_callback*,int ,struct tc_action_ops*,int *) ;int owner; } ;
struct sk_buff {int len; int sk; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_flags; int nlmsg_type; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct nla_bitfield32 {unsigned long value; } ;
struct netlink_callback {unsigned long* args; int skb; struct nlmsghdr* nlh; int extack; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ portid; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 struct nlattr* FUNC_1 (struct nlattr**) ;
 unsigned long VAR_8 ;
 int FUNC_2 (int ,unsigned long*,int) ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (unsigned long) ;
 int FUNC_5 (struct nlattr*) ;
 struct nla_bitfield32 FUNC_6 (struct nlattr*) ;
 unsigned long FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_9 (struct sk_buff*,int ) ;
 struct nlattr* FUNC_10 (struct sk_buff*,int ,int) ;
 struct tcamsg* FUNC_11 (struct nlmsghdr*) ;
 int FUNC_12 (struct nlmsghdr*,int,struct nlattr**,int ,int ,int ) ;
 struct nlmsghdr* FUNC_13 (struct sk_buff*,scalar_t__,int ,int ,int,int ) ;
 int FUNC_14 (struct sk_buff*,unsigned char*) ;
 int FUNC_15 (char*) ;
 unsigned char* FUNC_16 (struct sk_buff*) ;
 struct net* FUNC_17 (int ) ;
 int FUNC_18 (struct net*,struct sk_buff*,struct netlink_callback*,int ,struct tc_action_ops*,int *) ;
 struct tc_action_ops* FUNC_19 (struct nlattr*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_20(struct sk_buff *VAR_10, struct netlink_callback *VAR_11)
{
 struct net *VAR_12 = FUNC_17(VAR_10->sk);
 struct nlmsghdr *VAR_13;
 unsigned char *VAR_14 = FUNC_16(VAR_10);
 struct nlattr *VAR_15;
 struct tc_action_ops *VAR_16;
 int VAR_17 = 0;
 struct tcamsg *VAR_18 = (struct tcamsg *) FUNC_11(VAR_11->nlh);
 struct nlattr *VAR_19[VAR_6 + 1];
 struct nlattr *VAR_20 = ((void*)0);
 unsigned long VAR_21 = 0;
 struct nlattr *VAR_22 = ((void*)0);
 struct nla_bitfield32 VAR_23;
 u32 VAR_24 = 0;
 u32 VAR_25 = 0;

 VAR_17 = FUNC_12(VAR_11->nlh, sizeof(struct tcamsg), VAR_19,
         VAR_6, VAR_9, VAR_11->extack);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_22 = FUNC_1(VAR_19);
 if (VAR_22 == ((void*)0)) {
  FUNC_15("tc_dump_action: action bad kind\n");
  return 0;
 }

 VAR_16 = FUNC_19(VAR_22);
 if (VAR_16 == ((void*)0))
  return 0;

 VAR_11->args[2] = 0;
 if (VAR_19[VAR_5]) {
  VAR_23 = FUNC_6(VAR_19[VAR_5]);
  VAR_11->args[2] = VAR_23.value;
 }

 if (VAR_19[VAR_7]) {
  VAR_24 = FUNC_7(VAR_19[VAR_7]);
 }

 VAR_13 = FUNC_13(VAR_10, FUNC_0(VAR_11->skb).portid, VAR_11->nlh->nlmsg_seq,
   VAR_11->nlh->nlmsg_type, sizeof(*VAR_18), 0);
 if (!VAR_13)
  goto out_module_put;

 if (VAR_24)
  VAR_21 = VAR_8 - FUNC_4(VAR_24);

 VAR_18 = FUNC_11(VAR_13);
 VAR_18->tca_family = VAR_0;
 VAR_18->tca__pad1 = 0;
 VAR_18->tca__pad2 = 0;
 VAR_11->args[3] = VAR_21;
 VAR_20 = FUNC_10(VAR_10, VAR_4, sizeof(u32));
 if (!VAR_20)
  goto out_module_put;

 VAR_15 = FUNC_9(VAR_10, VAR_3);
 if (VAR_15 == ((void*)0))
  goto out_module_put;

 VAR_17 = VAR_16->walk(VAR_12, VAR_10, VAR_11, VAR_2, VAR_16, ((void*)0));
 if (VAR_17 < 0)
  goto out_module_put;

 if (VAR_17 > 0) {
  FUNC_8(VAR_10, VAR_15);
  VAR_17 = VAR_10->len;
  VAR_25 = VAR_11->args[1];
  FUNC_2(FUNC_5(VAR_20), &VAR_25, sizeof(u32));
  VAR_11->args[1] = 0;
 } else
  FUNC_14(VAR_10, VAR_14);

 VAR_13->nlmsg_len = FUNC_16(VAR_10) - VAR_14;
 if (FUNC_0(VAR_11->skb).portid && VAR_17)
  VAR_13->nlmsg_flags |= VAR_1;
 FUNC_3(VAR_16->owner);
 return VAR_10->len;

out_module_put:
 FUNC_3(VAR_16->owner);
 FUNC_14(VAR_10, VAR_14);
 return VAR_10->len;
}
