
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int proc_net; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(struct net *VAR_0)
{
 FUNC_0("RPC:       unregistering /proc/net/rpc\n");
 FUNC_1("rpc", VAR_0->proc_net);
}
