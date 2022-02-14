
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int seq; int serial; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_call {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct rxrpc_call*,int ,int ,int ) ;
 struct rxrpc_skb_priv* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct rxrpc_call*,int ,char const*) ;

__attribute__((used)) static inline bool FUNC_3(struct rxrpc_call *VAR_1,
     struct sk_buff *VAR_2,
     const char *VAR_3,
     const char *VAR_4,
     u32 VAR_5)
{
 struct rxrpc_skb_priv *VAR_6 = FUNC_1(VAR_2);

 FUNC_2(VAR_1, VAR_6->hdr.serial, VAR_3);
 return FUNC_0(VAR_4, VAR_1, VAR_6->hdr.seq, VAR_5, -VAR_0);
}
