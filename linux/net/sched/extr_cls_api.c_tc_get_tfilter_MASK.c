
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
struct tcf_chain {int filter_chain_lock; } ;
struct tcf_block {TYPE_3__* ops; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct Qdisc {TYPE_2__* ops; } ;
struct TYPE_6__ {void* (* get ) (struct tcf_proto*,int ) ;int kind; } ;
struct TYPE_5__ {TYPE_1__* cl_ops; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tcf_proto*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct tcf_proto*) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct tcf_proto* FUNC_5 (struct net*,struct Qdisc*,unsigned long,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_6 (struct Qdisc*,scalar_t__,unsigned long*,int ,struct netlink_ext_ack*) ;
 int FUNC_7 (struct net*,struct Qdisc**,scalar_t__*,int ,int,struct netlink_ext_ack*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct nlattr*) ;
 scalar_t__ FUNC_11 (struct nlattr*,int ) ;
 struct tcmsg* FUNC_12 (struct nlmsghdr*) ;
 int FUNC_13 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int VAR_9 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 struct net* FUNC_16 (int ) ;
 void* FUNC_17 (struct tcf_proto*,int ) ;
 int FUNC_18 (struct Qdisc*,struct tcf_proto*,int) ;
 struct tcf_chain* FUNC_19 (struct tcf_proto*,scalar_t__,int) ;
 int FUNC_20 (struct tcf_chain*) ;
 struct tcf_proto* FUNC_21 (struct tcf_chain*,struct tcf_chain_info*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_22 (struct nlattr*,char*) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (struct tcf_proto*,int,int *) ;
 int FUNC_25 (struct net*,struct sk_buff*,struct nlmsghdr*,struct tcf_proto*,struct tcf_proto*,struct Qdisc*,scalar_t__,void*,int ,int,int) ;
 int FUNC_26 (struct tcf_proto*,void*) ;

__attribute__((used)) static int FUNC_27(struct sk_buff *VAR_10, struct nlmsghdr *VAR_11,
     struct netlink_ext_ack *VAR_12)
{
 struct net *VAR_13 = FUNC_16(VAR_10->sk);
 struct nlattr *VAR_14[VAR_7 + 1];
 char VAR_15[VAR_2];
 struct tcmsg *VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 struct Qdisc *VAR_21 = ((void*)0);
 struct tcf_chain_info VAR_22;
 struct tcf_chain *VAR_23 = ((void*)0);
 struct tcf_block *VAR_24 = ((void*)0);
 struct tcf_proto *VAR_25 = ((void*)0);
 unsigned long VAR_26 = 0;
 void *VAR_27 = ((void*)0);
 int VAR_28;
 bool VAR_29 = 0;

 VAR_28 = FUNC_13(VAR_11, sizeof(*VAR_16), VAR_14, VAR_7,
         VAR_9, VAR_12);
 if (VAR_28 < 0)
  return VAR_28;

 VAR_16 = FUNC_12(VAR_11);
 VAR_17 = FUNC_4(VAR_16->tcm_info);
 VAR_18 = FUNC_3(VAR_16->tcm_info);
 VAR_19 = VAR_16->tcm_parent;

 if (VAR_18 == 0) {
  FUNC_1(VAR_12, "Invalid filter command with priority of zero");
  return -VAR_1;
 }



 VAR_28 = FUNC_7(VAR_13, &VAR_21, &VAR_19, VAR_16->tcm_ifindex, 0, VAR_12);
 if (VAR_28)
  return VAR_28;

 if (FUNC_22(VAR_14[VAR_6], VAR_15)) {
  FUNC_1(VAR_12, "Specified TC filter name too long");
  VAR_28 = -VAR_0;
  goto errout;
 }




 if ((VAR_21 && !(VAR_21->ops->cl_ops->flags & VAR_3)) ||
     !FUNC_23(VAR_15)) {
  VAR_29 = 1;
  FUNC_14();
 }

 VAR_28 = FUNC_6(VAR_21, VAR_19, &VAR_26, VAR_16->tcm_ifindex, VAR_12);
 if (VAR_28)
  goto errout;

 VAR_24 = FUNC_5(VAR_13, VAR_21, VAR_26, VAR_16->tcm_ifindex, VAR_16->tcm_block_index,
     VAR_12);
 if (FUNC_0(VAR_24)) {
  VAR_28 = FUNC_2(VAR_24);
  goto errout;
 }

 VAR_20 = VAR_14[VAR_5] ? FUNC_10(VAR_14[VAR_5]) : 0;
 if (VAR_20 > VAR_8) {
  FUNC_1(VAR_12, "Specified chain index exceeds upper limit");
  VAR_28 = -VAR_0;
  goto errout;
 }
 VAR_23 = FUNC_19(VAR_24, VAR_20, 0);
 if (!VAR_23) {
  FUNC_1(VAR_12, "Cannot find specified filter chain");
  VAR_28 = -VAR_0;
  goto errout;
 }

 FUNC_8(&VAR_23->filter_chain_lock);
 VAR_25 = FUNC_21(VAR_23, &VAR_22, VAR_17,
          VAR_18, 0);
 FUNC_9(&VAR_23->filter_chain_lock);
 if (!VAR_25 || FUNC_0(VAR_25)) {
  FUNC_1(VAR_12, "Filter with specified priority/protocol not found");
  VAR_28 = VAR_25 ? FUNC_2(VAR_25) : -VAR_1;
  goto errout;
 } else if (VAR_14[VAR_6] && FUNC_11(VAR_14[VAR_6], VAR_25->ops->kind)) {
  FUNC_1(VAR_12, "Specified filter kind does not match existing one");
  VAR_28 = -VAR_0;
  goto errout;
 }

 VAR_27 = VAR_25->ops->get(VAR_25, VAR_16->tcm_handle);

 if (!VAR_27) {
  FUNC_1(VAR_12, "Specified filter handle not found");
  VAR_28 = -VAR_1;
 } else {
  VAR_28 = FUNC_25(VAR_13, VAR_10, VAR_11, VAR_25, VAR_24, VAR_21, VAR_19,
         VAR_27, VAR_4, 1, VAR_29);
  if (VAR_28 < 0)
   FUNC_1(VAR_12, "Failed to send filter notify message");
 }

 FUNC_26(VAR_25, VAR_27);
errout:
 if (VAR_23) {
  if (VAR_25 && !FUNC_0(VAR_25))
   FUNC_24(VAR_25, VAR_29, ((void*)0));
  FUNC_20(VAR_23);
 }
 FUNC_18(VAR_21, VAR_24, VAR_29);

 if (VAR_29)
  FUNC_15();

 return VAR_28;
}
