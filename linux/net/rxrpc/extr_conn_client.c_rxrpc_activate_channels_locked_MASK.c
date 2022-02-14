
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rxrpc_connection {int cache_state; int active_chans; int waiting_calls; } ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rxrpc_connection*,int ) ;

__attribute__((used)) static void FUNC_3(struct rxrpc_connection *VAR_1)
{
 u8 VAR_2, VAR_3;

 switch (VAR_1->cache_state) {
 case 129:
  VAR_3 = VAR_0;
  break;
 case 128:
  VAR_3 = 0x01;
  break;
 default:
  return;
 }

 while (!FUNC_1(&VAR_1->waiting_calls) &&
        (VAR_2 = ~VAR_1->active_chans,
  VAR_2 &= VAR_3,
  VAR_2 != 0))
  FUNC_2(VAR_1, FUNC_0(VAR_2));
}
