
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_sock {int dummy; } ;
struct rxrpc_peer {int keepalive_link; int hash_link; int srx; } ;
struct rxrpc_net {int peer_hash_lock; int peer_keepalive_new; int peer_hash; } ;
struct rxrpc_local {struct rxrpc_net* rxnet; } ;


 int FUNC_0 (int ,int *,unsigned long) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct rxrpc_sock*,struct rxrpc_peer*,unsigned long) ;
 unsigned long FUNC_3 (struct rxrpc_local*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct rxrpc_sock *VAR_0, struct rxrpc_local *VAR_1,
        struct rxrpc_peer *VAR_2)
{
 struct rxrpc_net *VAR_3 = VAR_1->rxnet;
 unsigned long VAR_4;

 VAR_4 = FUNC_3(VAR_1, &VAR_2->srx);
 FUNC_2(VAR_0, VAR_2, VAR_4);

 FUNC_4(&VAR_3->peer_hash_lock);
 FUNC_0(VAR_3->peer_hash, &VAR_2->hash_link, VAR_4);
 FUNC_1(&VAR_2->keepalive_link, &VAR_3->peer_keepalive_new);
 FUNC_5(&VAR_3->peer_hash_lock);
}
