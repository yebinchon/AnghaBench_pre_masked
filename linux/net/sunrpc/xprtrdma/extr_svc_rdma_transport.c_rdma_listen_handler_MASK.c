
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_5__ {int src_addr; } ;
struct TYPE_6__ {TYPE_2__ addr; } ;
struct rdma_cm_id {int context; TYPE_3__ route; } ;
struct TYPE_4__ {int conn; } ;
struct rdma_cm_event {int event; TYPE_1__ param; } ;



 int FUNC_0 (char*,struct rdma_cm_id*,int ,int,...) ;
 int FUNC_1 (struct rdma_cm_id*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rdma_cm_event*,struct sockaddr*) ;

__attribute__((used)) static int FUNC_4(struct rdma_cm_id *VAR_0,
          struct rdma_cm_event *VAR_1)
{
 struct sockaddr *VAR_2 = (struct sockaddr *)&VAR_0->route.addr.src_addr;

 FUNC_3(VAR_1, VAR_2);

 switch (VAR_1->event) {
 case 128:
  FUNC_0("svcrdma: Connect request on cma_id=%p, xprt = %p, "
   "event = %s (%d)\n", VAR_0, VAR_0->context,
   FUNC_2(VAR_1->event), VAR_1->event);
  FUNC_1(VAR_0, &VAR_1->param.conn);
  break;
 default:

  FUNC_0("svcrdma: Unexpected event on listening endpoint %p, "
   "event = %s (%d)\n", VAR_0,
   FUNC_2(VAR_1->event), VAR_1->event);
  break;
 }

 return 0;
}
