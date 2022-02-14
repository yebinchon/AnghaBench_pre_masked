
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int done; } ;
struct TYPE_4__ {int opcode; int sg_list; TYPE_1__* wr_cqe; } ;
struct rpcrdma_sendctx {TYPE_1__ sc_cqe; TYPE_2__ sc_wr; int sc_sges; } ;
struct rpcrdma_ia {int ri_max_send_sges; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rpcrdma_sendctx* FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rpcrdma_sendctx*,int ,int ) ;

__attribute__((used)) static struct rpcrdma_sendctx *FUNC_2(struct rpcrdma_ia *VAR_4)
{
 struct rpcrdma_sendctx *VAR_5;

 VAR_5 = FUNC_0(FUNC_1(VAR_5, VAR_3, VAR_4->ri_max_send_sges),
       VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->sc_wr.wr_cqe = &VAR_5->sc_cqe;
 VAR_5->sc_wr.sg_list = VAR_5->sc_sges;
 VAR_5->sc_wr.opcode = VAR_1;
 VAR_5->sc_cqe.done = VAR_2;
 return VAR_5;
}
