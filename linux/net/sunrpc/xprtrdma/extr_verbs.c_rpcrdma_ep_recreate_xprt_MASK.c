
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_ia {int ri_pd; int ri_id; } ;
struct rpcrdma_xprt {struct rpcrdma_ia rx_ia; } ;
struct ib_qp_init_attr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,struct ib_qp_init_attr*) ;
 int FUNC_2 (struct rpcrdma_xprt*) ;
 int FUNC_3 (struct rpcrdma_xprt*) ;
 int FUNC_4 (struct rpcrdma_ia*) ;
 scalar_t__ FUNC_5 (struct rpcrdma_xprt*) ;
 int FUNC_6 (struct rpcrdma_xprt*) ;
 int FUNC_7 (struct rpcrdma_xprt*) ;

__attribute__((used)) static int FUNC_8(struct rpcrdma_xprt *VAR_3,
        struct ib_qp_init_attr *VAR_4)
{
 struct rpcrdma_ia *VAR_5 = &VAR_3->rx_ia;
 int VAR_6, VAR_7;

 FUNC_7(VAR_3);

 VAR_6 = -VAR_0;
 if (FUNC_5(VAR_3))
  goto out1;

 VAR_6 = -VAR_2;
 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7) {
  FUNC_0("rpcrdma: rpcrdma_ep_create returned %d\n", VAR_7);
  goto out2;
 }

 VAR_6 = -VAR_1;
 VAR_7 = FUNC_1(VAR_5->ri_id, VAR_5->ri_pd, VAR_4);
 if (VAR_7) {
  FUNC_0("rpcrdma: rdma_create_qp returned %d\n", VAR_7);
  goto out3;
 }

 FUNC_6(VAR_3);
 return 0;

out3:
 FUNC_3(VAR_3);
out2:
 FUNC_4(VAR_5);
out1:
 return VAR_6;
}
