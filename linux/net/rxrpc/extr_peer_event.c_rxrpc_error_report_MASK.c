
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_rxrpc {int dummy; } ;
struct TYPE_2__ {scalar_t__ ee_origin; scalar_t__ ee_type; scalar_t__ ee_code; } ;
struct sock_exterr_skb {TYPE_1__ ee; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct rxrpc_peer {int dummy; } ;
struct rxrpc_local {int debug_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,struct sock*,int ) ;
 int FUNC_2 (char*) ;
 struct rxrpc_local* FUNC_3 (struct sock*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct rxrpc_peer*,struct sock_exterr_skb*) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct rxrpc_peer*) ;
 struct rxrpc_peer* FUNC_9 (struct rxrpc_local*,struct sk_buff*,struct sockaddr_rxrpc*) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct rxrpc_peer*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (struct rxrpc_peer*,struct sock_exterr_skb*) ;
 struct sk_buff* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct rxrpc_peer*,TYPE_1__*,struct sockaddr_rxrpc*) ;
 scalar_t__ FUNC_16 (int) ;

void FUNC_17(struct sock *VAR_6)
{
 struct sock_exterr_skb *VAR_7;
 struct sockaddr_rxrpc VAR_8;
 struct rxrpc_local *VAR_9;
 struct rxrpc_peer *VAR_10;
 struct sk_buff *VAR_11;

 FUNC_4();
 VAR_9 = FUNC_3(VAR_6);
 if (FUNC_16(!VAR_9)) {
  FUNC_5();
  return;
 }
 FUNC_1("%p{%d}", VAR_6, VAR_9->debug_id);




 FUNC_14(VAR_6);

 VAR_11 = FUNC_13(VAR_6);
 if (!VAR_11) {
  FUNC_5();
  FUNC_2("UDP socket errqueue empty");
  return;
 }
 FUNC_10(VAR_11, VAR_5);
 VAR_7 = FUNC_0(VAR_11);
 if (!VAR_11->len && VAR_7->ee.ee_origin == VAR_3) {
  FUNC_2("UDP empty message");
  FUNC_5();
  FUNC_7(VAR_11, VAR_4);
  return;
 }

 VAR_10 = FUNC_9(VAR_9, VAR_11, &VAR_8);
 if (VAR_10 && !FUNC_8(VAR_10))
  VAR_10 = ((void*)0);
 if (!VAR_10) {
  FUNC_5();
  FUNC_7(VAR_11, VAR_4);
  FUNC_2(" [no peer]");
  return;
 }

 FUNC_15(VAR_10, &VAR_7->ee, &VAR_8);

 if ((VAR_7->ee.ee_origin == VAR_2 &&
      VAR_7->ee.ee_type == VAR_0 &&
      VAR_7->ee.ee_code == VAR_1)) {
  FUNC_6(VAR_10, VAR_7);
  FUNC_5();
  FUNC_7(VAR_11, VAR_4);
  FUNC_11(VAR_10);
  FUNC_2(" [MTU update]");
  return;
 }

 FUNC_12(VAR_10, VAR_7);
 FUNC_5();
 FUNC_7(VAR_11, VAR_4);
 FUNC_11(VAR_10);

 FUNC_2("");
}
