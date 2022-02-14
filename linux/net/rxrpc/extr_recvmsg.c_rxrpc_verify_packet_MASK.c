
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int cksum; int seq; } ;
struct rxrpc_skb_priv {TYPE_2__ hdr; } ;
struct rxrpc_call {TYPE_1__* security; } ;
typedef int rxrpc_seq_t ;
typedef int __be16 ;
struct TYPE_3__ {int (* verify_packet ) (struct rxrpc_call*,struct sk_buff*,unsigned int,unsigned int,int ,int ) ;} ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 struct rxrpc_skb_priv* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,unsigned int,int *,int) ;
 int FUNC_5 (struct rxrpc_call*,struct sk_buff*,unsigned int,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct rxrpc_call *VAR_1, struct sk_buff *VAR_2,
          u8 VAR_3,
          unsigned int VAR_4, unsigned int VAR_5)
{
 struct rxrpc_skb_priv *VAR_6 = FUNC_3(VAR_2);
 rxrpc_seq_t VAR_7 = VAR_6->hdr.seq;
 u16 VAR_8 = VAR_6->hdr.cksum;
 u8 VAR_9 = VAR_3 & VAR_0;

 FUNC_1("");




 if (VAR_9 > 0) {
  __be16 VAR_10;
  if (FUNC_4(VAR_2, VAR_4 - 2, &VAR_10, 2) < 0)
   FUNC_0();
  VAR_8 = FUNC_2(VAR_10);
  VAR_7 += VAR_9;
 }

 return VAR_1->security->verify_packet(VAR_1, VAR_2, VAR_4, VAR_5,
          VAR_7, VAR_8);
}
