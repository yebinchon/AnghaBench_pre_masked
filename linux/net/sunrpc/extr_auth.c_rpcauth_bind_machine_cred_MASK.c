
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {TYPE_1__* tk_client; } ;
struct rpc_cred {int dummy; } ;
struct rpc_auth {TYPE_2__* au_ops; } ;
struct auth_cred {int principal; int cred; } ;
struct TYPE_6__ {int cred; } ;
struct TYPE_5__ {struct rpc_cred* (* lookup_cred ) (struct rpc_auth*,struct auth_cred*,int) ;} ;
struct TYPE_4__ {int cl_principal; struct rpc_auth* cl_auth; } ;


 TYPE_3__ VAR_0 ;
 struct rpc_cred* FUNC_0 (struct rpc_auth*,struct auth_cred*,int) ;

__attribute__((used)) static struct rpc_cred *
FUNC_1(struct rpc_task *VAR_1, int VAR_2)
{
 struct rpc_auth *VAR_3 = VAR_1->tk_client->cl_auth;
 struct auth_cred VAR_4 = {
  .principal = VAR_1->tk_client->cl_principal,
  .cred = VAR_0.cred,
 };

 if (!VAR_4.principal)
  return ((void*)0);
 return VAR_3->au_ops->lookup_cred(VAR_3, &VAR_4, VAR_2);
}
