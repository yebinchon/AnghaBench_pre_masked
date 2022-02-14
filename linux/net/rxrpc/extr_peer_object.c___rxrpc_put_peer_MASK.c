
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxrpc_peer {TYPE_1__* local; int keepalive_link; int hash_link; int error_targets; } ;
struct rxrpc_net {int peer_hash_lock; } ;
struct TYPE_2__ {struct rxrpc_net* rxnet; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rxrpc_peer*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct rxrpc_peer *VAR_1)
{
 struct rxrpc_net *VAR_2 = VAR_1->local->rxnet;

 FUNC_0(FUNC_2(&VAR_1->error_targets));

 FUNC_6(&VAR_2->peer_hash_lock);
 FUNC_1(&VAR_1->hash_link);
 FUNC_4(&VAR_1->keepalive_link);
 FUNC_7(&VAR_2->peer_hash_lock);

 FUNC_5(VAR_1->local);
 FUNC_3(VAR_1, VAR_0);
}
