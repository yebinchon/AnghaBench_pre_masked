
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_msg {int dummy; } ;
struct tipc_link {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct sk_buff_head inputq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff_head*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct tipc_msg*) ;
 scalar_t__ FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct sk_buff_head*) ;
 TYPE_1__* FUNC_6 (struct net*) ;
 int FUNC_7 (struct net*) ;
 int FUNC_8 (struct net*) ;
 int FUNC_9 (struct net*,struct sk_buff_head*) ;
 int FUNC_10 (struct tipc_link*,struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_11 (struct tipc_link*) ;
 int FUNC_12 (struct tipc_link*,struct sk_buff*,int *) ;
 scalar_t__ FUNC_13 (struct net*) ;
 int FUNC_14 (struct net*,struct sk_buff_head*) ;

int FUNC_15(struct net *VAR_1, struct tipc_link *VAR_2, struct sk_buff *VAR_3)
{
 struct tipc_msg *VAR_4 = FUNC_1(VAR_3);
 struct sk_buff_head *VAR_5 = &FUNC_6(VAR_1)->inputq;
 struct sk_buff_head VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6);

 if (FUNC_3(VAR_4) != FUNC_13(VAR_1) || !FUNC_11(VAR_2)) {
  FUNC_2(VAR_3);
  return 0;
 }

 FUNC_7(VAR_1);
 if (FUNC_4(VAR_4) == VAR_0)
  VAR_7 = FUNC_10(VAR_2, VAR_3, &VAR_6);
 else
  VAR_7 = FUNC_12(VAR_2, VAR_3, ((void*)0));
 FUNC_8(VAR_1);

 FUNC_9(VAR_1, &VAR_6);


 if (!FUNC_5(VAR_5))
  FUNC_14(VAR_1, VAR_5);

 return VAR_7;
}
