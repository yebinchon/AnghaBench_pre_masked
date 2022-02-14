
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_sock {int sk; } ;
struct rxrpc_call {int user_call_ID; } ;
typedef int (* rxrpc_notify_end_tx_t ) (int *,struct rxrpc_call*,int ) ;



__attribute__((used)) static void FUNC_0(struct rxrpc_sock *VAR_0, struct rxrpc_call *VAR_1,
    rxrpc_notify_end_tx_t VAR_2)
{
 if (VAR_2)
  VAR_2(&VAR_0->sk, VAR_1, VAR_1->user_call_ID);
}
