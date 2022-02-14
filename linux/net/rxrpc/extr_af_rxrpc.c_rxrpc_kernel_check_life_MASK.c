
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct socket {int dummy; } ;
struct rxrpc_call {scalar_t__ state; int acks_latest; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(const struct socket *VAR_1,
        const struct rxrpc_call *VAR_2,
        u32 *VAR_3)
{
 *VAR_3 = VAR_2->acks_latest;
 return VAR_2->state != VAR_0;
}
