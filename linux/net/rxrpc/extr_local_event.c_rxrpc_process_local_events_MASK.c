
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rxrpc_wire_header {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_local {int debug_id; int event_queue; } ;



 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct rxrpc_local*,TYPE_1__*,struct sk_buff*) ;
 struct rxrpc_skb_priv* FUNC_7 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (struct sk_buff*,int,char*,int) ;
 struct sk_buff* FUNC_9 (int *) ;

void FUNC_10(struct rxrpc_local *VAR_2)
{
 struct sk_buff *VAR_3;
 char VAR_4;

 FUNC_1("");

 VAR_3 = FUNC_9(&VAR_2->event_queue);
 if (VAR_3) {
  struct rxrpc_skb_priv *VAR_5 = FUNC_7(VAR_3);

  FUNC_5(VAR_3, VAR_1);
  FUNC_0("{%d},{%u}", VAR_2->debug_id, VAR_5->hdr.type);

  switch (VAR_5->hdr.type) {
  case 128:
   if (FUNC_8(VAR_3, sizeof(struct rxrpc_wire_header),
       &VAR_4, 1) < 0)
    return;
   FUNC_3("Rx VERSION { %02x }", VAR_4);
   if (VAR_4 == 0)
    FUNC_6(VAR_2, &VAR_5->hdr, VAR_3);
   break;

  default:

   break;
  }

  FUNC_4(VAR_3, VAR_0);
 }

 FUNC_2("");
}
