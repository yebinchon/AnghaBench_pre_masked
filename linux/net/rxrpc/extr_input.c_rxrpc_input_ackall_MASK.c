
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int serial; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_call {int input_lock; int tx_top; } ;
struct rxrpc_ack_summary {int member_0; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct rxrpc_call*,int,char*) ;
 scalar_t__ FUNC_2 (struct rxrpc_call*,int ,struct rxrpc_ack_summary*) ;
 struct rxrpc_skb_priv* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rxrpc_call *VAR_0, struct sk_buff *VAR_1)
{
 struct rxrpc_ack_summary VAR_2 = { 0 };
 struct rxrpc_skb_priv *VAR_3 = FUNC_3(VAR_1);

 FUNC_0("Rx ACKALL %%%u", VAR_3->hdr.serial);

 FUNC_4(&VAR_0->input_lock);

 if (FUNC_2(VAR_0, VAR_0->tx_top, &VAR_2))
  FUNC_1(VAR_0, 0, "ETL");

 FUNC_5(&VAR_0->input_lock);
}
