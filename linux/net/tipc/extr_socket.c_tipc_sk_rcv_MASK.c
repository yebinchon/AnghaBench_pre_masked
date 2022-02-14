
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int slock; } ;
struct sock {TYPE_1__ sk_lock; } ;
struct tipc_sock {struct sock sk; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct tipc_sock*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff_head*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 struct tipc_sock* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct net*,struct sk_buff*,int*) ;
 int FUNC_10 (int ,struct sk_buff**,int) ;
 int FUNC_11 (int ,struct sk_buff_head*) ;
 int FUNC_12 (struct net*,struct sk_buff*,int ,int ) ;
 int FUNC_13 (struct net*) ;
 int FUNC_14 (struct sk_buff_head*,struct sock*,int ,struct sk_buff_head*) ;
 struct tipc_sock* FUNC_15 (struct net*,int ) ;
 struct sk_buff* FUNC_16 (struct sk_buff_head*,int ) ;
 int FUNC_17 (struct sk_buff_head*,int ) ;
 int FUNC_18 (int *,struct sk_buff*,int ,char*) ;

void FUNC_19(struct net *VAR_2, struct sk_buff_head *VAR_3)
{
 struct sk_buff_head VAR_4;
 u32 VAR_5, VAR_6 = 0;
 int VAR_7;
 struct tipc_sock *VAR_8;
 struct sock *VAR_9;
 struct sk_buff *VAR_10;

 FUNC_0(&VAR_4);
 while (FUNC_4(VAR_3)) {
  VAR_6 = FUNC_17(VAR_3, VAR_6);
  VAR_8 = FUNC_15(VAR_2, VAR_6);

  if (FUNC_2(VAR_8)) {
   VAR_9 = &VAR_8->sk;
   if (FUNC_2(FUNC_7(&VAR_9->sk_lock.slock))) {
    FUNC_14(VAR_3, VAR_9, VAR_6, &VAR_4);
    FUNC_8(&VAR_9->sk_lock.slock);
   }

   FUNC_11(FUNC_5(VAR_9), &VAR_4);
   FUNC_6(VAR_9);
   continue;
  }

  VAR_10 = FUNC_16(VAR_3, VAR_6);
  if (!VAR_10)
   return;


  VAR_7 = VAR_1;
  if (FUNC_9(VAR_2, VAR_10, &VAR_7))
   goto xmit;


  if (!FUNC_10(FUNC_13(VAR_2), &VAR_10, VAR_7))
   continue;

  FUNC_18(((void*)0), VAR_10, VAR_0, "@sk_rcv!");
xmit:
  VAR_5 = FUNC_3(FUNC_1(VAR_10));
  FUNC_12(VAR_2, VAR_10, VAR_5, VAR_6);
 }
}
