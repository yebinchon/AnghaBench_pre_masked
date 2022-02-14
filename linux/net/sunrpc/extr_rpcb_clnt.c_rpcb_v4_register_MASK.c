
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunrpc_net {int * rpcb_local_clnt4; } ;
struct sockaddr {int sa_family; } ;
struct rpcbind_args {char const* r_netid; int r_owner; int const r_vers; int const r_prog; } ;
struct rpc_message {struct rpcbind_args* rpc_argp; } ;
struct net {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sunrpc_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct sunrpc_net*,struct sockaddr const*,struct rpc_message*) ;
 int FUNC_2 (struct sunrpc_net*,struct sockaddr const*,struct rpc_message*) ;
 int FUNC_3 (struct sunrpc_net*,struct rpc_message*) ;
 int VAR_3 ;

int FUNC_4(struct net *VAR_4, const u32 VAR_5, const u32 VAR_6,
       const struct sockaddr *VAR_7, const char *VAR_8)
{
 struct rpcbind_args VAR_9 = {
  .r_prog = VAR_5,
  .r_vers = VAR_6,
  .r_netid = VAR_8,
  .r_owner = VAR_2,
 };
 struct rpc_message VAR_10 = {
  .rpc_argp = &VAR_9,
 };
 struct sunrpc_net *VAR_11 = FUNC_0(VAR_4, VAR_3);

 if (VAR_11->rpcb_local_clnt4 == ((void*)0))
  return -VAR_1;

 if (VAR_7 == ((void*)0))
  return FUNC_3(VAR_11, &VAR_10);

 switch (VAR_7->sa_family) {
 case 129:
  return FUNC_1(VAR_11, VAR_7, &VAR_10);
 case 128:
  return FUNC_2(VAR_11, VAR_7, &VAR_10);
 }

 return -VAR_0;
}
