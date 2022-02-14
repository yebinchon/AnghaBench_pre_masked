
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rxrpc_call {int lock; } ;
typedef enum rxrpc_propose_ack_trace { ____Placeholder_rxrpc_propose_ack_trace } rxrpc_propose_ack_trace ;


 int FUNC_0 (struct rxrpc_call*,int ,int ,int,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rxrpc_call *VAR_0, u8 VAR_1,
         u32 VAR_2, bool VAR_3, bool VAR_4,
         enum rxrpc_propose_ack_trace VAR_5)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_0, VAR_1, VAR_2,
       VAR_3, VAR_4, VAR_5);
 FUNC_2(&VAR_0->lock);
}
