
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_rxrpc {int dummy; } ;
struct TYPE_2__ {int transport; } ;
struct rxrpc_peer {int usage; TYPE_1__ srx; int debug_id; } ;
struct rxrpc_local {int dummy; } ;


 struct rxrpc_peer* FUNC_0 (struct rxrpc_local*,struct sockaddr_rxrpc const*,unsigned long) ;
 int FUNC_1 (char*,struct rxrpc_peer*,int ) ;
 int FUNC_2 (char*,int ,int *) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (struct rxrpc_local*,struct sockaddr_rxrpc const*) ;

struct rxrpc_peer *FUNC_5(struct rxrpc_local *VAR_0,
      const struct sockaddr_rxrpc *VAR_1)
{
 struct rxrpc_peer *VAR_2;
 unsigned long VAR_3 = FUNC_4(VAR_0, VAR_1);

 VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_3);
 if (VAR_2) {
  FUNC_2("PEER %d {%pISp}", VAR_2->debug_id, &VAR_2->srx.transport);
  FUNC_1(" = %p {u=%d}", VAR_2, FUNC_3(&VAR_2->usage));
 }
 return VAR_2;
}
