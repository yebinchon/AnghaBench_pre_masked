
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_rxrpc {int dummy; } ;
struct rxrpc_net {int dummy; } ;
struct TYPE_2__ {scalar_t__ srx_service; } ;
struct rxrpc_local {int debug_id; TYPE_1__ srx; int services_lock; int lock; int client_conns_lock; int client_conns; int event_queue; int reject_queue; int defrag_sem; int processor; int link; struct rxrpc_net* rxnet; int active_users; int usage; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,struct rxrpc_local*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 struct rxrpc_local* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*,struct sockaddr_rxrpc const*,int) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int,int *) ;

__attribute__((used)) static struct rxrpc_local *FUNC_12(struct rxrpc_net *VAR_5,
          const struct sockaddr_rxrpc *VAR_6)
{
 struct rxrpc_local *VAR_7;

 VAR_7 = FUNC_6(sizeof(struct rxrpc_local), VAR_0);
 if (VAR_7) {
  FUNC_4(&VAR_7->usage, 1);
  FUNC_4(&VAR_7->active_users, 1);
  VAR_7->rxnet = VAR_5;
  FUNC_0(&VAR_7->link);
  FUNC_1(&VAR_7->processor, VAR_4);
  FUNC_5(&VAR_7->defrag_sem);
  FUNC_9(&VAR_7->reject_queue);
  FUNC_9(&VAR_7->event_queue);
  VAR_7->client_conns = VAR_1;
  FUNC_10(&VAR_7->client_conns_lock);
  FUNC_10(&VAR_7->lock);
  FUNC_8(&VAR_7->services_lock);
  VAR_7->debug_id = FUNC_3(&VAR_2);
  FUNC_7(&VAR_7->srx, VAR_6, sizeof(*VAR_6));
  VAR_7->srx.srx_service = 0;
  FUNC_11(VAR_7->debug_id, VAR_3, 1, ((void*)0));
 }

 FUNC_2(" = %p", VAR_7);
 return VAR_7;
}
