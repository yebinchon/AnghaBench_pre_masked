
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_nl_msg {int skb; int seq; int portid; } ;
struct tipc_monitor {int lock; int list_gen; int peer_cnt; } ;
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
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,void*) ;
 void* FUNC_2 (int ,int ,int ,int *,int ,int ) ;
 int FUNC_3 (int ,struct nlattr*) ;
 int FUNC_4 (int ,struct nlattr*) ;
 struct nlattr* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,char*) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct net*,char*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_12 (struct net*,struct tipc_monitor*) ;
 struct tipc_monitor* FUNC_13 (struct net*,int ) ;

int FUNC_14(struct net *VAR_11, struct tipc_nl_msg *VAR_12,
     u32 VAR_13)
{
 struct tipc_monitor *VAR_14 = FUNC_13(VAR_11, VAR_13);
 char VAR_15[VAR_2];
 struct nlattr *VAR_16;
 void *VAR_17;
 int VAR_18;

 VAR_18 = FUNC_11(VAR_11, VAR_15, VAR_13);
 if (VAR_18 || !VAR_14)
  return 0;

 VAR_17 = FUNC_2(VAR_12->skb, VAR_12->portid, VAR_12->seq, &VAR_10,
     VAR_1, VAR_9);
 if (!VAR_17)
  return -VAR_0;

 VAR_16 = FUNC_5(VAR_12->skb, VAR_3);
 if (!VAR_16)
  goto msg_full;

 FUNC_9(&VAR_14->lock);
 if (FUNC_8(VAR_12->skb, VAR_8, VAR_13))
  goto attr_msg_full;
 if (FUNC_12(VAR_11, VAR_14))
  if (FUNC_6(VAR_12->skb, VAR_4))
   goto attr_msg_full;
 if (FUNC_7(VAR_12->skb, VAR_5, VAR_15))
  goto attr_msg_full;
 if (FUNC_8(VAR_12->skb, VAR_7, VAR_14->peer_cnt))
  goto attr_msg_full;
 if (FUNC_8(VAR_12->skb, VAR_6, VAR_14->list_gen))
  goto attr_msg_full;

 FUNC_10(&VAR_14->lock);
 FUNC_4(VAR_12->skb, VAR_16);
 FUNC_1(VAR_12->skb, VAR_17);

 return 0;

attr_msg_full:
 FUNC_10(&VAR_14->lock);
 FUNC_3(VAR_12->skb, VAR_16);
msg_full:
 FUNC_0(VAR_12->skb, VAR_17);

 return -VAR_0;
}
