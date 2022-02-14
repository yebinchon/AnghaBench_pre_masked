
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcmsg {int tcm_block_index; int tcm_ifindex; int tcm_parent; } ;
struct tcf_chain {int explicitly_created; } ;
struct tcf_block {int lock; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_flags; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int user_ns; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct tcf_block*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct tcf_block*) ;

 int VAR_10 ;


 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct nlattr*) ;
 struct tcmsg* FUNC_7 (struct nlmsghdr*) ;
 int FUNC_8 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int VAR_14 ;
 struct net* FUNC_9 (int ) ;
 int FUNC_10 (struct tcf_chain*,struct sk_buff*,int,int,int const,int) ;
 int FUNC_11 (struct tcf_chain*,struct net*,struct nlattr**,struct netlink_ext_ack*) ;
 struct tcf_block* FUNC_12 (struct net*,struct Qdisc**,int *,unsigned long*,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_13 (struct Qdisc*,struct tcf_block*,int) ;
 struct tcf_chain* FUNC_14 (struct tcf_block*,int ) ;
 int FUNC_15 (struct tcf_chain*,int) ;
 scalar_t__ FUNC_16 (struct tcf_chain*) ;
 int FUNC_17 (struct tcf_chain*) ;
 struct tcf_chain* FUNC_18 (struct tcf_block*,int ) ;
 int FUNC_19 (struct tcf_chain*) ;
 int FUNC_20 (struct tcf_chain*) ;
 int FUNC_21 (struct net*,struct sk_buff*,struct tcf_block*,struct Qdisc*,int ,struct nlmsghdr*,struct tcf_chain*,int ,int) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_15, struct nlmsghdr *VAR_16,
   struct netlink_ext_ack *VAR_17)
{
 struct net *VAR_18 = FUNC_9(VAR_15->sk);
 struct nlattr *VAR_19[VAR_12 + 1];
 struct tcmsg *VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 struct Qdisc *VAR_23 = ((void*)0);
 struct tcf_chain *VAR_24 = ((void*)0);
 struct tcf_block *VAR_25;
 unsigned long VAR_26;
 int VAR_27;

 if (VAR_16->nlmsg_type != 129 &&
     !FUNC_5(VAR_15, VAR_18->user_ns, VAR_0))
  return -VAR_7;

replay:
 VAR_27 = FUNC_8(VAR_16, sizeof(*VAR_20), VAR_19, VAR_12,
         VAR_14, VAR_17);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_20 = FUNC_7(VAR_16);
 VAR_21 = VAR_20->tcm_parent;
 VAR_26 = 0;

 VAR_25 = FUNC_12(VAR_18, &VAR_23, &VAR_21, &VAR_26,
          VAR_20->tcm_ifindex, VAR_20->tcm_block_index, VAR_17);
 if (FUNC_0(VAR_25))
  return FUNC_2(VAR_25);

 VAR_22 = VAR_19[VAR_11] ? FUNC_6(VAR_19[VAR_11]) : 0;
 if (VAR_22 > VAR_13) {
  FUNC_1(VAR_17, "Specified chain index exceeds upper limit");
  VAR_27 = -VAR_3;
  goto errout_block;
 }

 FUNC_3(&VAR_25->lock);
 VAR_24 = FUNC_18(VAR_25, VAR_22);
 if (VAR_16->nlmsg_type == 128) {
  if (VAR_24) {
   if (FUNC_16(VAR_24)) {



    FUNC_17(VAR_24);
   } else {
    FUNC_1(VAR_17, "Filter chain already exists");
    VAR_27 = -VAR_2;
    goto errout_block_locked;
   }
  } else {
   if (!(VAR_16->nlmsg_flags & VAR_8)) {
    FUNC_1(VAR_17, "Need both RTM_NEWCHAIN and NLM_F_CREATE to create a new chain");
    VAR_27 = -VAR_4;
    goto errout_block_locked;
   }
   VAR_24 = FUNC_14(VAR_25, VAR_22);
   if (!VAR_24) {
    FUNC_1(VAR_17, "Failed to create filter chain");
    VAR_27 = -VAR_5;
    goto errout_block_locked;
   }
  }
 } else {
  if (!VAR_24 || FUNC_16(VAR_24)) {
   FUNC_1(VAR_17, "Cannot find specified filter chain");
   VAR_27 = -VAR_3;
   goto errout_block_locked;
  }
  FUNC_17(VAR_24);
 }

 if (VAR_16->nlmsg_type == 128) {





  FUNC_17(VAR_24);
  VAR_24->explicitly_created = 1;
 }
 FUNC_4(&VAR_25->lock);

 switch (VAR_16->nlmsg_type) {
 case 128:
  VAR_27 = FUNC_11(VAR_24, VAR_18, VAR_19, VAR_17);
  if (VAR_27) {
   FUNC_20(VAR_24);
   goto errout;
  }

  FUNC_10(VAR_24, ((void*)0), 0, VAR_8 | VAR_9,
    128, 0);
  break;
 case 130:
  FUNC_21(VAR_18, VAR_15, VAR_25, VAR_23, VAR_21, VAR_16,
         VAR_24, VAR_10, 1);

  FUNC_15(VAR_24, 1);



  FUNC_20(VAR_24);
  break;
 case 129:
  VAR_27 = FUNC_10(VAR_24, VAR_15, VAR_16->nlmsg_seq,
          VAR_16->nlmsg_seq, VAR_16->nlmsg_type, 1);
  if (VAR_27 < 0)
   FUNC_1(VAR_17, "Failed to send chain notify message");
  break;
 default:
  VAR_27 = -VAR_6;
  FUNC_1(VAR_17, "Unsupported message type");
  goto errout;
 }

errout:
 FUNC_19(VAR_24);
errout_block:
 FUNC_13(VAR_23, VAR_25, 1);
 if (VAR_27 == -VAR_1)

  goto replay;
 return VAR_27;

errout_block_locked:
 FUNC_4(&VAR_25->lock);
 goto errout_block;
}
