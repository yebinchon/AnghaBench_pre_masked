
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rxrpc_net {int conn_lock; } ;
struct TYPE_5__ {TYPE_1__* local; } ;
struct rxrpc_connection {int rcu; int rx_queue; int proc_link; int cache_link; TYPE_3__* channels; TYPE_2__ params; } ;
struct TYPE_6__ {int call; } ;
struct TYPE_4__ {struct rxrpc_net* rxnet; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct rxrpc_connection *VAR_1)
{
 struct rxrpc_net *VAR_2 = VAR_1->params.local->rxnet;

 FUNC_0(!FUNC_4(VAR_1->channels[0].call) &&
        !FUNC_4(VAR_1->channels[1].call) &&
        !FUNC_4(VAR_1->channels[2].call) &&
        !FUNC_4(VAR_1->channels[3].call));
 FUNC_0(FUNC_3(&VAR_1->cache_link));

 FUNC_6(&VAR_2->conn_lock);
 FUNC_2(&VAR_1->proc_link);
 FUNC_7(&VAR_2->conn_lock);





 FUNC_5(&VAR_1->rx_queue);





 FUNC_1(&VAR_1->rcu, VAR_0);
}
