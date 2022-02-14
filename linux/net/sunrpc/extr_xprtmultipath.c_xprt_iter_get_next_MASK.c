
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt_iter {int dummy; } ;
struct rpc_xprt {int dummy; } ;
struct TYPE_2__ {int xpi_next; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct rpc_xprt* FUNC_2 (struct rpc_xprt_iter*,int ) ;
 TYPE_1__* FUNC_3 (struct rpc_xprt_iter*) ;

struct rpc_xprt *FUNC_4(struct rpc_xprt_iter *VAR_0)
{
 struct rpc_xprt *VAR_1;

 FUNC_0();
 VAR_1 = FUNC_2(VAR_0, FUNC_3(VAR_0)->xpi_next);
 FUNC_1();
 return VAR_1;
}
