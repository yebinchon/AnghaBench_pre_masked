
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_nl_msg {int skb; int seq; int portid; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,void*) ;
 void* FUNC_2 (int ,int ,int ,int *,int ,int ) ;
 int FUNC_3 (int ,struct nlattr*) ;
 int FUNC_4 (int ,struct nlattr*) ;
 struct nlattr* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (struct net*) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_5, struct tipc_nl_msg *VAR_6)
{
 struct nlattr *VAR_7;
 void *VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_2(VAR_6->skb, VAR_6->portid, VAR_6->seq, &VAR_4,
     0, VAR_3);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_6->skb, VAR_1);
 if (!VAR_7)
  goto msg_full;

 VAR_9 = FUNC_7(VAR_5);

 if (FUNC_6(VAR_6->skb, VAR_2, VAR_9))
  goto attr_msg_full;

 FUNC_4(VAR_6->skb, VAR_7);
 FUNC_1(VAR_6->skb, VAR_8);

 return 0;

attr_msg_full:
 FUNC_3(VAR_6->skb, VAR_7);
msg_full:
 FUNC_0(VAR_6->skb, VAR_8);

 return -VAR_0;
}
