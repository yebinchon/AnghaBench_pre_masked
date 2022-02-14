
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_regbuf {int * rg_device; } ;



__attribute__((used)) static inline bool FUNC_0(struct rpcrdma_regbuf *VAR_0)
{
 return VAR_0->rg_device != ((void*)0);
}
