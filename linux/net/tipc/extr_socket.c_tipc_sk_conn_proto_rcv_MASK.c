
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int (* sk_write_space ) (struct sock*) ;int (* sk_state_change ) (struct sock*) ;} ;
struct tipc_sock {int probe_unacked; int peer_caps; int snd_win; int snt_unacked; struct sock sk; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct tipc_msg*) ;
 scalar_t__ FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int FUNC_8 (struct tipc_msg*,int) ;
 int FUNC_9 (struct tipc_msg*,int ) ;
 int FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (int ,struct sk_buff**,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (struct sock*,int ) ;
 int FUNC_18 (struct sock*,struct sk_buff*,int ,char*) ;
 int FUNC_19 (struct tipc_sock*) ;
 int FUNC_20 (struct tipc_sock*) ;
 int FUNC_21 (struct tipc_sock*,struct tipc_msg*) ;
 int FUNC_22 (struct tipc_sock*) ;
 int FUNC_23 (struct tipc_sock*) ;
 scalar_t__ FUNC_24 (int ) ;

__attribute__((used)) static void FUNC_25(struct tipc_sock *VAR_10, struct sk_buff *VAR_11,
       struct sk_buff_head *VAR_12,
       struct sk_buff_head *VAR_13)
{
 struct tipc_msg *VAR_14 = FUNC_1(VAR_11);
 u32 VAR_15 = FUNC_20(VAR_10);
 struct sock *VAR_16 = &VAR_10->sk;
 int VAR_17 = FUNC_10(VAR_14);
 bool VAR_18;


 if (!FUNC_21(VAR_10, VAR_14)) {
  FUNC_18(VAR_16, VAR_11, VAR_8, "@proto_rcv!");
  goto exit;
 }

 if (FUNC_24(FUNC_5(VAR_14))) {
  FUNC_17(VAR_16, VAR_7);
  FUNC_16(FUNC_12(VAR_16), FUNC_22(VAR_10),
          FUNC_23(VAR_10));
  VAR_16->sk_state_change(VAR_16);




  FUNC_9(VAR_14, VAR_6);
  FUNC_8(VAR_14, VAR_5);
  FUNC_7(VAR_14, VAR_0);
  FUNC_6(VAR_14, VAR_0);
  FUNC_0(VAR_12, VAR_11);
  return;
 }

 VAR_10->probe_unacked = 0;

 if (VAR_17 == VAR_2) {
  FUNC_8(VAR_14, VAR_3);
  if (FUNC_15(VAR_15, &VAR_11, VAR_9))
   FUNC_0(VAR_13, VAR_11);
  return;
 } else if (VAR_17 == VAR_1) {
  VAR_18 = FUNC_19(VAR_10);
  VAR_10->snt_unacked -= FUNC_4(VAR_14);
  if (VAR_10->peer_caps & VAR_4)
   VAR_10->snd_win = FUNC_3(VAR_14);
  if (VAR_18)
   VAR_16->sk_write_space(VAR_16);
 } else if (VAR_17 != VAR_3) {
  FUNC_11("Received unknown CONN_PROTO msg\n");
 }
exit:
 FUNC_2(VAR_11);
}
