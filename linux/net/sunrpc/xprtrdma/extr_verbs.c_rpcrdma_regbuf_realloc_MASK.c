
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t length; } ;
struct rpcrdma_regbuf {TYPE_1__ rg_iov; void* rg_data; } ;
typedef int gfp_t ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct rpcrdma_regbuf*) ;

bool FUNC_3(struct rpcrdma_regbuf *VAR_0, size_t VAR_1, gfp_t VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return 0;

 FUNC_2(VAR_0);
 FUNC_0(VAR_0->rg_data);

 VAR_0->rg_data = VAR_3;
 VAR_0->rg_iov.length = VAR_1;
 return 1;
}
