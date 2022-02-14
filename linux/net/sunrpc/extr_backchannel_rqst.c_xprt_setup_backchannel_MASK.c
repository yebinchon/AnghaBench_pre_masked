
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* bc_setup ) (struct rpc_xprt*,unsigned int) ;} ;


 int FUNC_0 (struct rpc_xprt*,unsigned int) ;

int FUNC_1(struct rpc_xprt *VAR_0, unsigned int VAR_1)
{
 if (!VAR_0->ops->bc_setup)
  return 0;
 return VAR_0->ops->bc_setup(VAR_0, VAR_1);
}
