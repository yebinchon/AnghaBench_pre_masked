
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_ia {struct rdma_cm_id* ri_id; int ri_pd; } ;
struct rpcrdma_xprt {int rx_ep; struct rpcrdma_ia rx_ia; } ;
struct rdma_cm_id {scalar_t__ device; } ;
struct ib_qp_init_attr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rdma_cm_id*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct rdma_cm_id*,int ,struct ib_qp_init_attr*) ;
 int FUNC_3 (struct rdma_cm_id*) ;
 int FUNC_4 (struct rdma_cm_id*) ;
 struct rdma_cm_id* FUNC_5 (struct rpcrdma_xprt*,struct rpcrdma_ia*) ;
 int FUNC_6 (int *,struct rpcrdma_ia*) ;
 int FUNC_7 (struct rpcrdma_xprt*) ;

__attribute__((used)) static int FUNC_8(struct rpcrdma_xprt *VAR_2,
    struct ib_qp_init_attr *VAR_3)
{
 struct rpcrdma_ia *VAR_4 = &VAR_2->rx_ia;
 struct rdma_cm_id *VAR_5, *VAR_6;
 int VAR_7, VAR_8;

 FUNC_7(VAR_2);

 FUNC_6(&VAR_2->rx_ep, VAR_4);

 VAR_8 = -VAR_0;
 VAR_5 = FUNC_5(VAR_2, VAR_4);
 if (FUNC_0(VAR_5))
  goto out;
 VAR_6 = VAR_5;
 VAR_8 = -VAR_1;
 if (VAR_4->ri_id->device != VAR_5->device) {
  FUNC_1("rpcrdma: can't reconnect on different device!\n");
  goto out_destroy;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_4->ri_pd, VAR_3);
 if (VAR_7)
  goto out_destroy;


 VAR_8 = 0;
 VAR_6 = VAR_4->ri_id;
 VAR_4->ri_id = VAR_5;
 FUNC_4(VAR_6);

out_destroy:
 FUNC_3(VAR_6);
out:
 return VAR_8;
}
