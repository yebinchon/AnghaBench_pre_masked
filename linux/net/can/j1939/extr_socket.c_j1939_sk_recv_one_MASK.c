
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int * sk; } ;
struct j1939_sock {int sk; } ;
struct j1939_sk_buff_cb {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct j1939_sock*,struct j1939_sk_buff_cb const*) ;
 void* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct j1939_sock *VAR_2, struct sk_buff *VAR_3)
{
 const struct j1939_sk_buff_cb *VAR_4 = FUNC_2(VAR_3);
 struct j1939_sk_buff_cb *VAR_5;
 struct sk_buff *VAR_6;

 if (VAR_3->sk == &VAR_2->sk)
  return;

 if (!FUNC_1(VAR_2, VAR_4))
  return;

 VAR_6 = FUNC_5(VAR_3, VAR_0);
 if (!VAR_6) {
  FUNC_4("skb clone failed\n");
  return;
 }
 FUNC_0(VAR_6, VAR_3->sk);

 VAR_5 = FUNC_2(VAR_6);
 VAR_5->msg_flags &= ~(VAR_1);
 if (VAR_6->sk)
  VAR_5->msg_flags |= VAR_1;

 if (FUNC_6(&VAR_2->sk, VAR_6) < 0)
  FUNC_3(VAR_6);
}
