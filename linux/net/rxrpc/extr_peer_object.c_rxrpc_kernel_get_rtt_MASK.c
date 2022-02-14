
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct socket {int dummy; } ;
struct rxrpc_call {TYPE_1__* peer; } ;
struct TYPE_2__ {int rtt; } ;



u64 FUNC_0(struct socket *VAR_0, struct rxrpc_call *VAR_1)
{
 return VAR_1->peer->rtt;
}
