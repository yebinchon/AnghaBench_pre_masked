
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct rxrpc_call {int tx_total_len; } ;
typedef int s64 ;


 int FUNC_0 (int) ;

void FUNC_1(struct socket *VAR_0, struct rxrpc_call *VAR_1,
    s64 VAR_2)
{
 FUNC_0(VAR_1->tx_total_len != -1);
 VAR_1->tx_total_len = VAR_2;
}
