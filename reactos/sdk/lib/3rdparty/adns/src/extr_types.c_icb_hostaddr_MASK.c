
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ adns_status ;
typedef TYPE_5__* adns_state ;
struct TYPE_20__ {int naddrs; int addrs; scalar_t__ astatus; } ;
typedef TYPE_6__ adns_rr_hostaddr ;
typedef int adns_rr_addr ;
typedef TYPE_7__* adns_query ;
struct TYPE_17__ {int addr; } ;
struct TYPE_22__ {scalar_t__ status; int nrrs; TYPE_3__ rrs; } ;
typedef TYPE_8__ adns_answer ;
struct TYPE_18__ {scalar_t__ head; } ;
struct TYPE_15__ {TYPE_6__* hostaddr; } ;
struct TYPE_16__ {TYPE_1__ info; } ;
struct TYPE_21__ {TYPE_4__ children; TYPE_5__* ads; TYPE_2__ ctx; TYPE_8__* answer; } ;
struct TYPE_19__ {int childw; } ;


 int FUNC_0 (int ,TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,TYPE_7__*,int ,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(adns_query VAR_1, adns_query VAR_2) {
  adns_answer *VAR_3= VAR_2->answer;
  adns_rr_hostaddr *VAR_4= VAR_2->ctx.info.hostaddr;
  adns_state VAR_5= VAR_1->ads;
  adns_status VAR_6;

  VAR_6= VAR_3->status;
  VAR_4->astatus= VAR_6;
  VAR_4->naddrs= (VAR_6>0 && VAR_6<=VAR_0) ? -1 : VAR_3->nrrs;
  VAR_4->addrs= VAR_3->rrs.addr;
  FUNC_2(VAR_2, VAR_1, VAR_4->addrs, VAR_4->naddrs*sizeof(adns_rr_addr));

  if (VAR_1->children.head) {
    FUNC_0(VAR_5->childw,VAR_1);
  } else {
    FUNC_1(VAR_1);
  }
}
