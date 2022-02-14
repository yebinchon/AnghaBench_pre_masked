
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {TYPE_1__* cr_ops; } ;
struct TYPE_2__ {char* (* crstringify_acceptor ) (struct rpc_cred*) ;} ;


 char* FUNC_0 (struct rpc_cred*) ;

char *
FUNC_1(struct rpc_cred *VAR_0)
{
 if (!VAR_0->cr_ops->crstringify_acceptor)
  return ((void*)0);
 return VAR_0->cr_ops->crstringify_acceptor(VAR_0);
}
