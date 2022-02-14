
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xdr_buf {int dummy; } ;
struct rpcrdma_xprt {int dummy; } ;
struct rpcrdma_req {int rl_slot; int rl_kref; TYPE_2__* rl_sendctx; } ;
typedef enum rpcrdma_chunktype { ____Placeholder_rpcrdma_chunktype } rpcrdma_chunktype ;
struct TYPE_3__ {scalar_t__ num_sge; } ;
struct TYPE_4__ {struct rpcrdma_req* sc_req; scalar_t__ sc_unmap_count; TYPE_1__ sc_wr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct rpcrdma_xprt*,struct rpcrdma_req*,int ) ;
 int FUNC_2 (struct rpcrdma_xprt*,struct rpcrdma_req*,struct xdr_buf*,int) ;
 TYPE_2__* FUNC_3 (struct rpcrdma_xprt*) ;
 int FUNC_4 (int *,int) ;

int
FUNC_5(struct rpcrdma_xprt *VAR_3,
     struct rpcrdma_req *VAR_4, u32 VAR_5,
     struct xdr_buf *VAR_6, enum rpcrdma_chunktype VAR_7)
{
 int VAR_8;

 VAR_8 = -VAR_0;
 VAR_4->rl_sendctx = FUNC_3(VAR_3);
 if (!VAR_4->rl_sendctx)
  goto err;
 VAR_4->rl_sendctx->sc_wr.num_sge = 0;
 VAR_4->rl_sendctx->sc_unmap_count = 0;
 VAR_4->rl_sendctx->sc_req = VAR_4;
 FUNC_0(&VAR_4->rl_kref);

 VAR_8 = -VAR_1;
 if (!FUNC_1(VAR_3, VAR_4, VAR_5))
  goto err;
 if (VAR_7 != VAR_2)
  if (!FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7))
   goto err;
 return 0;

err:
 FUNC_4(&VAR_4->rl_slot, VAR_8);
 return VAR_8;
}
