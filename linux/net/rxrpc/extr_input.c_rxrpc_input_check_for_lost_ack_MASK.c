
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rxrpc_call {int tx_hard_ack; int acks_lost_top; scalar_t__* rxtx_annotations; int events; int lock; } ;
typedef int rxrpc_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct rxrpc_call*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct rxrpc_call *VAR_5)
{
 rxrpc_seq_t VAR_6, VAR_7, VAR_8;
 bool VAR_9 = 0;

 FUNC_3(&VAR_5->lock);

 VAR_7 = VAR_5->tx_hard_ack + 1;
 VAR_6 = VAR_5->acks_lost_top;
 if (FUNC_0(VAR_7, VAR_6)) {
  for (VAR_8 = VAR_7; FUNC_1(VAR_8, VAR_6); VAR_8++) {
   int VAR_10 = VAR_8 & VAR_1;
   u8 VAR_11 = VAR_5->rxtx_annotations[VAR_10];
   u8 VAR_12 = VAR_11 & VAR_2;

   if (VAR_12 != VAR_4)
    continue;
   VAR_11 &= ~VAR_2;
   VAR_11 |= VAR_3;
   VAR_5->rxtx_annotations[VAR_10] = VAR_11;
   VAR_9 = 1;
  }
 }

 FUNC_4(&VAR_5->lock);

 if (VAR_9 && !FUNC_5(VAR_0, &VAR_5->events))
  FUNC_2(VAR_5);
}
