
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct rxrpc_call {size_t ackr_reason; int ackr_serial; int ack_at; int tx_backoff; TYPE_1__* peer; int events; } ;
typedef scalar_t__ s8 ;
typedef enum rxrpc_propose_ack_trace { ____Placeholder_rxrpc_propose_ack_trace } rxrpc_propose_ack_trace ;
typedef enum rxrpc_propose_ack_outcome { ____Placeholder_rxrpc_propose_ack_outcome } rxrpc_propose_ack_outcome ;
struct TYPE_2__ {scalar_t__ rtt_usage; int rtt; } ;


 scalar_t__ FUNC_0 (int ) ;


 size_t VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (char*,...) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__* VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct rxrpc_call*,int,int) ;
 int FUNC_5 (struct rxrpc_call*) ;
 int FUNC_6 (struct rxrpc_call*,unsigned long,unsigned long,int ) ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (unsigned long,int ) ;
 int FUNC_10 (struct rxrpc_call*,int,size_t,int,int,int,int) ;

__attribute__((used)) static void FUNC_11(struct rxrpc_call *VAR_12, u8 VAR_13,
    u32 VAR_14, bool VAR_15, bool VAR_16,
    enum rxrpc_propose_ack_trace VAR_17)
{
 enum rxrpc_propose_ack_outcome VAR_18 = VAR_8;
 unsigned long VAR_19 = VAR_10;
 s8 VAR_20 = VAR_4[VAR_13];




 if (VAR_13 == VAR_0) {
  FUNC_4(VAR_12, VAR_15, VAR_16);
  goto trace;
 }




 FUNC_2("prior %u %u vs %u %u",
        VAR_13, VAR_20,
        VAR_12->ackr_reason, VAR_4[VAR_12->ackr_reason]);
 if (VAR_13 == VAR_12->ackr_reason) {
  if (VAR_1 & (1 << VAR_13)) {
   VAR_18 = VAR_7;
   VAR_12->ackr_serial = VAR_14;
  }
  if (!VAR_15)
   goto trace;
 } else if (VAR_20 > VAR_4[VAR_12->ackr_reason]) {
  VAR_12->ackr_reason = VAR_13;
  VAR_12->ackr_serial = VAR_14;
 } else {
  VAR_18 = VAR_6;
 }

 switch (VAR_13) {
 case 128:
  if (VAR_9 < VAR_19)
   VAR_19 = VAR_9;
  if (VAR_14 == 1)
   VAR_15 = 0;
  break;

 case 130:
  if (VAR_10 < VAR_19)
   VAR_19 = VAR_10;
  break;

 case 129:
  if (VAR_5 < VAR_19)
   VAR_19 = VAR_5;
  break;

 default:
  VAR_15 = 1;
  break;
 }

 if (FUNC_8(VAR_2, &VAR_12->events)) {
  FUNC_2("already scheduled");
 } else if (VAR_15 || VAR_19 == 0) {
  FUNC_2("immediate ACK %lx", VAR_12->events);
  if (!FUNC_7(VAR_2, &VAR_12->events) &&
      VAR_16)
   FUNC_5(VAR_12);
 } else {
  unsigned long VAR_21 = VAR_3, VAR_22;

  if (VAR_12->peer->rtt_usage > 0)
   VAR_22 = FUNC_3(VAR_12->peer->rtt);
  else
   VAR_22 = VAR_19;

  VAR_22 += FUNC_0(VAR_12->tx_backoff);
  VAR_22 += VAR_21;
  if (FUNC_9(VAR_22, VAR_12->ack_at)) {
   FUNC_1(VAR_12->ack_at, VAR_22);
   FUNC_6(VAR_12, VAR_22, VAR_21,
      VAR_11);
  }
 }

trace:
 FUNC_10(VAR_12, VAR_17, VAR_13, VAR_14, VAR_15,
    VAR_16, VAR_18);
}
