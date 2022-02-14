
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int rpcb_local_clnt4; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr {int dummy; } ;
struct rpcbind_args {int r_addr; int r_netid; int r_vers; int r_prog; } ;
struct rpc_message {int * rpc_proc; struct rpcbind_args* rpc_argp; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 unsigned short FUNC_2 (int ) ;
 int FUNC_3 (struct sockaddr const*,int ) ;
 int * VAR_3 ;
 int FUNC_4 (struct sunrpc_net*,int ,struct rpc_message*,int) ;

__attribute__((used)) static int FUNC_5(struct sunrpc_net *VAR_4,
          const struct sockaddr *VAR_5,
          struct rpc_message *VAR_6)
{
 const struct sockaddr_in6 *VAR_7 = (const struct sockaddr_in6 *)VAR_5;
 struct rpcbind_args *VAR_8 = VAR_6->rpc_argp;
 unsigned short VAR_9 = FUNC_2(VAR_7->sin6_port);
 bool VAR_10 = 0;
 int VAR_11;

 VAR_8->r_addr = FUNC_3(VAR_5, VAR_0);

 FUNC_0("RPC:       %sregistering [%u, %u, %s, '%s'] with "
  "local rpcbind\n", (VAR_9 ? "" : "un"),
   VAR_8->r_prog, VAR_8->r_vers,
   VAR_8->r_addr, VAR_8->r_netid);

 VAR_6->rpc_proc = &VAR_3[VAR_2];
 if (VAR_9 != 0) {
  VAR_6->rpc_proc = &VAR_3[VAR_1];
  VAR_10 = 1;
 }

 VAR_11 = FUNC_4(VAR_4, VAR_4->rpcb_local_clnt4, VAR_6, VAR_10);
 FUNC_1(VAR_8->r_addr);
 return VAR_11;
}
