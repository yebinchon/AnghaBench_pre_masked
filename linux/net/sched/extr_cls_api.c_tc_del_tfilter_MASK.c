
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcmsg {scalar_t__ tcm_parent; scalar_t__ tcm_handle; int tcm_block_index; int tcm_ifindex; int tcm_info; } ;
struct tcf_proto {TYPE_3__* ops; } ;
struct tcf_chain_info {int dummy; } ;
struct tcf_chain {int filter_chain_lock; } ;
struct tcf_block {TYPE_3__* ops; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int user_ns; } ;
struct Qdisc {TYPE_2__* ops; } ;
struct TYPE_6__ {void* (* get ) (struct tcf_proto*,scalar_t__) ;int kind; } ;
struct TYPE_5__ {TYPE_1__* cl_ops; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct tcf_proto*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct tcf_proto*) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct tcf_proto* FUNC_5 (struct net*,struct Qdisc*,unsigned long,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_6 (struct Qdisc*,scalar_t__,unsigned long*,int ,struct netlink_ext_ack*) ;
 int FUNC_7 (struct net*,struct Qdisc**,scalar_t__*,int ,int,struct netlink_ext_ack*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_11 (struct nlattr*) ;
 scalar_t__ FUNC_12 (struct nlattr*,int ) ;
 struct tcmsg* FUNC_13 (struct nlmsghdr*) ;
 int FUNC_14 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int VAR_11 ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 struct net* FUNC_17 (int ) ;
 void* FUNC_18 (struct tcf_proto*,scalar_t__) ;
 int FUNC_19 (struct Qdisc*,struct tcf_proto*,int) ;
 int FUNC_20 (struct tcf_chain*,int) ;
 struct tcf_chain* FUNC_21 (struct tcf_proto*,scalar_t__,int) ;
 int FUNC_22 (struct tcf_chain*) ;
 int FUNC_23 (struct tcf_chain*,struct tcf_proto*,int,struct netlink_ext_ack*) ;
 struct tcf_proto* FUNC_24 (struct tcf_chain*,struct tcf_chain_info*,scalar_t__,scalar_t__,int) ;
 int FUNC_25 (struct tcf_chain*,struct tcf_chain_info*,struct tcf_proto*) ;
 scalar_t__ FUNC_26 (struct nlattr*,char*) ;
 int FUNC_27 (char*) ;
 int FUNC_28 (struct tcf_proto*,int,int *) ;
 int FUNC_29 (struct tcf_chain*,struct tcf_proto*) ;
 int FUNC_30 (struct net*,struct sk_buff*,struct nlmsghdr*,struct tcf_proto*,struct tcf_proto*,struct Qdisc*,scalar_t__,void*,int,int*,int,struct netlink_ext_ack*) ;
 int FUNC_31 (struct net*,struct sk_buff*,struct nlmsghdr*,struct tcf_proto*,struct tcf_proto*,struct Qdisc*,scalar_t__,void*,int ,int,int) ;
 int FUNC_32 (struct net*,struct sk_buff*,struct tcf_proto*,struct Qdisc*,scalar_t__,struct nlmsghdr*,struct tcf_chain*,int ,int) ;

__attribute__((used)) static int FUNC_33(struct sk_buff *VAR_12, struct nlmsghdr *VAR_13,
     struct netlink_ext_ack *VAR_14)
{
 struct net *VAR_15 = FUNC_17(VAR_12->sk);
 struct nlattr *VAR_16[VAR_9 + 1];
 char VAR_17[VAR_4];
 struct tcmsg *VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 struct Qdisc *VAR_23 = ((void*)0);
 struct tcf_chain_info VAR_24;
 struct tcf_chain *VAR_25 = ((void*)0);
 struct tcf_block *VAR_26 = ((void*)0);
 struct tcf_proto *VAR_27 = ((void*)0);
 unsigned long VAR_28 = 0;
 void *VAR_29 = ((void*)0);
 int VAR_30;
 bool VAR_31 = 0;

 if (!FUNC_10(VAR_12, VAR_15->user_ns, VAR_0))
  return -VAR_3;

 VAR_30 = FUNC_14(VAR_13, sizeof(*VAR_18), VAR_16, VAR_9,
         VAR_11, VAR_14);
 if (VAR_30 < 0)
  return VAR_30;

 VAR_18 = FUNC_13(VAR_13);
 VAR_19 = FUNC_4(VAR_18->tcm_info);
 VAR_20 = FUNC_3(VAR_18->tcm_info);
 VAR_21 = VAR_18->tcm_parent;

 if (VAR_20 == 0 && (VAR_19 || VAR_18->tcm_handle || VAR_16[VAR_8])) {
  FUNC_1(VAR_14, "Cannot flush filters with protocol, handle or kind set");
  return -VAR_2;
 }



 VAR_30 = FUNC_7(VAR_15, &VAR_23, &VAR_21, VAR_18->tcm_ifindex, 0, VAR_14);
 if (VAR_30)
  return VAR_30;

 if (FUNC_26(VAR_16[VAR_8], VAR_17)) {
  FUNC_1(VAR_14, "Specified TC filter name too long");
  VAR_30 = -VAR_1;
  goto errout;
 }




 if (!VAR_20 ||
     (VAR_23 && !(VAR_23->ops->cl_ops->flags & VAR_5)) ||
     !FUNC_27(VAR_17)) {
  VAR_31 = 1;
  FUNC_15();
 }

 VAR_30 = FUNC_6(VAR_23, VAR_21, &VAR_28, VAR_18->tcm_ifindex, VAR_14);
 if (VAR_30)
  goto errout;

 VAR_26 = FUNC_5(VAR_15, VAR_23, VAR_28, VAR_18->tcm_ifindex, VAR_18->tcm_block_index,
     VAR_14);
 if (FUNC_0(VAR_26)) {
  VAR_30 = FUNC_2(VAR_26);
  goto errout;
 }

 VAR_22 = VAR_16[VAR_7] ? FUNC_11(VAR_16[VAR_7]) : 0;
 if (VAR_22 > VAR_10) {
  FUNC_1(VAR_14, "Specified chain index exceeds upper limit");
  VAR_30 = -VAR_1;
  goto errout;
 }
 VAR_25 = FUNC_21(VAR_26, VAR_22, 0);
 if (!VAR_25) {



  if (VAR_20 == 0) {
   VAR_30 = 0;
   goto errout;
  }
  FUNC_1(VAR_14, "Cannot find specified filter chain");
  VAR_30 = -VAR_2;
  goto errout;
 }

 if (VAR_20 == 0) {
  FUNC_32(VAR_15, VAR_12, VAR_26, VAR_23, VAR_21, VAR_13,
         VAR_25, VAR_6, VAR_31);
  FUNC_20(VAR_25, VAR_31);
  VAR_30 = 0;
  goto errout;
 }

 FUNC_8(&VAR_25->filter_chain_lock);
 VAR_27 = FUNC_24(VAR_25, &VAR_24, VAR_19,
          VAR_20, 0);
 if (!VAR_27 || FUNC_0(VAR_27)) {
  FUNC_1(VAR_14, "Filter with specified priority/protocol not found");
  VAR_30 = VAR_27 ? FUNC_2(VAR_27) : -VAR_2;
  goto errout_locked;
 } else if (VAR_16[VAR_8] && FUNC_12(VAR_16[VAR_8], VAR_27->ops->kind)) {
  FUNC_1(VAR_14, "Specified filter kind does not match existing one");
  VAR_30 = -VAR_1;
  goto errout_locked;
 } else if (VAR_18->tcm_handle == 0) {
  FUNC_29(VAR_25, VAR_27);
  FUNC_25(VAR_25, &VAR_24, VAR_27);
  FUNC_9(&VAR_25->filter_chain_lock);

  FUNC_28(VAR_27, VAR_31, ((void*)0));
  FUNC_31(VAR_15, VAR_12, VAR_13, VAR_27, VAR_26, VAR_23, VAR_21, VAR_29,
          VAR_6, 0, VAR_31);
  VAR_30 = 0;
  goto errout;
 }
 FUNC_9(&VAR_25->filter_chain_lock);

 VAR_29 = VAR_27->ops->get(VAR_27, VAR_18->tcm_handle);

 if (!VAR_29) {
  FUNC_1(VAR_14, "Specified filter handle not found");
  VAR_30 = -VAR_2;
 } else {
  bool VAR_32;

  VAR_30 = FUNC_30(VAR_15, VAR_12, VAR_13, VAR_27, VAR_26,
      VAR_23, VAR_21, VAR_29, 0, &VAR_32,
      VAR_31, VAR_14);

  if (VAR_30)
   goto errout;
  if (VAR_32)
   FUNC_23(VAR_25, VAR_27, VAR_31, VAR_14);
 }

errout:
 if (VAR_25) {
  if (VAR_27 && !FUNC_0(VAR_27))
   FUNC_28(VAR_27, VAR_31, ((void*)0));
  FUNC_22(VAR_25);
 }
 FUNC_19(VAR_23, VAR_26, VAR_31);

 if (VAR_31)
  FUNC_16();

 return VAR_30;

errout_locked:
 FUNC_9(&VAR_25->filter_chain_lock);
 goto errout;
}
