
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xpt_flags; } ;
struct svcxprt_rdma {TYPE_1__ sc_xprt; int sc_rw_ctxt_lock; int sc_send_lock; int sc_rq_dto_lock; int sc_lock; int sc_send_wait; int sc_rw_ctxts; int sc_recv_ctxts; int sc_send_ctxts; int sc_read_complete_q; int sc_rq_dto_q; int sc_accept_q; } ;
struct svc_serv {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct svcxprt_rdma* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (struct net*,int *,TYPE_1__*,struct svc_serv*) ;

__attribute__((used)) static struct svcxprt_rdma *FUNC_8(struct svc_serv *VAR_3,
       struct net *VAR_4)
{
 struct svcxprt_rdma *VAR_5 = FUNC_4(sizeof *VAR_5, VAR_0);

 if (!VAR_5) {
  FUNC_1("svcrdma: failed to create new transport\n");
  return ((void*)0);
 }
 FUNC_7(VAR_4, &VAR_2, &VAR_5->sc_xprt, VAR_3);
 FUNC_0(&VAR_5->sc_accept_q);
 FUNC_0(&VAR_5->sc_rq_dto_q);
 FUNC_0(&VAR_5->sc_read_complete_q);
 FUNC_0(&VAR_5->sc_send_ctxts);
 FUNC_2(&VAR_5->sc_recv_ctxts);
 FUNC_0(&VAR_5->sc_rw_ctxts);
 FUNC_3(&VAR_5->sc_send_wait);

 FUNC_6(&VAR_5->sc_lock);
 FUNC_6(&VAR_5->sc_rq_dto_lock);
 FUNC_6(&VAR_5->sc_send_lock);
 FUNC_6(&VAR_5->sc_rw_ctxt_lock);







 FUNC_5(VAR_1, &VAR_5->sc_xprt.xpt_flags);

 return VAR_5;
}
