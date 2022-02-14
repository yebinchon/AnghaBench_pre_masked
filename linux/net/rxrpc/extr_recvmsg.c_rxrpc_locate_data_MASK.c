
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct sk_buff {unsigned int len; } ;
struct rxrpc_wire_header {int dummy; } ;
struct rxrpc_skb_priv {int nr_subpackets; int rx_flags; } ;
struct rxrpc_call {TYPE_1__* security; } ;
struct TYPE_2__ {int (* locate_data ) (struct rxrpc_call*,struct sk_buff*,unsigned int*,unsigned int*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct rxrpc_skb_priv* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct rxrpc_call*,struct sk_buff*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct rxrpc_call*,struct sk_buff*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct rxrpc_call *VAR_5, struct sk_buff *VAR_6,
        u8 *VAR_7,
        unsigned int *VAR_8, unsigned int *VAR_9,
        bool *VAR_10)
{
 struct rxrpc_skb_priv *VAR_11 = FUNC_0(VAR_6);
 unsigned int VAR_12 = sizeof(struct rxrpc_wire_header);
 unsigned int VAR_13;
 bool VAR_14 = 0;
 int VAR_15;
 u8 VAR_16 = *VAR_7;
 u8 VAR_17 = VAR_16 & VAR_2;


 VAR_12 += VAR_17 * VAR_1;
 VAR_13 = VAR_6->len - VAR_12;
 if (VAR_17 < VAR_11->nr_subpackets - 1)
  VAR_13 = VAR_0;
 else if (VAR_11->rx_flags & VAR_4)
  VAR_14 = 1;

 if (!(VAR_16 & VAR_3)) {
  VAR_15 = FUNC_1(VAR_5, VAR_6, VAR_16, VAR_12, VAR_13);
  if (VAR_15 < 0)
   return VAR_15;
  *VAR_7 |= VAR_3;
 }

 *VAR_8 = VAR_12;
 *VAR_9 = VAR_13;
 *VAR_10 = VAR_14;
 VAR_5->security->locate_data(VAR_5, VAR_6, VAR_8, VAR_9);
 return 0;
}
