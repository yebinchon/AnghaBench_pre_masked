
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int serial; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_connection {int dummy; } ;


 int VAR_0 ;
 struct rxrpc_skb_priv* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct rxrpc_connection *VAR_1,
         struct sk_buff *VAR_2,
         u32 *VAR_3)
{
 struct rxrpc_skb_priv *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(((void*)0), VAR_4->hdr.serial,
         FUNC_2("chall_none"));
 return -VAR_0;
}
