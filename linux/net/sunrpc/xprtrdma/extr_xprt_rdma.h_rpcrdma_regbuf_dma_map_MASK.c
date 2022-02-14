
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_xprt {int dummy; } ;
struct rpcrdma_regbuf {int dummy; } ;


 int FUNC_0 (struct rpcrdma_xprt*,struct rpcrdma_regbuf*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct rpcrdma_regbuf*) ;

__attribute__((used)) static inline bool FUNC_3(struct rpcrdma_xprt *VAR_0,
       struct rpcrdma_regbuf *VAR_1)
{
 if (FUNC_1(FUNC_2(VAR_1)))
  return 1;
 return FUNC_0(VAR_0, VAR_1);
}
