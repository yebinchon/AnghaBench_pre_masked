
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {struct sk_buff* next; } ;
struct rxrpc_call {int acks_lowest_nak; int tx_hard_ack; int* rxtx_annotations; int waitq; int lock; int flags; struct sk_buff** rxtx_buffer; } ;
struct rxrpc_ack_summary {int new_low_nack; int nr_rot_new_acks; } ;
typedef void* rxrpc_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,void*) ;
 scalar_t__ FUNC_1 (int,void*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct rxrpc_call*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static bool FUNC_10(struct rxrpc_call *VAR_9, rxrpc_seq_t VAR_10,
       struct rxrpc_ack_summary *VAR_11)
{
 struct sk_buff *VAR_12, *VAR_13 = ((void*)0);
 bool VAR_14 = 0;
 int VAR_15;
 u8 VAR_16;

 if (VAR_9->acks_lowest_nak == VAR_9->tx_hard_ack) {
  VAR_9->acks_lowest_nak = VAR_10;
 } else if (FUNC_1(VAR_9->acks_lowest_nak, VAR_10)) {
  VAR_11->new_low_nack = 1;
  VAR_9->acks_lowest_nak = VAR_10;
 }

 FUNC_6(&VAR_9->lock);

 while (FUNC_0(VAR_9->tx_hard_ack, VAR_10)) {
  VAR_9->tx_hard_ack++;
  VAR_15 = VAR_9->tx_hard_ack & VAR_1;
  VAR_12 = VAR_9->rxtx_buffer[VAR_15];
  VAR_16 = VAR_9->rxtx_annotations[VAR_15];
  FUNC_3(VAR_12, VAR_6);
  VAR_9->rxtx_buffer[VAR_15] = ((void*)0);
  VAR_9->rxtx_annotations[VAR_15] = 0;
  VAR_12->next = VAR_13;
  VAR_13 = VAR_12;

  if (VAR_16 & VAR_3) {
   FUNC_4(VAR_0, &VAR_9->flags);
   VAR_14 = 1;
  }
  if ((VAR_16 & VAR_4) != VAR_2)
   VAR_11->nr_rot_new_acks++;
 }

 FUNC_7(&VAR_9->lock);

 FUNC_8(VAR_9, (VAR_14 ?
        VAR_8 :
        VAR_7));
 FUNC_9(&VAR_9->waitq);

 while (VAR_13) {
  VAR_12 = VAR_13;
  VAR_13 = VAR_12->next;
  FUNC_5(VAR_12);
  FUNC_2(VAR_12, VAR_5);
 }

 return VAR_14;
}
