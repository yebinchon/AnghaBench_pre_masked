
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_net {int service_conn_reap_timer; scalar_t__ live; } ;


 int FUNC_0 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct rxrpc_net *VAR_0,
      unsigned long VAR_1)
{
 if (VAR_0->live)
  FUNC_0(&VAR_0->service_conn_reap_timer, VAR_1);
}
