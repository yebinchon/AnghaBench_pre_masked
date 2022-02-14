
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct rxrpc_sock {int discard_new_call; int notify_new_call; } ;
typedef int rxrpc_notify_new_call_t ;
typedef int rxrpc_discard_new_call_t ;


 struct rxrpc_sock* FUNC_0 (int ) ;

void FUNC_1(
 struct socket *VAR_0,
 rxrpc_notify_new_call_t VAR_1,
 rxrpc_discard_new_call_t VAR_2)
{
 struct rxrpc_sock *VAR_3 = FUNC_0(VAR_0->sk);

 VAR_3->notify_new_call = VAR_1;
 VAR_3->discard_new_call = VAR_2;
}
