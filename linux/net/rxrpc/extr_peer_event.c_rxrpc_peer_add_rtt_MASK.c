
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
struct rxrpc_peer {int rtt_sum; size_t rtt_cursor; size_t rtt_usage; int rtt; int rtt_input_lock; scalar_t__* rtt_cache; } ;
struct rxrpc_call {struct rxrpc_peer* peer; } ;
typedef scalar_t__ s64 ;
typedef int rxrpc_serial_t ;
typedef int ktime_t ;
typedef enum rxrpc_rtt_rx_trace { ____Placeholder_rxrpc_rtt_rx_trace } rxrpc_rtt_rx_trace ;


 int VAR_0 ;
 int FUNC_0 (int,size_t) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rxrpc_call*,int,int ,int ,scalar_t__,size_t,int) ;

void FUNC_6(struct rxrpc_call *VAR_1, enum rxrpc_rtt_rx_trace VAR_2,
   rxrpc_serial_t VAR_3, rxrpc_serial_t VAR_4,
   ktime_t VAR_5, ktime_t VAR_6)
{
 struct rxrpc_peer *VAR_7 = VAR_1->peer;
 s64 VAR_8;
 u64 VAR_9 = VAR_7->rtt_sum, VAR_10;
 u8 VAR_11 = VAR_7->rtt_cursor, VAR_12 = VAR_7->rtt_usage;

 VAR_8 = FUNC_2(FUNC_1(VAR_6, VAR_5));
 if (VAR_8 < 0)
  return;

 FUNC_3(&VAR_7->rtt_input_lock);


 VAR_9 -= VAR_7->rtt_cache[VAR_11];
 VAR_9 += VAR_8;
 VAR_7->rtt_cache[VAR_11] = VAR_8;
 VAR_7->rtt_cursor = (VAR_11 + 1) & (VAR_0 - 1);
 VAR_7->rtt_sum = VAR_9;
 if (VAR_12 < VAR_0) {
  VAR_12++;
  VAR_7->rtt_usage = VAR_12;
 }

 FUNC_4(&VAR_7->rtt_input_lock);


 if (VAR_12 == VAR_0) {
  VAR_10 = VAR_9 / VAR_0;
 } else {
  VAR_10 = VAR_9;
  FUNC_0(VAR_10, VAR_12);
 }


 VAR_7->rtt = VAR_10;
 FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_8,
      VAR_12, VAR_10);
}
