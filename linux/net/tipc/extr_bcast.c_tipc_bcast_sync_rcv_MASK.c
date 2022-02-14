
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_msg {int dummy; } ;
struct tipc_link {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct sk_buff_head inputq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct tipc_msg*) ;
 int FUNC_2 (struct tipc_msg*) ;
 scalar_t__ FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct sk_buff_head*) ;
 TYPE_1__* FUNC_5 (struct net*) ;
 int FUNC_6 (struct net*) ;
 int FUNC_7 (struct net*) ;
 int FUNC_8 (struct net*,struct sk_buff_head*) ;
 int FUNC_9 (struct tipc_link*,int ,struct sk_buff_head*) ;
 int FUNC_10 (struct tipc_link*,struct tipc_msg*) ;
 int FUNC_11 (struct tipc_link*,struct tipc_msg*,struct sk_buff_head*) ;
 int FUNC_12 (struct net*,struct sk_buff_head*) ;

int FUNC_13(struct net *VAR_1, struct tipc_link *VAR_2,
   struct tipc_msg *VAR_3)
{
 struct sk_buff_head *VAR_4 = &FUNC_5(VAR_1)->inputq;
 struct sk_buff_head VAR_5;
 int VAR_6 = 0;

 FUNC_0(&VAR_5);

 FUNC_6(VAR_1);
 if (FUNC_3(VAR_3) != VAR_0) {
  FUNC_10(VAR_2, VAR_3);
 } else if (!FUNC_1(VAR_3)) {
  FUNC_9(VAR_2, FUNC_2(VAR_3), &VAR_5);
  VAR_6 = FUNC_11(VAR_2, VAR_3, &VAR_5);
 }
 FUNC_7(VAR_1);

 FUNC_8(VAR_1, &VAR_5);


 if (!FUNC_4(VAR_4))
  FUNC_12(VAR_1, VAR_4);
 return VAR_6;
}
