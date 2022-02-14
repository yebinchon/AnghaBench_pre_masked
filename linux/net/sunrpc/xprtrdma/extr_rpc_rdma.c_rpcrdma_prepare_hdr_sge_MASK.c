
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rpcrdma_xprt {int dummy; } ;
struct TYPE_2__ {int num_sge; } ;
struct rpcrdma_sendctx {TYPE_1__ sc_wr; struct ib_sge* sc_sges; } ;
struct rpcrdma_req {struct rpcrdma_regbuf* rl_rdmabuf; struct rpcrdma_sendctx* rl_sendctx; } ;
struct rpcrdma_regbuf {int dummy; } ;
struct ib_sge {int length; int addr; int lkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct rpcrdma_regbuf*) ;
 int FUNC_3 (struct rpcrdma_regbuf*) ;
 int FUNC_4 (struct rpcrdma_regbuf*) ;
 int FUNC_5 (struct rpcrdma_xprt*,struct rpcrdma_regbuf*) ;

__attribute__((used)) static bool FUNC_6(struct rpcrdma_xprt *VAR_1,
        struct rpcrdma_req *VAR_2, u32 VAR_3)
{
 struct rpcrdma_sendctx *VAR_4 = VAR_2->rl_sendctx;
 struct rpcrdma_regbuf *VAR_5 = VAR_2->rl_rdmabuf;
 struct ib_sge *VAR_6 = VAR_4->sc_sges;

 if (!FUNC_5(VAR_1, VAR_5))
  goto out_regbuf;
 VAR_6->addr = FUNC_2(VAR_5);
 VAR_6->length = VAR_3;
 VAR_6->lkey = FUNC_4(VAR_5);

 FUNC_0(FUNC_3(VAR_5), VAR_6->addr, VAR_6->length,
          VAR_0);
 VAR_4->sc_wr.num_sge++;
 return 1;

out_regbuf:
 FUNC_1("rpcrdma: failed to DMA map a Send buffer\n");
 return 0;
}
