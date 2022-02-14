
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {unsigned int len; } ;
struct rxrpc_wire_header {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct rxrpc_skb_priv {int rx_flags; int nr_subpackets; int rx_req_ack; TYPE_1__ hdr; } ;
struct rxrpc_jumbo_header {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 struct rxrpc_skb_priv* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,unsigned int,int*,int) ;

__attribute__((used)) static bool FUNC_3(struct sk_buff *VAR_6)
{
 struct rxrpc_skb_priv *VAR_7 = FUNC_1(VAR_6);
 unsigned int VAR_8 = sizeof(struct rxrpc_wire_header);
 unsigned int VAR_9 = VAR_6->len;
 u8 VAR_10 = VAR_7->hdr.flags;

 for (;;) {
  if (VAR_10 & VAR_4)
   FUNC_0(VAR_7->nr_subpackets, VAR_7->rx_req_ack);
  VAR_7->nr_subpackets++;

  if (!(VAR_10 & VAR_1))
   break;

  if (VAR_9 - VAR_8 < VAR_2)
   goto protocol_error;
  if (VAR_10 & VAR_3)
   goto protocol_error;
  VAR_8 += VAR_0;
  if (FUNC_2(VAR_6, VAR_8, &VAR_10, 1) < 0)
   goto protocol_error;
  VAR_8 += sizeof(struct rxrpc_jumbo_header);
 }

 if (VAR_10 & VAR_3)
  VAR_7->rx_flags |= VAR_5;
 return 1;

protocol_error:
 return 0;
}
