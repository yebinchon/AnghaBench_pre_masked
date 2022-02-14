
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int hw_param; } ;
struct xensnd_resp {scalar_t__ id; int operation; TYPE_2__ resp; int status; } ;
struct xen_snd_front_info {TYPE_3__* xb_dev; } ;
struct TYPE_15__ {scalar_t__ rsp_cons; scalar_t__ req_prod_pvt; TYPE_4__* sring; } ;
struct TYPE_9__ {int hw_param; } ;
struct TYPE_13__ {TYPE_7__ ring; int completion; TYPE_1__ resp; int resp_status; } ;
struct TYPE_14__ {TYPE_5__ req; } ;
struct xen_snd_front_evtchnl {scalar_t__ state; scalar_t__ evt_id; int ring_io_lock; TYPE_6__ u; struct xen_snd_front_info* front_info; } ;
typedef int irqreturn_t ;
struct TYPE_12__ {scalar_t__ rsp_prod; scalar_t__ rsp_event; } ;
struct TYPE_11__ {int dev; } ;
typedef scalar_t__ RING_IDX ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,int) ;
 struct xensnd_resp* FUNC_1 (TYPE_7__*,scalar_t__) ;






 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_2, void *VAR_3)
{
 struct xen_snd_front_evtchnl *VAR_4 = VAR_3;
 struct xen_snd_front_info *VAR_5 = VAR_4->front_info;
 struct xensnd_resp *VAR_6;
 RING_IDX VAR_7, VAR_8;

 if (FUNC_7(VAR_4->state != VAR_0))
  return VAR_1;

 FUNC_4(&VAR_4->ring_io_lock);

again:
 VAR_8 = VAR_4->u.req.ring.sring->rsp_prod;

 FUNC_6();






 for (VAR_7 = VAR_4->u.req.ring.rsp_cons; VAR_7 != VAR_8; VAR_7++) {
  VAR_6 = FUNC_1(&VAR_4->u.req.ring, VAR_7);
  if (VAR_6->id != VAR_4->evt_id)
   continue;
  switch (VAR_6->operation) {
  case 131:

  case 133:

  case 130:

  case 128:

  case 129:
   VAR_4->u.req.resp_status = VAR_6->status;
   FUNC_2(&VAR_4->u.req.completion);
   break;
  case 132:
   VAR_4->u.req.resp_status = VAR_6->status;
   VAR_4->u.req.resp.hw_param =
     VAR_6->resp.hw_param;
   FUNC_2(&VAR_4->u.req.completion);
   break;

  default:
   FUNC_3(&VAR_5->xb_dev->dev,
    "Operation %d is not supported\n",
    VAR_6->operation);
   break;
  }
 }

 VAR_4->u.req.ring.rsp_cons = VAR_7;
 if (VAR_7 != VAR_4->u.req.ring.req_prod_pvt) {
  int VAR_9;

  FUNC_0(&VAR_4->u.req.ring,
            VAR_9);
  if (VAR_9)
   goto again;
 } else {
  VAR_4->u.req.ring.sring->rsp_event = VAR_7 + 1;
 }

 FUNC_5(&VAR_4->ring_io_lock);
 return VAR_1;
}
