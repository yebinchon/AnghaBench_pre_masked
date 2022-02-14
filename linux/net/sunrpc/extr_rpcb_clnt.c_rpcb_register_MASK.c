
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunrpc_net {int rpcb_local_clnt; } ;
struct rpcbind_args {int r_prot; unsigned short r_port; int r_vers; int r_prog; } ;
struct rpc_message {int * rpc_proc; struct rpcbind_args* rpc_argp; } ;
struct net {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char*,int ,int ,int,unsigned short) ;
 struct sunrpc_net* FUNC_1 (struct net*,int ) ;
 int * VAR_2 ;
 int FUNC_2 (struct sunrpc_net*,int ,struct rpc_message*,int) ;
 int VAR_3 ;

int FUNC_3(struct net *VAR_4, u32 VAR_5, u32 VAR_6, int VAR_7, unsigned short VAR_8)
{
 struct rpcbind_args VAR_9 = {
  .r_prog = VAR_5,
  .r_vers = VAR_6,
  .r_prot = VAR_7,
  .r_port = VAR_8,
 };
 struct rpc_message VAR_10 = {
  .rpc_argp = &VAR_9,
 };
 struct sunrpc_net *VAR_11 = FUNC_1(VAR_4, VAR_3);
 bool VAR_12 = 0;

 FUNC_0("RPC:       %sregistering (%u, %u, %d, %u) with local "
   "rpcbind\n", (VAR_8 ? "" : "un"),
   VAR_5, VAR_6, VAR_7, VAR_8);

 VAR_10.rpc_proc = &VAR_2[VAR_1];
 if (VAR_8 != 0) {
  VAR_10.rpc_proc = &VAR_2[VAR_0];
  VAR_12 = 1;
 }

 return FUNC_2(VAR_11, VAR_11->rpcb_local_clnt, &VAR_10, VAR_12);
}
