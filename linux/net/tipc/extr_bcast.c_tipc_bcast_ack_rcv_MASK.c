
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tipc_msg {int dummy; } ;
struct tipc_link {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct sk_buff_head inputq; } ;


 int FUNC_0 (struct sk_buff_head*) ;
 scalar_t__ FUNC_1 (struct tipc_msg*) ;
 int FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 TYPE_1__* FUNC_4 (struct net*) ;
 int FUNC_5 (struct net*) ;
 int FUNC_6 (struct net*) ;
 int FUNC_7 (struct net*,struct sk_buff_head*) ;
 int FUNC_8 (struct tipc_link*,int ,struct sk_buff_head*) ;
 int FUNC_9 (struct net*,struct sk_buff_head*) ;

void FUNC_10(struct net *VAR_0, struct tipc_link *VAR_1,
   struct tipc_msg *VAR_2)
{
 struct sk_buff_head *VAR_3 = &FUNC_4(VAR_0)->inputq;
 u16 VAR_4 = FUNC_2(VAR_2);
 struct sk_buff_head VAR_5;


 if (FUNC_1(VAR_2))
  return;

 FUNC_0(&VAR_5);

 FUNC_5(VAR_0);
 FUNC_8(VAR_1, VAR_4, &VAR_5);
 FUNC_6(VAR_0);

 FUNC_7(VAR_0, &VAR_5);


 if (!FUNC_3(VAR_3))
  FUNC_9(VAR_0, VAR_3);
}
