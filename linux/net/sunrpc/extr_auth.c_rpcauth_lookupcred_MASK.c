
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct rpc_auth {TYPE_1__* au_ops; } ;
struct cred {int dummy; } ;
struct auth_cred {struct cred const* cred; } ;
typedef int acred ;
struct TYPE_2__ {struct rpc_cred* (* lookup_cred ) (struct rpc_auth*,struct auth_cred*,int) ;} ;


 struct cred* FUNC_0 () ;
 int FUNC_1 (struct auth_cred*,int ,int) ;
 struct rpc_cred* FUNC_2 (struct rpc_auth*,struct auth_cred*,int) ;

struct rpc_cred *
FUNC_3(struct rpc_auth *VAR_0, int VAR_1)
{
 struct auth_cred VAR_2;
 struct rpc_cred *VAR_3;
 const struct cred *VAR_4 = FUNC_0();

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.cred = VAR_4;
 VAR_3 = VAR_0->au_ops->lookup_cred(VAR_0, &VAR_2, VAR_1);
 return VAR_3;
}
