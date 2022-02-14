
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int * proc_net_rpc; } ;
struct net {int proc_net; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct sunrpc_net* FUNC_1 (struct net*,int ) ;
 int * FUNC_2 (char*,int ) ;
 int VAR_1 ;

int FUNC_3(struct net *VAR_2)
{
 struct sunrpc_net *VAR_3;

 FUNC_0("RPC:       registering /proc/net/rpc\n");
 VAR_3 = FUNC_1(VAR_2, VAR_1);
 VAR_3->proc_net_rpc = FUNC_2("rpc", VAR_2->proc_net);
 if (VAR_3->proc_net_rpc == ((void*)0))
  return -VAR_0;

 return 0;
}
