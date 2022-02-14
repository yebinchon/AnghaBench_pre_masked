
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_net {int client_conn_reap_timer; scalar_t__ live; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct rxrpc_net *VAR_2)
{
 unsigned long VAR_3 = VAR_0;
 unsigned long VAR_4 = VAR_3 + VAR_1;

 if (VAR_2->live)
  FUNC_0(&VAR_2->client_conn_reap_timer, VAR_4);
}
