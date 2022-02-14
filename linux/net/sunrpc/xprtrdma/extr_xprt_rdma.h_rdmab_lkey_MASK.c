
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int lkey; } ;
struct rpcrdma_regbuf {TYPE_1__ rg_iov; } ;



__attribute__((used)) static inline u32 FUNC_0(struct rpcrdma_regbuf *VAR_0)
{
 return VAR_0->rg_iov.lkey;
}
