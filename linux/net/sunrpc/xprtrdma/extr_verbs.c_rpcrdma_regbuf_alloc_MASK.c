
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t length; } ;
struct rpcrdma_regbuf {int rg_direction; TYPE_1__ rg_iov; int * rg_device; void* rg_data; } ;
typedef int gfp_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct rpcrdma_regbuf*) ;
 void* FUNC_1 (size_t,int ) ;

__attribute__((used)) static struct rpcrdma_regbuf *
FUNC_2(size_t VAR_0, enum dma_data_direction VAR_1,
       gfp_t VAR_2)
{
 struct rpcrdma_regbuf *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->rg_data = FUNC_1(VAR_0, VAR_2);
 if (!VAR_3->rg_data) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 VAR_3->rg_device = ((void*)0);
 VAR_3->rg_direction = VAR_1;
 VAR_3->rg_iov.length = VAR_0;
 return VAR_3;
}
