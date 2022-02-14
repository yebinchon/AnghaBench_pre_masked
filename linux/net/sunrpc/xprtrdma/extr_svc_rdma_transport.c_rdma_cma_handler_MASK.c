
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_xprt {int xpt_flags; } ;
struct svcxprt_rdma {int sc_flags; struct svc_xprt sc_xprt; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {int dst_addr; } ;
struct TYPE_4__ {TYPE_1__ addr; } ;
struct rdma_cm_id {struct svcxprt_rdma* context; TYPE_2__ route; } ;
struct rdma_cm_event {int event; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct svc_xprt*) ;
 int FUNC_5 (struct svc_xprt*) ;
 int FUNC_6 (struct svc_xprt*) ;
 int FUNC_7 (struct rdma_cm_event*,struct sockaddr*) ;

__attribute__((used)) static int FUNC_8(struct rdma_cm_id *VAR_2,
       struct rdma_cm_event *VAR_3)
{
 struct sockaddr *VAR_4 = (struct sockaddr *)&VAR_2->route.addr.dst_addr;
 struct svcxprt_rdma *VAR_5 = VAR_2->context;
 struct svc_xprt *VAR_6 = &VAR_5->sc_xprt;

 FUNC_7(VAR_3, VAR_4);

 switch (VAR_3->event) {
 case 128:

  FUNC_5(VAR_6);
  FUNC_1("svcrdma: Connection completed on DTO xprt=%p, "
   "cm_id=%p\n", VAR_6, VAR_2);
  FUNC_0(VAR_0, &VAR_5->sc_flags);
  FUNC_4(VAR_6);
  break;
 case 129:
  FUNC_1("svcrdma: Disconnect on DTO xprt=%p, cm_id=%p\n",
   VAR_6, VAR_2);
  FUNC_3(VAR_1, &VAR_6->xpt_flags);
  FUNC_4(VAR_6);
  FUNC_6(VAR_6);
  break;
 case 130:
  FUNC_1("svcrdma: Device removal cma_id=%p, xprt = %p, "
   "event = %s (%d)\n", VAR_2, VAR_6,
   FUNC_2(VAR_3->event), VAR_3->event);
  FUNC_3(VAR_1, &VAR_6->xpt_flags);
  FUNC_4(VAR_6);
  FUNC_6(VAR_6);
  break;
 default:
  FUNC_1("svcrdma: Unexpected event on DTO endpoint %p, "
   "event = %s (%d)\n", VAR_2,
   FUNC_2(VAR_3->event), VAR_3->event);
  break;
 }
 return 0;
}
