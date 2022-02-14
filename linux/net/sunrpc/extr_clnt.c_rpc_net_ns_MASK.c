
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_clnt {int cl_xprt; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct net* xprt_net; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

struct net *FUNC_3(struct rpc_clnt *VAR_0)
{
 struct net *VAR_1;

 FUNC_1();
 VAR_1 = FUNC_0(VAR_0->cl_xprt)->xprt_net;
 FUNC_2();
 return VAR_1;
}
