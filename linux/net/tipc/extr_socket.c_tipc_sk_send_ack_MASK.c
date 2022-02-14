
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int sk_rcvbuf; } ;
struct tipc_sock {int peer_caps; int rcv_win; struct sock sk; int rcv_unacked; int portid; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct tipc_msg*) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 int FUNC_3 (struct tipc_msg*,int ) ;
 struct net* FUNC_4 (struct sock*) ;
 struct sk_buff* FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct net*,struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct tipc_sock*) ;
 int FUNC_10 (struct tipc_sock*) ;
 int FUNC_11 (struct tipc_sock*) ;

__attribute__((used)) static void FUNC_12(struct tipc_sock *VAR_5)
{
 struct sock *VAR_6 = &VAR_5->sk;
 struct net *VAR_7 = FUNC_4(VAR_6);
 struct sk_buff *VAR_8 = ((void*)0);
 struct tipc_msg *VAR_9;
 u32 VAR_10 = FUNC_11(VAR_5);
 u32 VAR_11 = FUNC_10(VAR_5);

 if (!FUNC_7(VAR_6))
  return;
 VAR_8 = FUNC_5(VAR_1, VAR_0, VAR_2, 0,
         VAR_11, FUNC_9(VAR_5), VAR_10,
         VAR_5->portid, VAR_4);
 if (!VAR_8)
  return;
 VAR_9 = FUNC_0(VAR_8);
 FUNC_3(VAR_9, VAR_5->rcv_unacked);
 VAR_5->rcv_unacked = 0;


 if (VAR_5->peer_caps & VAR_3) {
  VAR_5->rcv_win = FUNC_8(VAR_5->sk.sk_rcvbuf);
  FUNC_2(VAR_9, VAR_5->rcv_win);
 }
 FUNC_6(VAR_7, VAR_8, VAR_11, FUNC_1(VAR_9));
}
