
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef struct l2cap_chan* u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct l2cap_ctrl {int final; struct l2cap_chan* txseq; int reqseq; struct l2cap_chan* retries; } ;
struct TYPE_4__ {scalar_t__ head; } ;
struct l2cap_chan {scalar_t__ fcs; int buffer_seq; int last_acked_seq; int flags; TYPE_1__ retrans_list; int conn_state; struct l2cap_chan* max_tx; int tx_q; } ;
struct TYPE_5__ {struct l2cap_ctrl l2cap; } ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_2 (struct l2cap_ctrl*) ;
 int FUNC_3 (struct l2cap_ctrl*) ;
 TYPE_3__* FUNC_4 (struct sk_buff*) ;
 struct l2cap_chan* FUNC_5 (int ,int *,scalar_t__) ;
 int FUNC_6 (struct l2cap_chan*,struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int *,struct l2cap_chan*) ;
 int FUNC_8 (struct l2cap_chan*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 struct l2cap_chan* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct l2cap_chan*,scalar_t__) ;
 int FUNC_12 (int ,scalar_t__) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 struct sk_buff* FUNC_15 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;

__attribute__((used)) static void FUNC_19(struct l2cap_chan *VAR_9)
{
 struct l2cap_ctrl VAR_10;
 struct sk_buff *VAR_11;
 struct sk_buff *VAR_12;
 u16 VAR_13;

 FUNC_0("chan %p", VAR_9);

 if (FUNC_18(VAR_0, &VAR_9->conn_state))
  return;

 if (FUNC_1(VAR_9))
  return;

 while (VAR_9->retrans_list.head != VAR_8) {
  VAR_13 = FUNC_10(&VAR_9->retrans_list);

  VAR_11 = FUNC_7(&VAR_9->tx_q, VAR_13);
  if (!VAR_11) {
   FUNC_0("Error: Can't retransmit seq %d, frame missing",
          VAR_13);
   continue;
  }

  FUNC_4(VAR_11)->l2cap.retries++;
  VAR_10 = FUNC_4(VAR_11)->l2cap;

  if (VAR_9->max_tx != 0 &&
      FUNC_4(VAR_11)->l2cap.retries > VAR_9->max_tx) {
   FUNC_0("Retry limit exceeded (%d)", VAR_9->max_tx);
   FUNC_8(VAR_9, VAR_2);
   FUNC_9(&VAR_9->retrans_list);
   break;
  }

  VAR_10.reqseq = VAR_9->buffer_seq;
  if (FUNC_17(VAR_1, &VAR_9->conn_state))
   VAR_10.final = 1;
  else
   VAR_10.final = 0;

  if (FUNC_14(VAR_11)) {



   VAR_12 = FUNC_15(VAR_11, VAR_4);
  } else {
   VAR_12 = FUNC_13(VAR_11, VAR_4);
  }

  if (!VAR_12) {
   FUNC_9(&VAR_9->retrans_list);
   break;
  }


  if (FUNC_18(VAR_3, &VAR_9->flags)) {
   FUNC_12(FUNC_3(&VAR_10),
        VAR_12->data + VAR_7);
  } else {
   FUNC_11(FUNC_2(&VAR_10),
        VAR_12->data + VAR_7);
  }


  if (VAR_9->fcs == VAR_5) {
   u16 VAR_14 = FUNC_5(0, (u8 *) VAR_12->data,
     VAR_12->len - VAR_6);
   FUNC_11(VAR_14, FUNC_16(VAR_12) -
      VAR_6);
  }

  FUNC_6(VAR_9, VAR_12);

  FUNC_0("Resent txseq %d", VAR_10.txseq);

  VAR_9->last_acked_seq = VAR_9->buffer_seq;
 }
}
