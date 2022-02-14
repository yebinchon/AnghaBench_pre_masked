
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {TYPE_1__* ops; } ;
struct rpc_clnt {int cl_xprt; } ;
struct TYPE_2__ {int (* set_buffer_size ) (struct rpc_xprt*,unsigned int,unsigned int) ;} ;


 struct rpc_xprt* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct rpc_xprt*,unsigned int,unsigned int) ;

void
FUNC_4(struct rpc_clnt *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 struct rpc_xprt *VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_0->cl_xprt);
 if (VAR_3->ops->set_buffer_size)
  VAR_3->ops->set_buffer_size(VAR_3, VAR_1, VAR_2);
 FUNC_2();
}
