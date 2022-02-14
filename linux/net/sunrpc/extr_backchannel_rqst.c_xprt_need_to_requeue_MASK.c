
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {scalar_t__ bc_alloc_count; scalar_t__ bc_alloc_max; } ;



__attribute__((used)) static inline int FUNC_0(struct rpc_xprt *VAR_0)
{
 return VAR_0->bc_alloc_count < VAR_0->bc_alloc_max;
}
