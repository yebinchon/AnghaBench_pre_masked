
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_rxrpc {int transport; } ;
struct rxrpc_sock {int dummy; } ;
struct TYPE_2__ {int transport; } ;
struct rxrpc_peer {int usage; TYPE_1__ srx; int debug_id; int keepalive_link; int hash_link; } ;
struct rxrpc_net {int peer_hash_lock; int peer_keepalive_new; int peer_hash; } ;
struct rxrpc_local {struct rxrpc_net* rxnet; } ;
typedef int gfp_t ;


 struct rxrpc_peer* FUNC_0 (struct rxrpc_local*,struct sockaddr_rxrpc*,unsigned long) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,unsigned long) ;
 int FUNC_6 (struct rxrpc_peer*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct rxrpc_peer* FUNC_10 (struct rxrpc_sock*,struct rxrpc_local*,struct sockaddr_rxrpc*,unsigned long,int ) ;
 int FUNC_11 (struct rxrpc_peer*) ;
 unsigned long FUNC_12 (struct rxrpc_local*,struct sockaddr_rxrpc*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

struct rxrpc_peer *FUNC_15(struct rxrpc_sock *VAR_0,
         struct rxrpc_local *VAR_1,
         struct sockaddr_rxrpc *VAR_2, gfp_t VAR_3)
{
 struct rxrpc_peer *VAR_4, *VAR_5;
 struct rxrpc_net *VAR_6 = VAR_1->rxnet;
 unsigned long VAR_7 = FUNC_12(VAR_1, VAR_2);

 FUNC_1("{%pISp}", &VAR_2->transport);


 FUNC_8();
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_7);
 if (VAR_4 && !FUNC_11(VAR_4))
  VAR_4 = ((void*)0);
 FUNC_9();

 if (!VAR_4) {



  VAR_5 = FUNC_10(VAR_0, VAR_1, VAR_2, VAR_7, VAR_3);
  if (!VAR_5) {
   FUNC_2(" = NULL [nomem]");
   return ((void*)0);
  }

  FUNC_13(&VAR_6->peer_hash_lock);


  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_7);
  if (VAR_4 && !FUNC_11(VAR_4))
   VAR_4 = ((void*)0);
  if (!VAR_4) {
   FUNC_5(VAR_6->peer_hash,
         &VAR_5->hash_link, VAR_7);
   FUNC_7(&VAR_5->keepalive_link,
          &VAR_6->peer_keepalive_new);
  }

  FUNC_14(&VAR_6->peer_hash_lock);

  if (VAR_4)
   FUNC_6(VAR_5);
  else
   VAR_4 = VAR_5;
 }

 FUNC_3("PEER %d {%pISp}", VAR_4->debug_id, &VAR_4->srx.transport);

 FUNC_2(" = %p {u=%d}", VAR_4, FUNC_4(&VAR_4->usage));
 return VAR_4;
}
