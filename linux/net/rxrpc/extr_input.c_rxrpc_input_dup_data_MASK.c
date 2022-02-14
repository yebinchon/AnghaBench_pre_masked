
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {int nr_jumbo_bad; } ;
typedef int rxrpc_seq_t ;



__attribute__((used)) static void FUNC_0(struct rxrpc_call *VAR_0, rxrpc_seq_t VAR_1,
     bool VAR_2, bool *VAR_3)
{

 if (VAR_2)
  return;





 if (!*VAR_3) {
  VAR_0->nr_jumbo_bad++;
  *VAR_3 = 1;
 }
}
