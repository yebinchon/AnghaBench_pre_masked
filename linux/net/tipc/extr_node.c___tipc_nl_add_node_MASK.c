
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {int addr; } ;
struct tipc_nl_msg {int skb; int seq; int portid; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,void*) ;
 void* FUNC_2 (int ,int ,int ,int *,int ,int ) ;
 int FUNC_3 (int ,struct nlattr*) ;
 int FUNC_4 (int ,struct nlattr*) ;
 struct nlattr* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct tipc_node*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct tipc_nl_msg *VAR_7, struct tipc_node *VAR_8)
{
 void *VAR_9;
 struct nlattr *VAR_10;

 VAR_9 = FUNC_2(VAR_7->skb, VAR_7->portid, VAR_7->seq, &VAR_6,
     VAR_1, VAR_5);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_7->skb, VAR_2);
 if (!VAR_10)
  goto msg_full;

 if (FUNC_7(VAR_7->skb, VAR_3, VAR_8->addr))
  goto attr_msg_full;
 if (FUNC_8(VAR_8))
  if (FUNC_6(VAR_7->skb, VAR_4))
   goto attr_msg_full;

 FUNC_4(VAR_7->skb, VAR_10);
 FUNC_1(VAR_7->skb, VAR_9);

 return 0;

attr_msg_full:
 FUNC_3(VAR_7->skb, VAR_10);
msg_full:
 FUNC_0(VAR_7->skb, VAR_9);

 return -VAR_0;
}
