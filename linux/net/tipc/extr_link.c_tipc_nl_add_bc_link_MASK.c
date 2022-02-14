
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_nl_msg {int skb; int seq; int portid; } ;
struct tipc_net {struct tipc_link* bcl; } ;
struct tipc_link {int window; int stats; int name; } ;
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
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;
 void* FUNC_3 (int ,int ,int ,int *,int ,int ) ;
 struct tipc_net* FUNC_4 (struct net*,int ) ;
 int FUNC_5 (int ,struct nlattr*) ;
 int FUNC_6 (int ,struct nlattr*) ;
 struct nlattr* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int) ;
 int FUNC_11 (struct net*) ;
 int FUNC_12 (struct net*) ;
 int FUNC_13 (struct net*) ;
 int FUNC_14 (struct net*) ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_15(struct net *VAR_16, struct tipc_nl_msg *VAR_17)
{
 int VAR_18;
 void *VAR_19;
 struct nlattr *VAR_20;
 struct nlattr *VAR_21;
 struct tipc_net *VAR_22 = FUNC_4(VAR_16, VAR_15);
 u32 VAR_23 = FUNC_11(VAR_16);
 u32 VAR_24 = FUNC_12(VAR_16);
 struct tipc_link *VAR_25 = VAR_22->bcl;

 if (!VAR_25)
  return 0;

 FUNC_13(VAR_16);

 VAR_19 = FUNC_3(VAR_17->skb, VAR_17->portid, VAR_17->seq, &VAR_14,
     VAR_2, VAR_13);
 if (!VAR_19) {
  FUNC_14(VAR_16);
  return -VAR_1;
 }

 VAR_20 = FUNC_7(VAR_17->skb, VAR_3);
 if (!VAR_20)
  goto msg_full;


 if (FUNC_8(VAR_17->skb, VAR_9))
  goto attr_msg_full;

 if (FUNC_8(VAR_17->skb, VAR_4))
  goto attr_msg_full;
 if (FUNC_9(VAR_17->skb, VAR_5, VAR_25->name))
  goto attr_msg_full;
 if (FUNC_10(VAR_17->skb, VAR_7, 0))
  goto attr_msg_full;
 if (FUNC_10(VAR_17->skb, VAR_8, 0))
  goto attr_msg_full;

 VAR_21 = FUNC_7(VAR_17->skb, VAR_6);
 if (!VAR_21)
  goto attr_msg_full;
 if (FUNC_10(VAR_17->skb, VAR_12, VAR_25->window))
  goto prop_msg_full;
 if (FUNC_10(VAR_17->skb, VAR_10, VAR_23))
  goto prop_msg_full;
 if (VAR_23 & VAR_0)
  if (FUNC_10(VAR_17->skb, VAR_11,
    VAR_24))
   goto prop_msg_full;
 FUNC_6(VAR_17->skb, VAR_21);

 VAR_18 = FUNC_0(VAR_17->skb, &VAR_25->stats);
 if (VAR_18)
  goto attr_msg_full;

 FUNC_14(VAR_16);
 FUNC_6(VAR_17->skb, VAR_20);
 FUNC_2(VAR_17->skb, VAR_19);

 return 0;

prop_msg_full:
 FUNC_5(VAR_17->skb, VAR_21);
attr_msg_full:
 FUNC_5(VAR_17->skb, VAR_20);
msg_full:
 FUNC_14(VAR_16);
 FUNC_1(VAR_17->skb, VAR_19);

 return -VAR_1;
}
