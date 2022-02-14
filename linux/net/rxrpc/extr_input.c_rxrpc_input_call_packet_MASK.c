
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int type; int serial; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_call {int expect_rx_by; int next_rx_timo; } ;


 unsigned long FUNC_0 (int ) ;





 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (char*,struct rxrpc_call*,struct sk_buff*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 unsigned long VAR_0 ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct rxrpc_call*,struct sk_buff*) ;
 int FUNC_7 (struct rxrpc_call*,struct sk_buff*) ;
 int FUNC_8 (struct rxrpc_call*,struct sk_buff*) ;
 int FUNC_9 (struct rxrpc_call*,struct sk_buff*) ;
 int FUNC_10 (struct rxrpc_call*,unsigned long,unsigned long,int ) ;
 struct rxrpc_skb_priv* FUNC_11 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_12(struct rxrpc_call *VAR_3,
        struct sk_buff *VAR_4)
{
 struct rxrpc_skb_priv *VAR_5 = FUNC_11(VAR_4);
 unsigned long VAR_6;

 FUNC_2("%p,%p", VAR_3, VAR_4);

 VAR_6 = FUNC_0(VAR_3->next_rx_timo);
 if (VAR_6) {
  unsigned long VAR_7 = VAR_0, VAR_8;

  VAR_8 = VAR_7 + VAR_6;
  FUNC_1(VAR_3->expect_rx_by, VAR_8);
  FUNC_10(VAR_3, VAR_8, VAR_7,
     VAR_2);
 }

 switch (VAR_5->hdr.type) {
 case 128:
  FUNC_9(VAR_3, VAR_4);
  goto no_free;

 case 131:
  FUNC_7(VAR_3, VAR_4);
  break;

 case 129:
  FUNC_4("Rx BUSY %%%u", VAR_5->hdr.serial);





  break;

 case 132:
  FUNC_6(VAR_3, VAR_4);
  break;

 case 130:
  FUNC_8(VAR_3, VAR_4);
  break;

 default:
  break;
 }

 FUNC_5(VAR_4, VAR_1);
no_free:
 FUNC_3("");
}
