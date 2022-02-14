
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {TYPE_1__* tk_client; } ;
struct rpc_cred {int dummy; } ;
struct rpc_auth {TYPE_2__* au_ops; } ;
struct auth_cred {int cred; } ;
struct TYPE_4__ {struct rpc_cred* (* lookup_cred ) (struct rpc_auth*,struct auth_cred*,int) ;} ;
struct TYPE_3__ {struct rpc_auth* cl_auth; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct rpc_cred* FUNC_2 (struct rpc_auth*,struct auth_cred*,int) ;

__attribute__((used)) static struct rpc_cred *
FUNC_3(struct rpc_task *VAR_1, int VAR_2)
{
 struct rpc_auth *VAR_3 = VAR_1->tk_client->cl_auth;
 struct auth_cred VAR_4 = {
  .cred = FUNC_0(&VAR_0),
 };
 struct rpc_cred *VAR_5;

 VAR_5 = VAR_3->au_ops->lookup_cred(VAR_3, &VAR_4, VAR_2);
 FUNC_1(VAR_4.cred);
 return VAR_5;
}
