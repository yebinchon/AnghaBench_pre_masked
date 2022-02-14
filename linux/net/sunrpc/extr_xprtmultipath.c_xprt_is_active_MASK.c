
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int kref; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static
bool FUNC_1(const struct rpc_xprt *VAR_0)
{
 return FUNC_0(&VAR_0->kref) != 0;
}
