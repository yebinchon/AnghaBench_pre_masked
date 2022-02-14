
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpcrdma_ia {TYPE_2__* ri_id; } ;
struct TYPE_3__ {scalar_t__ send_cq; scalar_t__ recv_cq; } ;
struct rpcrdma_ep {TYPE_1__ rep_attr; } ;
struct rpcrdma_xprt {struct rpcrdma_ia rx_ia; struct rpcrdma_ep rx_ep; } ;
struct TYPE_4__ {int * qp; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct rpcrdma_ep*,struct rpcrdma_ia*) ;

void FUNC_3(struct rpcrdma_xprt *VAR_0)
{
 struct rpcrdma_ep *VAR_1 = &VAR_0->rx_ep;
 struct rpcrdma_ia *VAR_2 = &VAR_0->rx_ia;

 if (VAR_2->ri_id && VAR_2->ri_id->qp) {
  FUNC_2(VAR_1, VAR_2);
  FUNC_1(VAR_2->ri_id);
  VAR_2->ri_id->qp = ((void*)0);
 }

 if (VAR_1->rep_attr.recv_cq)
  FUNC_0(VAR_1->rep_attr.recv_cq);
 if (VAR_1->rep_attr.send_cq)
  FUNC_0(VAR_1->rep_attr.send_cq);
}
