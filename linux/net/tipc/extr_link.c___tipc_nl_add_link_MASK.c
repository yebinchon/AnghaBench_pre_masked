
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_nl_msg {int skb; int seq; int portid; } ;
struct TYPE_2__ {int sent_pkts; int recv_pkts; } ;
struct tipc_link {TYPE_1__ stats; int priority; int window; int tolerance; scalar_t__ active; int mtu; int name; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;
 void* FUNC_3 (int ,int ,int ,int *,int,int ) ;
 int FUNC_4 (int ,struct nlattr*) ;
 int FUNC_5 (int ,struct nlattr*) ;
 struct nlattr* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_11 (struct tipc_link*) ;
 int FUNC_12 (struct net*) ;

int FUNC_13(struct net *VAR_15, struct tipc_nl_msg *VAR_16,
         struct tipc_link *VAR_17, int VAR_18)
{
 u32 VAR_19 = FUNC_12(VAR_15);
 struct nlattr *VAR_20;
 struct nlattr *VAR_21;
 void *VAR_22;
 int VAR_23;

 VAR_22 = FUNC_3(VAR_16->skb, VAR_16->portid, VAR_16->seq, &VAR_14,
     VAR_18, VAR_13);
 if (!VAR_22)
  return -VAR_0;

 VAR_20 = FUNC_6(VAR_16->skb, VAR_1);
 if (!VAR_20)
  goto msg_full;

 if (FUNC_8(VAR_16->skb, VAR_5, VAR_17->name))
  goto attr_msg_full;
 if (FUNC_9(VAR_16->skb, VAR_3, FUNC_10(VAR_19)))
  goto attr_msg_full;
 if (FUNC_9(VAR_16->skb, VAR_4, VAR_17->mtu))
  goto attr_msg_full;
 if (FUNC_9(VAR_16->skb, VAR_7, VAR_17->stats.recv_pkts))
  goto attr_msg_full;
 if (FUNC_9(VAR_16->skb, VAR_8, VAR_17->stats.sent_pkts))
  goto attr_msg_full;

 if (FUNC_11(VAR_17))
  if (FUNC_7(VAR_16->skb, VAR_9))
   goto attr_msg_full;
 if (VAR_17->active)
  if (FUNC_7(VAR_16->skb, VAR_2))
   goto attr_msg_full;

 VAR_21 = FUNC_6(VAR_16->skb, VAR_6);
 if (!VAR_21)
  goto attr_msg_full;
 if (FUNC_9(VAR_16->skb, VAR_10, VAR_17->priority))
  goto prop_msg_full;
 if (FUNC_9(VAR_16->skb, VAR_11, VAR_17->tolerance))
  goto prop_msg_full;
 if (FUNC_9(VAR_16->skb, VAR_12,
   VAR_17->window))
  goto prop_msg_full;
 if (FUNC_9(VAR_16->skb, VAR_10, VAR_17->priority))
  goto prop_msg_full;
 FUNC_5(VAR_16->skb, VAR_21);

 VAR_23 = FUNC_0(VAR_16->skb, &VAR_17->stats);
 if (VAR_23)
  goto attr_msg_full;

 FUNC_5(VAR_16->skb, VAR_20);
 FUNC_2(VAR_16->skb, VAR_22);

 return 0;

prop_msg_full:
 FUNC_4(VAR_16->skb, VAR_21);
attr_msg_full:
 FUNC_4(VAR_16->skb, VAR_20);
msg_full:
 FUNC_1(VAR_16->skb, VAR_22);

 return -VAR_0;
}
