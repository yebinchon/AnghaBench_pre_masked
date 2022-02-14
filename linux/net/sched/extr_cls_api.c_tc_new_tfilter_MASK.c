
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcmsg {scalar_t__ tcm_parent; int tcm_handle; int tcm_block_index; int tcm_ifindex; int tcm_info; } ;
struct tcf_proto {TYPE_3__* ops; } ;
struct tcf_chain_info {int dummy; } ;
struct tcf_chain {int filter_chain_lock; TYPE_3__* tmplt_ops; scalar_t__ flushing; } ;
struct tcf_block {TYPE_3__* ops; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int user_ns; } ;
struct Qdisc {int flags; TYPE_2__* ops; } ;
struct TYPE_6__ {int (* change ) (struct net*,struct sk_buff*,struct tcf_proto*,unsigned long,int ,struct nlattr**,void**,int ,int,struct netlink_ext_ack*) ;void* (* get ) (struct tcf_proto*,int ) ;int kind; } ;
struct TYPE_5__ {TYPE_1__* cl_ops; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct tcf_proto*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct tcf_proto*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,unsigned int) ;
 scalar_t__ FUNC_5 (int ) ;
 struct tcf_proto* FUNC_6 (struct net*,struct Qdisc*,unsigned long,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_7 (struct Qdisc*,scalar_t__,unsigned long*,int ,struct netlink_ext_ack*) ;
 int FUNC_8 (struct net*,struct Qdisc**,scalar_t__*,int ,int,struct netlink_ext_ack*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sk_buff*,int ,int ) ;
 int FUNC_12 (struct nlattr*) ;
 scalar_t__ FUNC_13 (struct nlattr*) ;
 scalar_t__ FUNC_14 (struct nlattr*,int ) ;
 struct tcmsg* FUNC_15 (struct nlmsghdr*) ;
 int FUNC_16 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int VAR_19 ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 struct net* FUNC_19 (int ) ;
 void* FUNC_20 (struct tcf_proto*,int ) ;
 int FUNC_21 (struct net*,struct sk_buff*,struct tcf_proto*,unsigned long,int ,struct nlattr**,void**,int ,int,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (struct Qdisc*,struct tcf_proto*,int) ;
 struct tcf_chain* FUNC_24 (struct tcf_proto*,scalar_t__,int) ;
 int FUNC_25 (struct tcf_chain*) ;
 int FUNC_26 (struct tcf_chain*,struct tcf_proto*,int,int *) ;
 struct tcf_proto* FUNC_27 (struct tcf_chain*,struct tcf_chain_info*,scalar_t__,scalar_t__,int) ;
 struct tcf_proto* FUNC_28 (struct tcf_chain*,struct tcf_proto*,scalar_t__,scalar_t__,int) ;
 int FUNC_29 (struct tcf_chain*,struct tcf_chain_info*) ;
 scalar_t__ FUNC_30 (struct nlattr*,char*) ;
 struct tcf_proto* FUNC_31 (int ,scalar_t__,scalar_t__,struct tcf_chain*,int,struct netlink_ext_ack*) ;
 int FUNC_32 (char*) ;
 int FUNC_33 (struct tcf_proto*,int,int *) ;
 int FUNC_34 (struct net*,struct sk_buff*,struct nlmsghdr*,struct tcf_proto*,struct tcf_proto*,struct Qdisc*,scalar_t__,void*,int ,int,int) ;
 int FUNC_35 (struct tcf_proto*,void*) ;

__attribute__((used)) static int FUNC_36(struct sk_buff *VAR_20, struct nlmsghdr *VAR_21,
     struct netlink_ext_ack *VAR_22)
{
 struct net *VAR_23 = FUNC_19(VAR_20->sk);
 struct nlattr *VAR_24[VAR_16 + 1];
 char VAR_25[VAR_7];
 struct tcmsg *VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 bool VAR_29;
 u32 VAR_30;
 u32 VAR_31;
 struct Qdisc *VAR_32 = ((void*)0);
 struct tcf_chain_info VAR_33;
 struct tcf_chain *VAR_34 = ((void*)0);
 struct tcf_block *VAR_35;
 struct tcf_proto *VAR_36;
 unsigned long VAR_37;
 void *VAR_38;
 int VAR_39;
 int VAR_40;
 bool VAR_41 = 0;

 if (!FUNC_11(VAR_20, VAR_23->user_ns, VAR_0))
  return -VAR_6;

replay:
 VAR_40 = 0;

 VAR_39 = FUNC_16(VAR_21, sizeof(*VAR_26), VAR_24, VAR_16,
         VAR_19, VAR_22);
 if (VAR_39 < 0)
  return VAR_39;

 VAR_26 = FUNC_15(VAR_21);
 VAR_27 = FUNC_5(VAR_26->tcm_info);
 VAR_28 = FUNC_3(VAR_26->tcm_info);
 VAR_29 = 0;
 VAR_30 = VAR_26->tcm_parent;
 VAR_36 = ((void*)0);
 VAR_37 = 0;
 VAR_35 = ((void*)0);

 if (VAR_28 == 0) {



  if (VAR_21->nlmsg_flags & VAR_8) {
   VAR_28 = FUNC_4(0x80000000U, 0U);
   VAR_29 = 1;
  } else {
   FUNC_1(VAR_22, "Invalid filter command with priority of zero");
   return -VAR_4;
  }
 }



 VAR_39 = FUNC_8(VAR_23, &VAR_32, &VAR_30, VAR_26->tcm_ifindex, 0, VAR_22);
 if (VAR_39)
  return VAR_39;

 if (FUNC_30(VAR_24[VAR_15], VAR_25)) {
  FUNC_1(VAR_22, "Specified TC filter name too long");
  VAR_39 = -VAR_3;
  goto errout;
 }





 if (VAR_41 ||
     (VAR_32 && !(VAR_32->ops->cl_ops->flags & VAR_10)) ||
     !FUNC_32(VAR_25)) {
  VAR_41 = 1;
  FUNC_17();
 }

 VAR_39 = FUNC_7(VAR_32, VAR_30, &VAR_37, VAR_26->tcm_ifindex, VAR_22);
 if (VAR_39)
  goto errout;

 VAR_35 = FUNC_6(VAR_23, VAR_32, VAR_37, VAR_26->tcm_ifindex, VAR_26->tcm_block_index,
     VAR_22);
 if (FUNC_0(VAR_35)) {
  VAR_39 = FUNC_2(VAR_35);
  goto errout;
 }

 VAR_31 = VAR_24[VAR_14] ? FUNC_13(VAR_24[VAR_14]) : 0;
 if (VAR_31 > VAR_18) {
  FUNC_1(VAR_22, "Specified chain index exceeds upper limit");
  VAR_39 = -VAR_3;
  goto errout;
 }
 VAR_34 = FUNC_24(VAR_35, VAR_31, 1);
 if (!VAR_34) {
  FUNC_1(VAR_22, "Cannot create specified filter chain");
  VAR_39 = -VAR_5;
  goto errout;
 }

 FUNC_9(&VAR_34->filter_chain_lock);
 VAR_36 = FUNC_27(VAR_34, &VAR_33, VAR_27,
          VAR_28, VAR_29);
 if (FUNC_0(VAR_36)) {
  FUNC_1(VAR_22, "Filter with specified priority/protocol not found");
  VAR_39 = FUNC_2(VAR_36);
  goto errout_locked;
 }

 if (VAR_36 == ((void*)0)) {
  struct tcf_proto *VAR_42 = ((void*)0);

  if (VAR_34->flushing) {
   VAR_39 = -VAR_1;
   goto errout_locked;
  }



  if (VAR_24[VAR_15] == ((void*)0) || !VAR_27) {
   FUNC_1(VAR_22, "Filter kind and protocol must be specified");
   VAR_39 = -VAR_3;
   goto errout_locked;
  }

  if (!(VAR_21->nlmsg_flags & VAR_8)) {
   FUNC_1(VAR_22, "Need both RTM_NEWTFILTER and NLM_F_CREATE to create a new filter");
   VAR_39 = -VAR_4;
   goto errout_locked;
  }

  if (VAR_29)
   VAR_28 = FUNC_22(FUNC_29(VAR_34,
              &VAR_33));

  FUNC_10(&VAR_34->filter_chain_lock);
  VAR_42 = FUNC_31(FUNC_12(VAR_24[VAR_15]),
       VAR_27, VAR_28, VAR_34, VAR_41,
       VAR_22);
  if (FUNC_0(VAR_42)) {
   VAR_39 = FUNC_2(VAR_42);
   goto errout_tp;
  }

  VAR_40 = 1;
  VAR_36 = FUNC_28(VAR_34, VAR_42, VAR_27, VAR_28,
      VAR_41);
  if (FUNC_0(VAR_36)) {
   VAR_39 = FUNC_2(VAR_36);
   goto errout_tp;
  }
 } else {
  FUNC_10(&VAR_34->filter_chain_lock);
 }

 if (VAR_24[VAR_15] && FUNC_14(VAR_24[VAR_15], VAR_36->ops->kind)) {
  FUNC_1(VAR_22, "Specified filter kind does not match existing one");
  VAR_39 = -VAR_3;
  goto errout;
 }

 VAR_38 = VAR_36->ops->get(VAR_36, VAR_26->tcm_handle);

 if (!VAR_38) {
  if (!(VAR_21->nlmsg_flags & VAR_8)) {
   FUNC_1(VAR_22, "Need both RTM_NEWTFILTER and NLM_F_CREATE to create a new filter");
   VAR_39 = -VAR_4;
   goto errout;
  }
 } else if (VAR_21->nlmsg_flags & VAR_9) {
  FUNC_35(VAR_36, VAR_38);
  FUNC_1(VAR_22, "Filter already exists");
  VAR_39 = -VAR_2;
  goto errout;
 }

 if (VAR_34->tmplt_ops && VAR_34->tmplt_ops != VAR_36->ops) {
  FUNC_1(VAR_22, "Chain template is set to a different filter kind");
  VAR_39 = -VAR_3;
  goto errout;
 }

 VAR_39 = VAR_36->ops->change(VAR_23, VAR_20, VAR_36, VAR_37, VAR_26->tcm_handle, VAR_24, &VAR_38,
         VAR_21->nlmsg_flags & VAR_8 ? VAR_12 : VAR_13,
         VAR_41, VAR_22);
 if (VAR_39 == 0) {
  FUNC_34(VAR_23, VAR_20, VAR_21, VAR_36, VAR_35, VAR_32, VAR_30, VAR_38,
          VAR_11, 0, VAR_41);
  FUNC_35(VAR_36, VAR_38);

  if (VAR_32)
   VAR_32->flags &= ~VAR_17;
 }

errout:
 if (VAR_39 && VAR_40)
  FUNC_26(VAR_34, VAR_36, VAR_41, ((void*)0));
errout_tp:
 if (VAR_34) {
  if (VAR_36 && !FUNC_0(VAR_36))
   FUNC_33(VAR_36, VAR_41, ((void*)0));
  if (!VAR_40)
   FUNC_25(VAR_34);
 }
 FUNC_23(VAR_32, VAR_35, VAR_41);

 if (VAR_41)
  FUNC_18();

 if (VAR_39 == -VAR_1) {



  VAR_41 = 1;

  goto replay;
 }
 return VAR_39;

errout_locked:
 FUNC_10(&VAR_34->filter_chain_lock);
 goto errout;
}
