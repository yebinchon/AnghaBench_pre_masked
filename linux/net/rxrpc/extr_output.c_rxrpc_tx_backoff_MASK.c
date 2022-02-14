
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct rxrpc_call {int tx_backoff; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rxrpc_call *VAR_1, int VAR_2)
{
 if (VAR_2 < 0) {
  u16 VAR_3 = FUNC_0(VAR_1->tx_backoff);

  if (VAR_3 < VAR_0)
   FUNC_1(VAR_1->tx_backoff, VAR_3 + 1);
 } else {
  FUNC_1(VAR_1->tx_backoff, 0);
 }
}
