
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int kref; } ;


 scalar_t__ FUNC_0 (int *) ;

struct rpc_xprt *FUNC_1(struct rpc_xprt *VAR_0)
{
 if (VAR_0 != ((void*)0) && FUNC_0(&VAR_0->kref))
  return VAR_0;
 return ((void*)0);
}
