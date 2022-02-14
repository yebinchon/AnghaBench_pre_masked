
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xpt_flags; } ;
struct svcxprt_rdma {int sc_send_wait; TYPE_1__ sc_xprt; int sc_qp; int sc_sq_avail; } ;
struct ib_send_wr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct ib_send_wr*,int *) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct ib_send_wr*,int) ;
 int FUNC_10 (struct svcxprt_rdma*) ;
 int FUNC_11 (struct svcxprt_rdma*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct svcxprt_rdma *VAR_3, struct ib_send_wr *VAR_4)
{
 int VAR_5;

 FUNC_4();


 while (1) {
  if ((FUNC_0(&VAR_3->sc_sq_avail) < 0)) {
   FUNC_1(&VAR_2);
   FUNC_10(VAR_3);
   FUNC_1(&VAR_3->sc_sq_avail);
   FUNC_12(VAR_3->sc_send_wait,
       FUNC_2(&VAR_3->sc_sq_avail) > 1);
   if (FUNC_8(VAR_1, &VAR_3->sc_xprt.xpt_flags))
    return -VAR_0;
   FUNC_11(VAR_3);
   continue;
  }

  FUNC_6(&VAR_3->sc_xprt);
  VAR_5 = FUNC_3(VAR_3->sc_qp, VAR_4, ((void*)0));
  FUNC_9(VAR_4, VAR_5);
  if (VAR_5) {
   FUNC_5(VAR_1, &VAR_3->sc_xprt.xpt_flags);
   FUNC_7(&VAR_3->sc_xprt);
   FUNC_13(&VAR_3->sc_send_wait);
  }
  break;
 }
 return VAR_5;
}
