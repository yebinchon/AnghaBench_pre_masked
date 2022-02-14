
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tipc_nl_msg {int skb; int seq; int portid; } ;
struct tipc_net {int net_id; int * node_id; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,void*) ;
 void* FUNC_2 (int ,int ,int ,int *,int ,int ) ;
 struct tipc_net* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (int ,struct nlattr*) ;
 int FUNC_5 (int ,struct nlattr*) ;
 struct nlattr* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct net *VAR_9, struct tipc_nl_msg *VAR_10)
{
 struct tipc_net *VAR_11 = FUNC_3(VAR_9, VAR_8);
 u64 *VAR_12 = (u64 *)&VAR_11->node_id[0];
 u64 *VAR_13 = (u64 *)&VAR_11->node_id[8];
 struct nlattr *VAR_14;
 void *VAR_15;

 VAR_15 = FUNC_2(VAR_10->skb, VAR_10->portid, VAR_10->seq, &VAR_7,
     VAR_1, VAR_6);
 if (!VAR_15)
  return -VAR_0;

 VAR_14 = FUNC_6(VAR_10->skb, VAR_2);
 if (!VAR_14)
  goto msg_full;

 if (FUNC_7(VAR_10->skb, VAR_3, VAR_11->net_id))
  goto attr_msg_full;
 if (FUNC_8(VAR_10->skb, VAR_4, *VAR_12, 0))
  goto attr_msg_full;
 if (FUNC_8(VAR_10->skb, VAR_5, *VAR_13, 0))
  goto attr_msg_full;
 FUNC_5(VAR_10->skb, VAR_14);
 FUNC_1(VAR_10->skb, VAR_15);

 return 0;

attr_msg_full:
 FUNC_4(VAR_10->skb, VAR_14);
msg_full:
 FUNC_0(VAR_10->skb, VAR_15);

 return -VAR_0;
}
