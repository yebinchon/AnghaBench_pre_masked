
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {int next_rx_timo; int keepalive_at; } ;


 int FUNC_0 (int ,unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct rxrpc_call*,unsigned long,unsigned long,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct rxrpc_call *VAR_2)
{
 unsigned long VAR_3 = VAR_0, VAR_4 = VAR_2->next_rx_timo / 6;

 VAR_4 += VAR_3;
 FUNC_0(VAR_2->keepalive_at, VAR_4);
 FUNC_1(VAR_2, VAR_4, VAR_3,
    VAR_1);
}
