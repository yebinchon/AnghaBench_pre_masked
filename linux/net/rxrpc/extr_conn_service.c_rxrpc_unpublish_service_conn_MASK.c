
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxrpc_peer {int service_conn_lock; int service_conns; } ;
struct TYPE_2__ {struct rxrpc_peer* peer; } ;
struct rxrpc_connection {int service_node; int flags; TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rxrpc_connection *VAR_1)
{
 struct rxrpc_peer *VAR_2 = VAR_1->params.peer;

 FUNC_2(&VAR_2->service_conn_lock);
 if (FUNC_1(VAR_0, &VAR_1->flags))
  FUNC_0(&VAR_1->service_node, &VAR_2->service_conns);
 FUNC_3(&VAR_2->service_conn_lock);
}
