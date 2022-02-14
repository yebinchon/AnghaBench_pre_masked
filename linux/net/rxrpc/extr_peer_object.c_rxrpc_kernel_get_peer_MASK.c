
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr_rxrpc {int dummy; } ;
struct rxrpc_call {TYPE_1__* peer; } ;
struct TYPE_2__ {struct sockaddr_rxrpc srx; } ;



void FUNC_0(struct socket *VAR_0, struct rxrpc_call *VAR_1,
      struct sockaddr_rxrpc *VAR_2)
{
 *VAR_2 = VAR_1->peer->srx;
}
