
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* bc_destroy ) (struct rpc_xprt*,unsigned int) ;} ;


 int FUNC_0 (struct rpc_xprt*,unsigned int) ;

void FUNC_1(struct rpc_xprt *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->ops->bc_destroy)
  VAR_0->ops->bc_destroy(VAR_0, VAR_1);
}
