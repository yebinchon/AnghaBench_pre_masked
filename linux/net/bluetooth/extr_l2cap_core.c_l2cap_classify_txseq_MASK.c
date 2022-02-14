
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ head; } ;
struct l2cap_chan {scalar_t__ expected_tx_seq; scalar_t__ rx_state; int tx_win; int tx_win_max; int last_acked_seq; TYPE_1__ srej_list; int srej_q; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct l2cap_chan*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static u8 FUNC_4(struct l2cap_chan *VAR_9, u16 VAR_10)
{
 FUNC_0("chan %p, txseq %d", VAR_9, VAR_10);

 FUNC_0("last_acked_seq %d, expected_tx_seq %d", VAR_9->last_acked_seq,
        VAR_9->expected_tx_seq);

 if (VAR_9->rx_state == VAR_0) {
  if (FUNC_1(VAR_9, VAR_10, VAR_9->last_acked_seq) >=
      VAR_9->tx_win) {



   if (VAR_9->tx_win <= ((VAR_9->tx_win_max + 1) >> 1)) {
    FUNC_0("Invalid/Ignore - after SREJ");
    return VAR_6;
   } else {
    FUNC_0("Invalid - in window after SREJ sent");
    return VAR_5;
   }
  }

  if (VAR_9->srej_list.head == VAR_10) {
   FUNC_0("Expected SREJ");
   return VAR_4;
  }

  if (FUNC_2(&VAR_9->srej_q, VAR_10)) {
   FUNC_0("Duplicate SREJ - txseq already stored");
   return VAR_2;
  }

  if (FUNC_3(&VAR_9->srej_list, VAR_10)) {
   FUNC_0("Unexpected SREJ - not requested");
   return VAR_8;
  }
 }

 if (VAR_9->expected_tx_seq == VAR_10) {
  if (FUNC_1(VAR_9, VAR_10, VAR_9->last_acked_seq) >=
      VAR_9->tx_win) {
   FUNC_0("Invalid - txseq outside tx window");
   return VAR_5;
  } else {
   FUNC_0("Expected");
   return VAR_3;
  }
 }

 if (FUNC_1(VAR_9, VAR_10, VAR_9->last_acked_seq) <
     FUNC_1(VAR_9, VAR_9->expected_tx_seq, VAR_9->last_acked_seq)) {
  FUNC_0("Duplicate - expected_tx_seq later than txseq");
  return VAR_1;
 }

 if (FUNC_1(VAR_9, VAR_10, VAR_9->last_acked_seq) >= VAR_9->tx_win) {
  if (VAR_9->tx_win <= ((VAR_9->tx_win_max + 1) >> 1)) {
   FUNC_0("Invalid/Ignore - txseq outside tx window");
   return VAR_6;
  } else {
   FUNC_0("Invalid - txseq outside tx window");
   return VAR_5;
  }
 } else {
  FUNC_0("Unexpected - txseq indicates missing frames");
  return VAR_7;
 }
}
