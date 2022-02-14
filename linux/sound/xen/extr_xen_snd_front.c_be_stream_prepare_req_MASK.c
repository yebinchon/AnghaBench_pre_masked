
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct xensnd_req {scalar_t__ id; int operation; } ;
struct TYPE_6__ {int req_prod_pvt; } ;
struct TYPE_4__ {TYPE_3__ ring; } ;
struct TYPE_5__ {TYPE_1__ req; } ;
struct xen_snd_front_evtchnl {scalar_t__ evt_id; int evt_next_id; TYPE_2__ u; } ;


 struct xensnd_req* FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static struct xensnd_req *
FUNC_1(struct xen_snd_front_evtchnl *VAR_0, u8 VAR_1)
{
 struct xensnd_req *VAR_2;

 VAR_2 = FUNC_0(&VAR_0->u.req.ring,
          VAR_0->u.req.ring.req_prod_pvt);
 VAR_2->operation = VAR_1;
 VAR_2->id = VAR_0->evt_next_id++;
 VAR_0->evt_id = VAR_2->id;
 return VAR_2;
}
