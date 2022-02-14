
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt_iter {int dummy; } ;
struct rpc_xprt {int dummy; } ;
struct TYPE_2__ {struct rpc_xprt* (* xpi_xprt ) (struct rpc_xprt_iter*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 struct rpc_xprt* FUNC_2 (struct rpc_xprt_iter*) ;
 TYPE_1__* FUNC_3 (struct rpc_xprt_iter*) ;

struct rpc_xprt *FUNC_4(struct rpc_xprt_iter *VAR_0)
{
 FUNC_0(!FUNC_1());
 return FUNC_3(VAR_0)->xpi_xprt(VAR_0);
}
