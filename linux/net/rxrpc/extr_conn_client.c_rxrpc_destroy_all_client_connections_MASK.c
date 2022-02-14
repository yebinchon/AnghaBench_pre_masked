
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_net {int kill_all_client_conns; int client_conn_reaper; int client_conn_reap_timer; int client_conn_cache_lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct rxrpc_net *VAR_0)
{
 FUNC_1("");

 FUNC_5(&VAR_0->client_conn_cache_lock);
 VAR_0->kill_all_client_conns = 1;
 FUNC_6(&VAR_0->client_conn_cache_lock);

 FUNC_3(&VAR_0->client_conn_reap_timer);

 if (!FUNC_4(&VAR_0->client_conn_reaper))
  FUNC_0("destroy: queue failed");

 FUNC_2("");
}
