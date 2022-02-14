
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_sock {int probe_unacked; int portid; } ;
struct sock {int sk_timer; int (* sk_state_change ) (struct sock*) ;int sk_err; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct sock*,int *,scalar_t__) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct sk_buff* FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct sock*,int ) ;
 struct tipc_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct tipc_sock*) ;
 int FUNC_9 (struct tipc_sock*) ;
 int FUNC_10 (struct tipc_sock*) ;

__attribute__((used)) static void FUNC_11(struct sock *VAR_8,
     struct sk_buff_head *VAR_9)
{
 struct tipc_sock *VAR_10 = FUNC_7(VAR_8);
 u32 VAR_11 = FUNC_9(VAR_10);
 u32 VAR_12 = FUNC_10(VAR_10);
 u32 VAR_13 = FUNC_8(VAR_10);
 u32 VAR_14 = VAR_10->portid;
 struct sk_buff *VAR_15;

 if (VAR_10->probe_unacked) {
  FUNC_6(VAR_8, VAR_5);
  VAR_8->sk_err = VAR_3;
  FUNC_5(FUNC_2(VAR_8), VAR_11, VAR_12);
  VAR_8->sk_state_change(VAR_8);
  return;
 }

 VAR_15 = FUNC_4(VAR_0, VAR_1, VAR_4, 0,
         VAR_11, VAR_13, VAR_12, VAR_14, VAR_6);
 if (VAR_15)
  FUNC_0(VAR_9, VAR_15);
 VAR_10->probe_unacked = 1;
 FUNC_1(VAR_8, &VAR_8->sk_timer, VAR_7 + VAR_2);
}
