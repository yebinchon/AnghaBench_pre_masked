
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {TYPE_1__* tk_client; } ;
struct rpc_cred {int dummy; } ;
struct rpc_auth {int dummy; } ;
struct TYPE_2__ {struct rpc_auth* cl_auth; } ;


 struct rpc_cred* FUNC_0 (struct rpc_auth*,int) ;

__attribute__((used)) static struct rpc_cred *
FUNC_1(struct rpc_task *VAR_0, int VAR_1)
{
 struct rpc_auth *VAR_2 = VAR_0->tk_client->cl_auth;

 return FUNC_0(VAR_2, VAR_1);
}
