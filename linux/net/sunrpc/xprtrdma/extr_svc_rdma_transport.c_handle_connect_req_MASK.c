
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int xpt_flags; int xpt_remote; int xpt_net; int xpt_server; } ;
struct svcxprt_rdma {TYPE_3__ sc_xprt; int sc_lock; int sc_accept_q; struct rdma_cm_id* sc_cm_id; int sc_ord; } ;
struct sockaddr {int dummy; } ;
struct rdma_conn_param {int initiator_depth; } ;
struct TYPE_6__ {int src_addr; int dst_addr; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;
struct rdma_cm_id {TYPE_2__ route; struct svcxprt_rdma* context; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct sockaddr*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sockaddr*) ;
 struct svcxprt_rdma* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct svcxprt_rdma*,struct rdma_conn_param*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,struct sockaddr*,int ) ;
 int FUNC_10 (TYPE_3__*,struct sockaddr*,int ) ;

__attribute__((used)) static void FUNC_11(struct rdma_cm_id *VAR_1,
          struct rdma_conn_param *VAR_2)
{
 struct svcxprt_rdma *VAR_3 = VAR_1->context;
 struct svcxprt_rdma *VAR_4;
 struct sockaddr *VAR_5;


 VAR_4 = FUNC_6(VAR_3->sc_xprt.xpt_server,
           VAR_3->sc_xprt.xpt_net);
 if (!VAR_4)
  return;
 VAR_4->sc_cm_id = VAR_1;
 VAR_1->context = VAR_4;
 FUNC_7(VAR_4, VAR_2);


 VAR_4->sc_ord = VAR_2->initiator_depth;

 VAR_5 = (struct sockaddr *)&VAR_4->sc_cm_id->route.addr.dst_addr;
 FUNC_10(&VAR_4->sc_xprt, VAR_5, FUNC_5(VAR_5));




 FUNC_1((struct sockaddr *)&VAR_4->sc_xprt.xpt_remote, 0);

 VAR_5 = (struct sockaddr *)&VAR_4->sc_cm_id->route.addr.src_addr;
 FUNC_9(&VAR_4->sc_xprt, VAR_5, FUNC_5(VAR_5));





 FUNC_3(&VAR_3->sc_lock);
 FUNC_0(&VAR_4->sc_accept_q, &VAR_3->sc_accept_q);
 FUNC_4(&VAR_3->sc_lock);

 FUNC_2(VAR_0, &VAR_3->sc_xprt.xpt_flags);
 FUNC_8(&VAR_3->sc_xprt);
}
