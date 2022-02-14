
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int len; } ;
struct TYPE_2__ {unsigned int seq; scalar_t__ serial; int flags; } ;
struct rxrpc_skb_priv {int nr_subpackets; int rx_flags; int * rx_req_ack; TYPE_1__ hdr; } ;
struct rxrpc_call {scalar_t__ rx_hard_ack; unsigned int rx_top; scalar_t__ state; scalar_t__ next_req_timo; unsigned int ackr_prev_seq; int nr_jumbo_bad; unsigned int rx_winsize; unsigned int rx_expect_next; int input_lock; int debug_id; int flags; struct sk_buff** rxtx_buffer; scalar_t__* rxtx_annotations; int expect_req_by; } ;
typedef scalar_t__ rxrpc_serial_t ;
typedef unsigned int rxrpc_seq_t ;
typedef enum rxrpc_call_state { ____Placeholder_rxrpc_call_state } rxrpc_call_state ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (char*,scalar_t__,unsigned int,int ,unsigned int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,unsigned int,unsigned int) ;
 int FUNC_5 (char*,unsigned int,unsigned int,unsigned int,int,...) ;
 scalar_t__ FUNC_6 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (unsigned int,unsigned int) ;
 unsigned long VAR_16 ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct rxrpc_call*,unsigned int,int,int*) ;
 int FUNC_13 (struct rxrpc_call*) ;
 int FUNC_14 (struct rxrpc_call*,scalar_t__,scalar_t__,int,int,int ) ;
 int VAR_17 ;
 int FUNC_15 (char*,struct rxrpc_call*,unsigned int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_16 (struct rxrpc_call*) ;
 int FUNC_17 (struct rxrpc_call*,unsigned long,unsigned long,int ) ;
 struct rxrpc_skb_priv* FUNC_18 (struct sk_buff*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_19 (unsigned int,int *) ;
 int FUNC_20 (unsigned int*,unsigned int) ;
 int FUNC_21 () ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (unsigned int,int *) ;
 int FUNC_25 (int ,scalar_t__) ;
 int FUNC_26 (struct rxrpc_call*,int ,scalar_t__,unsigned int) ;
 int FUNC_27 (int ,unsigned int,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_28(struct rxrpc_call *VAR_23, struct sk_buff *VAR_24)
{
 struct rxrpc_skb_priv *VAR_25 = FUNC_18(VAR_24);
 enum rxrpc_call_state VAR_26;
 unsigned int VAR_27;
 rxrpc_serial_t VAR_28 = VAR_25->hdr.serial, VAR_29 = 0;
 rxrpc_seq_t VAR_30 = VAR_25->hdr.seq, VAR_31;
 bool VAR_32 = 0, VAR_33 = 0;
 u8 VAR_34 = 0;

 FUNC_2("{%u,%u},{%u,%u}",
        VAR_23->rx_hard_ack, VAR_23->rx_top, VAR_24->len, VAR_30);

 FUNC_5("Rx DATA %%%u { #%u f=%02x n=%u }",
        VAR_25->hdr.serial, VAR_30, VAR_25->hdr.flags, VAR_25->nr_subpackets);

 VAR_26 = FUNC_0(VAR_23->state);
 if (VAR_26 >= VAR_8) {
  FUNC_10(VAR_24, VAR_20);
  return;
 }

 if (VAR_23->state == VAR_10) {
  unsigned long VAR_35 = FUNC_0(VAR_23->next_req_timo);
  unsigned long VAR_36, VAR_37;

  if (VAR_35) {
   VAR_36 = VAR_16;
   VAR_37 = VAR_36 + VAR_35;
   FUNC_1(VAR_23->expect_req_by, VAR_37);
   FUNC_17(VAR_23, VAR_37, VAR_36,
      VAR_22);
  }
 }

 FUNC_22(&VAR_23->input_lock);




 if ((VAR_26 == VAR_7 ||
      VAR_26 == VAR_6) &&
     !FUNC_16(VAR_23))
  goto unlock;

 VAR_23->ackr_prev_seq = VAR_30;
 VAR_31 = FUNC_0(VAR_23->rx_hard_ack);

 if (VAR_25->nr_subpackets > 1) {
  if (VAR_23->nr_jumbo_bad > 3) {
   VAR_34 = VAR_3;
   VAR_29 = VAR_28;
   goto ack;
  }
 }

 for (VAR_27 = 0; VAR_27 < VAR_25->nr_subpackets; VAR_27++) {
  rxrpc_serial_t VAR_38 = VAR_25->hdr.serial + VAR_27;
  rxrpc_seq_t VAR_39 = VAR_30 + VAR_27;
  unsigned int VAR_40 = VAR_39 & VAR_14;
  bool VAR_41 = (VAR_27 == VAR_25->nr_subpackets - 1);
  bool VAR_42 = VAR_41 && (VAR_25->rx_flags & VAR_15);
  u8 VAR_43, VAR_44 = VAR_27;

  FUNC_5("Rx DATA+%u %%%u { #%x t=%u l=%u }",
       VAR_27, VAR_38, VAR_39, VAR_41, VAR_42);

  if (VAR_42) {
   if (FUNC_24(VAR_9, &VAR_23->flags) &&
       VAR_39 != VAR_23->rx_top) {
    FUNC_15("LSN", VAR_23, VAR_39);
    goto unlock;
   }
  } else {
   if (FUNC_24(VAR_9, &VAR_23->flags) &&
       FUNC_7(VAR_39, VAR_23->rx_top)) {
    FUNC_15("LSA", VAR_23, VAR_39);
    goto unlock;
   }
  }

  VAR_43 = 0;
  if (VAR_42)
   VAR_43 |= VAR_12;
  if (!VAR_41)
   VAR_43 |= VAR_11;
  if (FUNC_24(VAR_27, VAR_25->rx_req_ack))
   VAR_43 |= VAR_13;
  FUNC_27(VAR_23->debug_id, VAR_39, VAR_38, VAR_43, VAR_44);

  if (FUNC_9(VAR_39, VAR_31)) {
   VAR_34 = VAR_1;
   VAR_29 = VAR_38;
   continue;
  }

  if (VAR_23->rxtx_buffer[VAR_40]) {
   FUNC_12(VAR_23, VAR_39, VAR_25->nr_subpackets > 1,
          &VAR_33);
   if (VAR_34 != VAR_1) {
    VAR_34 = VAR_1;
    VAR_29 = VAR_38;
   }
   VAR_32 = 1;
   continue;
  }

  if (FUNC_6(VAR_39, VAR_31 + VAR_23->rx_winsize)) {
   VAR_34 = VAR_2;
   VAR_29 = VAR_38;
   if (VAR_43 & VAR_11) {
    if (!VAR_33) {
     VAR_23->nr_jumbo_bad++;
     VAR_33 = 1;
    }
   }

   goto ack;
  }

  if (VAR_43 & VAR_13 && !VAR_34) {
   VAR_34 = VAR_5;
   VAR_29 = VAR_38;
  }
  if (!VAR_41)
   FUNC_11(VAR_24, VAR_21);
  VAR_23->rxtx_annotations[VAR_40] = VAR_44;
  FUNC_21();
  VAR_23->rxtx_buffer[VAR_40] = VAR_24;
  if (FUNC_6(VAR_39, VAR_23->rx_top)) {
   FUNC_20(&VAR_23->rx_top, VAR_39);
  } else if (FUNC_8(VAR_39, VAR_23->rx_top)) {

   if (!VAR_34) {
    VAR_34 = VAR_0;
    VAR_29 = VAR_38;
   }
   VAR_32 = 1;
  }

  if (VAR_41) {




   VAR_24 = ((void*)0);
  }

  if (VAR_42) {
   FUNC_19(VAR_9, &VAR_23->flags);
   if (!VAR_34) {
    VAR_34 = VAR_0;
    VAR_29 = VAR_38;
   }
   FUNC_26(VAR_23, VAR_19, VAR_38, VAR_39);
  } else {
   FUNC_26(VAR_23, VAR_18, VAR_38, VAR_39);
  }

  if (FUNC_7(VAR_39, VAR_23->rx_expect_next)) {
   if (FUNC_6(VAR_39, VAR_23->rx_expect_next)) {
    FUNC_4("OOS %u > %u", VAR_39, VAR_23->rx_expect_next);
    VAR_34 = VAR_4;
    VAR_29 = VAR_38;
   }
   VAR_23->rx_expect_next = VAR_39 + 1;
  }
 }

ack:
 if (VAR_34)
  FUNC_14(VAR_23, VAR_34, VAR_29,
      VAR_32, 1,
      VAR_17);
 else
  FUNC_14(VAR_23, VAR_0, VAR_28,
      0, 1,
      VAR_17);

 if (VAR_30 == FUNC_0(VAR_23->rx_hard_ack) + 1) {
  FUNC_25(VAR_23->debug_id, VAR_28);
  FUNC_13(VAR_23);
 }

unlock:
 FUNC_23(&VAR_23->input_lock);
 FUNC_10(VAR_24, VAR_20);
 FUNC_3(" [queued]");
}
