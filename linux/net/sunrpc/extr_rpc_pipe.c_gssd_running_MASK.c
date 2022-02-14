
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {struct rpc_pipe* gssd_dummy; } ;
struct rpc_pipe {scalar_t__ nwriters; scalar_t__ nreaders; } ;
struct net {int dummy; } ;


 struct sunrpc_net* FUNC_0 (struct net*,int ) ;
 int VAR_0 ;

bool
FUNC_1(struct net *VAR_1)
{
 struct sunrpc_net *VAR_2 = FUNC_0(VAR_1, VAR_0);
 struct rpc_pipe *VAR_3 = VAR_2->gssd_dummy;

 return VAR_3->nreaders || VAR_3->nwriters;
}
