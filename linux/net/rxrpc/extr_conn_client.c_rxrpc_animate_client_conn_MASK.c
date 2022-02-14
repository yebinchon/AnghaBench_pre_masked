
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_net {unsigned int nr_client_conns; int waiting_client_conns; int client_conn_cache_lock; } ;
struct rxrpc_connection {int cache_state; int cache_link; int flags; int debug_id; } ;


 int FUNC_0 () ;






 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct rxrpc_net*,struct rxrpc_connection*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct rxrpc_connection*,int,int ) ;

__attribute__((used)) static void FUNC_10(struct rxrpc_net *VAR_4,
          struct rxrpc_connection *VAR_5)
{
 unsigned int VAR_6;

 FUNC_2("%d,%d", VAR_5->debug_id, VAR_5->cache_state);

 if (VAR_5->cache_state == 133 ||
     VAR_5->cache_state == 129)
  goto out;

 FUNC_6(&VAR_4->client_conn_cache_lock);

 VAR_6 = VAR_4->nr_client_conns;
 if (!FUNC_8(VAR_0, &VAR_5->flags)) {
  FUNC_9(VAR_5, -1, VAR_1);
  VAR_4->nr_client_conns = VAR_6 + 1;
 }

 switch (VAR_5->cache_state) {
 case 133:
 case 129:
 case 128:
  break;

 case 130:
 case 132:
 case 131:
  if (VAR_6 >= VAR_3)
   goto wait_for_capacity;
  goto activate_conn;

 default:
  FUNC_0();
 }

out_unlock:
 FUNC_7(&VAR_4->client_conn_cache_lock);
out:
 FUNC_3(" [%d]", VAR_5->cache_state);
 return;

activate_conn:
 FUNC_1("activate");
 FUNC_5(VAR_4, VAR_5);
 goto out_unlock;

wait_for_capacity:
 FUNC_1("wait");
 FUNC_9(VAR_5, -1, VAR_2);
 VAR_5->cache_state = 128;
 FUNC_4(&VAR_5->cache_link, &VAR_4->waiting_client_conns);
 goto out_unlock;
}
