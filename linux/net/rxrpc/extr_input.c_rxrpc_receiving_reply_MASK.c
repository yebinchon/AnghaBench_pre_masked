
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {int tx_phase; int flags; int ack_at; int resend_at; int lock; scalar_t__ ackr_reason; int tx_top; } ;
struct rxrpc_ack_summary {int member_0; } ;
typedef int rxrpc_seq_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned long) ;
 unsigned long VAR_2 ;
 int FUNC_2 (struct rxrpc_call*,int,char*) ;
 int FUNC_3 (char*,struct rxrpc_call*,int ) ;
 int FUNC_4 (struct rxrpc_call*,int ,struct rxrpc_ack_summary*) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct rxrpc_call*,int ,unsigned long) ;

__attribute__((used)) static bool FUNC_9(struct rxrpc_call *VAR_4)
{
 struct rxrpc_ack_summary VAR_5 = { 0 };
 unsigned long VAR_6, VAR_7;
 rxrpc_seq_t VAR_8 = FUNC_0(VAR_4->tx_top);

 if (VAR_4->ackr_reason) {
  FUNC_5(&VAR_4->lock);
  VAR_4->ackr_reason = 0;
  FUNC_6(&VAR_4->lock);
  VAR_6 = VAR_2;
  VAR_7 = VAR_6 + VAR_0;
  FUNC_1(VAR_4->resend_at, VAR_7);
  FUNC_1(VAR_4->ack_at, VAR_7);
  FUNC_8(VAR_4, VAR_3, VAR_6);
 }

 if (!FUNC_7(VAR_1, &VAR_4->flags)) {
  if (!FUNC_4(VAR_4, VAR_8, &VAR_5)) {
   FUNC_3("TXL", VAR_4, VAR_8);
   return 0;
  }
 }
 if (!FUNC_2(VAR_4, 1, "ETD"))
  return 0;
 VAR_4->tx_phase = 0;
 return 1;
}
