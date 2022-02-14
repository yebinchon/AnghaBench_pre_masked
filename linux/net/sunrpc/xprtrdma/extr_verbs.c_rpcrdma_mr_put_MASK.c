
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ri_id; } ;
struct rpcrdma_xprt {TYPE_3__ rx_ia; } ;
struct rpcrdma_mr {scalar_t__ mr_dir; TYPE_1__* mr_req; int mr_nents; int mr_sg; struct rpcrdma_xprt* mr_xprt; } ;
struct TYPE_5__ {int device; } ;
struct TYPE_4__ {int rl_free_mrs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (struct rpcrdma_mr*,int *) ;
 int FUNC_2 (struct rpcrdma_mr*) ;

void FUNC_3(struct rpcrdma_mr *VAR_1)
{
 struct rpcrdma_xprt *VAR_2 = VAR_1->mr_xprt;

 if (VAR_1->mr_dir != VAR_0) {
  FUNC_2(VAR_1);
  FUNC_0(VAR_2->rx_ia.ri_id->device,
    VAR_1->mr_sg, VAR_1->mr_nents, VAR_1->mr_dir);
  VAR_1->mr_dir = VAR_0;
 }

 FUNC_1(VAR_1, &VAR_1->mr_req->rl_free_mrs);
}
