
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr_rxrpc {int dummy; } ;
struct rxrpc_sock {int dummy; } ;
struct rxrpc_net {int client_conn_reaper; } ;
struct rxrpc_conn_parameters {TYPE_1__* local; } ;
struct rxrpc_call {TYPE_4__* conn; int error_link; int user_call_ID; int debug_id; } ;
typedef int gfp_t ;
struct TYPE_9__ {TYPE_2__* peer; } ;
struct TYPE_10__ {TYPE_3__ params; } ;
struct TYPE_8__ {int lock; int error_targets; } ;
struct TYPE_7__ {struct rxrpc_net* rxnet; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct rxrpc_net*,TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_5 (struct rxrpc_net*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rxrpc_call*) ;
 int FUNC_8 (struct rxrpc_sock*,struct rxrpc_call*,struct rxrpc_conn_parameters*,struct sockaddr_rxrpc*,int ) ;
 int FUNC_9 (struct rxrpc_call*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_4__*,int,int ) ;

int FUNC_13(struct rxrpc_sock *VAR_1,
         struct rxrpc_call *VAR_2,
         struct rxrpc_conn_parameters *VAR_3,
         struct sockaddr_rxrpc *VAR_4,
         gfp_t VAR_5)
{
 struct rxrpc_net *VAR_6 = VAR_3->local->rxnet;
 int VAR_7;

 FUNC_0("{%d,%lx},", VAR_2->debug_id, VAR_2->user_call_ID);

 FUNC_6(&VAR_6->client_conn_reaper);
 FUNC_5(VAR_6);

 VAR_7 = FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 < 0)
  goto out;

 FUNC_4(VAR_6, VAR_2->conn);
 FUNC_3(VAR_2->conn);

 VAR_7 = FUNC_9(VAR_2, VAR_5);
 if (VAR_7 < 0) {
  FUNC_12(VAR_2->conn, VAR_7, VAR_0);
  FUNC_7(VAR_2);
  goto out;
 }

 FUNC_10(&VAR_2->conn->params.peer->lock);
 FUNC_2(&VAR_2->error_link,
      &VAR_2->conn->params.peer->error_targets);
 FUNC_11(&VAR_2->conn->params.peer->lock);

out:
 FUNC_1(" = %d", VAR_7);
 return VAR_7;
}
