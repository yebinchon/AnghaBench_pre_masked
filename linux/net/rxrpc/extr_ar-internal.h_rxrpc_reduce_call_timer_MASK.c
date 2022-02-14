
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {int timer; } ;
typedef enum rxrpc_timer_trace { ____Placeholder_rxrpc_timer_trace } rxrpc_timer_trace ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (struct rxrpc_call*,int,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct rxrpc_call *VAR_0,
        unsigned long VAR_1,
        unsigned long VAR_2,
        enum rxrpc_timer_trace VAR_3)
{
 FUNC_1(VAR_0, VAR_3, VAR_2);
 FUNC_0(&VAR_0->timer, VAR_1);
}
