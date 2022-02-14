
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ serial; } ;
struct rxrpc_skb_priv {int nr_subpackets; int rx_flags; TYPE_1__ hdr; } ;
struct rxrpc_call {int rx_hard_ack; int* rxtx_annotations; scalar_t__ ackr_reason; scalar_t__ ackr_consumed; scalar_t__ ackr_seen; struct sk_buff** rxtx_buffer; int rx_top; int debug_id; } ;
typedef scalar_t__ rxrpc_serial_t ;
typedef int rxrpc_seq_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct rxrpc_call*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct rxrpc_call*,scalar_t__,scalar_t__,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct rxrpc_call*,int,int *) ;
 struct rxrpc_skb_priv* FUNC_10 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int*,int) ;
 int FUNC_13 (struct rxrpc_call*,int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_14(struct rxrpc_call *VAR_8)
{
 struct rxrpc_skb_priv *VAR_9;
 struct sk_buff *VAR_10;
 rxrpc_serial_t VAR_11;
 rxrpc_seq_t VAR_12, VAR_13;
 bool VAR_14 = 0;
 u8 VAR_15;
 int VAR_16;

 FUNC_1("%d", VAR_8->debug_id);

 VAR_12 = VAR_8->rx_hard_ack;
 VAR_13 = FUNC_11(&VAR_8->rx_top);
 FUNC_0(FUNC_4(VAR_12, VAR_13));

 VAR_12++;
 VAR_16 = VAR_12 & VAR_1;
 VAR_10 = VAR_8->rxtx_buffer[VAR_16];
 FUNC_8(VAR_10, VAR_7);
 VAR_9 = FUNC_10(VAR_10);

 VAR_15 = VAR_8->rxtx_annotations[VAR_16] & VAR_2;
 VAR_11 = VAR_9->hdr.serial + VAR_15;

 if (VAR_15 == VAR_9->nr_subpackets - 1 &&
     VAR_9->rx_flags & VAR_3)
  VAR_14 = 1;

 VAR_8->rxtx_buffer[VAR_16] = ((void*)0);
 VAR_8->rxtx_annotations[VAR_16] = 0;

 FUNC_12(&VAR_8->rx_hard_ack, VAR_12);

 FUNC_6(VAR_10, VAR_6);

 FUNC_13(VAR_8, VAR_5, VAR_11, VAR_12);
 if (VAR_14) {
  FUNC_5(VAR_8, VAR_11);
 } else {

  if (FUNC_3(VAR_12, VAR_8->ackr_consumed + 2) ||
      FUNC_3(VAR_13, VAR_8->ackr_seen + 2) ||
      (VAR_12 == VAR_13 && FUNC_2(VAR_12, VAR_8->ackr_consumed)))
   FUNC_7(VAR_8, VAR_0, VAR_11,
       1, 1,
       VAR_4);
  if (VAR_8->ackr_reason && VAR_8->ackr_reason != VAR_0)
   FUNC_9(VAR_8, 0, ((void*)0));
 }
}
