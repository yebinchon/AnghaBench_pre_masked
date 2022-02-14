
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t hardway_register_count; } ;
struct rpcrdma_xprt {TYPE_1__ rx_stats; } ;
struct rpcrdma_regbuf {int dummy; } ;
typedef int gfp_t ;


 size_t FUNC_0 (struct rpcrdma_regbuf*) ;
 int FUNC_1 (struct rpcrdma_regbuf*,size_t,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct rpcrdma_xprt *VAR_0,
     struct rpcrdma_regbuf *VAR_1, size_t VAR_2,
     gfp_t VAR_3)
{
 if (FUNC_2(FUNC_0(VAR_1) < VAR_2)) {
  if (!FUNC_1(VAR_1, VAR_2, VAR_3))
   return 0;
  VAR_0->rx_stats.hardway_register_count += VAR_2;
 }
 return 1;
}
