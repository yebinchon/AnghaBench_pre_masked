
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcmsg {scalar_t__ tcm_ifindex; scalar_t__ tcm_parent; int tcm_block_index; } ;
struct tcf_chain {scalar_t__ index; } ;
struct tcf_block {int dummy; } ;
struct sk_buff {int len; int sk; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {long* args; int extack; int nlh; } ;
struct net_device {struct Qdisc* qdisc; } ;
struct net {int dummy; } ;
struct Qdisc_class_ops {unsigned long (* find ) (struct Qdisc*,scalar_t__) ;struct tcf_block* (* tcf_block ) (struct Qdisc*,unsigned long,int *) ;} ;
struct Qdisc {TYPE_1__* ops; scalar_t__ handle; } ;
struct TYPE_2__ {struct Qdisc_class_ops* cl_ops; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct net_device* FUNC_2 (struct net*,scalar_t__) ;
 struct tcf_chain* FUNC_3 (struct tcf_block*,struct tcf_chain*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 struct tcmsg* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,struct nlattr**,int ,int *,int ) ;
 struct Qdisc* FUNC_8 (struct net_device*,int ) ;
 struct net* FUNC_9 (int ) ;
 unsigned long FUNC_10 (struct Qdisc*,scalar_t__) ;
 struct tcf_block* FUNC_11 (struct Qdisc*,unsigned long,int *) ;
 struct tcf_block* FUNC_12 (struct net*,int ) ;
 int FUNC_13 (struct tcf_block*,int) ;
 scalar_t__ FUNC_14 (struct tcf_block*) ;
 int FUNC_15 (struct tcf_chain*,struct Qdisc*,scalar_t__,struct sk_buff*,struct netlink_callback*,long,long*) ;
 int FUNC_16 (struct tcf_chain*) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_4, struct netlink_callback *VAR_5)
{
 struct tcf_chain *VAR_6, *VAR_7;
 struct net *VAR_8 = FUNC_9(VAR_4->sk);
 struct nlattr *VAR_9[VAR_2 + 1];
 struct Qdisc *VAR_10 = ((void*)0);
 struct tcf_block *VAR_11;
 struct tcmsg *VAR_12 = FUNC_5(VAR_5->nlh);
 long VAR_13;
 long VAR_14;
 u32 VAR_15;
 int VAR_16;

 if (FUNC_6(VAR_5->nlh) < sizeof(*VAR_12))
  return VAR_4->len;

 VAR_16 = FUNC_7(VAR_5->nlh, sizeof(*VAR_12), VAR_9, VAR_2,
         ((void*)0), VAR_5->extack);
 if (VAR_16)
  return VAR_16;

 if (VAR_12->tcm_ifindex == VAR_3) {
  VAR_11 = FUNC_12(VAR_8, VAR_12->tcm_block_index);
  if (!VAR_11)
   goto out;






  VAR_15 = 0;
 } else {
  const struct Qdisc_class_ops *VAR_17;
  struct net_device *VAR_18;
  unsigned long VAR_19 = 0;

  VAR_18 = FUNC_2(VAR_8, VAR_12->tcm_ifindex);
  if (!VAR_18)
   return VAR_4->len;

  VAR_15 = VAR_12->tcm_parent;
  if (!VAR_15) {
   VAR_10 = VAR_18->qdisc;
   VAR_15 = VAR_10->handle;
  } else {
   VAR_10 = FUNC_8(VAR_18, FUNC_0(VAR_12->tcm_parent));
  }
  if (!VAR_10)
   goto out;
  VAR_17 = VAR_10->ops->cl_ops;
  if (!VAR_17)
   goto out;
  if (!VAR_17->tcf_block)
   goto out;
  if (FUNC_1(VAR_12->tcm_parent)) {
   VAR_19 = VAR_17->find(VAR_10, VAR_12->tcm_parent);
   if (VAR_19 == 0)
    goto out;
  }
  VAR_11 = VAR_17->tcf_block(VAR_10, VAR_19, ((void*)0));
  if (!VAR_11)
   goto out;
  if (FUNC_14(VAR_11))
   VAR_10 = ((void*)0);
 }

 VAR_13 = VAR_5->args[0];
 VAR_14 = 0;

 for (VAR_6 = FUNC_3(VAR_11, ((void*)0));
      VAR_6;
      VAR_7 = VAR_6,
       VAR_6 = FUNC_3(VAR_11, VAR_6),
       FUNC_16(VAR_7)) {
  if (VAR_9[VAR_1] &&
      FUNC_4(VAR_9[VAR_1]) != VAR_6->index)
   continue;
  if (!FUNC_15(VAR_6, VAR_10, VAR_15, VAR_4, VAR_5,
        VAR_13, &VAR_14)) {
   FUNC_16(VAR_6);
   VAR_16 = -VAR_0;
   break;
  }
 }

 if (VAR_12->tcm_ifindex == VAR_3)
  FUNC_13(VAR_11, 1);
 VAR_5->args[0] = VAR_14;

out:

 if (VAR_4->len == 0 && VAR_16)
  return VAR_16;
 return VAR_4->len;
}
