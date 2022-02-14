
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wtmp ;
typedef int u32 ;
struct sk_buff {int len; } ;
struct rxrpc_wire_header {int dummy; } ;
struct TYPE_2__ {int serial; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_call {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rxrpc_call*) ;
 scalar_t__ FUNC_4 (struct rxrpc_call*,int ,int ,int ) ;
 struct rxrpc_skb_priv* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int,int *,int) ;
 int FUNC_7 (struct rxrpc_call*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct rxrpc_call *VAR_3, struct sk_buff *VAR_4)
{
 struct rxrpc_skb_priv *VAR_5 = FUNC_5(VAR_4);
 __be32 VAR_6;
 u32 VAR_7 = VAR_2;

 FUNC_0("");

 if (VAR_4->len >= 4 &&
     FUNC_6(VAR_4, sizeof(struct rxrpc_wire_header),
     &VAR_6, sizeof(VAR_6)) >= 0)
  VAR_7 = FUNC_2(VAR_6);

 FUNC_7(VAR_3, VAR_5->hdr.serial, VAR_7);

 FUNC_1("Rx ABORT %%%u { %x }", VAR_5->hdr.serial, VAR_7);

 if (FUNC_4(VAR_3, VAR_1,
          VAR_7, -VAR_0))
  FUNC_3(VAR_3);
}
