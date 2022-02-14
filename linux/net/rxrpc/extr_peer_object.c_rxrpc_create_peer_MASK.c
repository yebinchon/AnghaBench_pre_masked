
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_rxrpc {int dummy; } ;
struct rxrpc_sock {int dummy; } ;
struct rxrpc_peer {int srx; } ;
struct rxrpc_local {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct rxrpc_peer*) ;
 int FUNC_2 (int *,struct sockaddr_rxrpc*,int) ;
 struct rxrpc_peer* FUNC_3 (struct rxrpc_local*,int ) ;
 int FUNC_4 (struct rxrpc_sock*,struct rxrpc_peer*,unsigned long) ;

__attribute__((used)) static struct rxrpc_peer *FUNC_5(struct rxrpc_sock *VAR_0,
         struct rxrpc_local *VAR_1,
         struct sockaddr_rxrpc *VAR_2,
         unsigned long VAR_3,
         gfp_t VAR_4)
{
 struct rxrpc_peer *VAR_5;

 FUNC_0("");

 VAR_5 = FUNC_3(VAR_1, VAR_4);
 if (VAR_5) {
  FUNC_2(&VAR_5->srx, VAR_2, sizeof(*VAR_2));
  FUNC_4(VAR_0, VAR_5, VAR_3);
 }

 FUNC_1(" = %p", VAR_5);
 return VAR_5;
}
