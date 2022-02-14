
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* peer; } ;
struct rxrpc_connection {int idle_timestamp; int channel_lock; TYPE_2__ params; } ;
struct rxrpc_call {struct rxrpc_connection* conn; int error_link; int cong_cwnd; TYPE_3__* peer; } ;
struct TYPE_6__ {int cong_cwnd; } ;
struct TYPE_4__ {int lock; } ;


 int FUNC_0 (struct rxrpc_connection*,struct rxrpc_call*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 void FUNC_2 (struct rxrpc_call*) ;
 scalar_t__ FUNC_3 (struct rxrpc_call*) ;
 int FUNC_4 (struct rxrpc_connection*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct rxrpc_call *VAR_1)
{
 struct rxrpc_connection *VAR_2 = VAR_1->conn;

 VAR_1->peer->cong_cwnd = VAR_1->cong_cwnd;

 FUNC_6(&VAR_2->params.peer->lock);
 FUNC_1(&VAR_1->error_link);
 FUNC_8(&VAR_2->params.peer->lock);

 if (FUNC_3(VAR_1))
  return FUNC_2(VAR_1);

 FUNC_5(&VAR_2->channel_lock);
 FUNC_0(VAR_2, VAR_1);
 FUNC_7(&VAR_2->channel_lock);

 VAR_1->conn = ((void*)0);
 VAR_2->idle_timestamp = VAR_0;
 FUNC_4(VAR_2);
}
