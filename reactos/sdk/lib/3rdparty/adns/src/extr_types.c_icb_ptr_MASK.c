
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_5__* adns_state ;
struct TYPE_19__ {scalar_t__ len; int addr; } ;
typedef TYPE_6__ adns_rr_addr ;
typedef TYPE_7__* adns_query ;
struct TYPE_16__ {TYPE_6__* addr; } ;
struct TYPE_21__ {scalar_t__ status; int nrrs; TYPE_3__ rrs; } ;
typedef TYPE_8__ adns_answer ;
struct TYPE_17__ {int head; } ;
struct TYPE_14__ {TYPE_6__ ptr_parent_addr; } ;
struct TYPE_15__ {TYPE_1__ info; } ;
struct TYPE_20__ {TYPE_4__ children; TYPE_2__ ctx; TYPE_5__* ads; TYPE_8__* answer; } ;
struct TYPE_18__ {int childw; } ;


 int FUNC_0 (int ,TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int *,size_t) ;

__attribute__((used)) static void FUNC_4(adns_query VAR_3, adns_query VAR_4) {
  adns_answer *VAR_5= VAR_4->answer;
  const adns_rr_addr *VAR_6, *VAR_7;
  adns_state VAR_8= VAR_3->ads;
  int VAR_9;

  if (VAR_5->status == VAR_2 || VAR_5->status == VAR_1) {
    FUNC_2(VAR_3,VAR_0);
    return;
  } else if (VAR_5->status) {
    FUNC_2(VAR_3,VAR_5->status);
    return;
  }

  VAR_6= &VAR_3->ctx.info.ptr_parent_addr;
  for (VAR_9=0, VAR_7=VAR_5->rrs.addr; VAR_9<VAR_5->nrrs; VAR_9++, VAR_7++) {
    if (VAR_6->len == VAR_7->len &&
 !FUNC_3(&VAR_6->addr,&VAR_7->addr,(size_t) VAR_6->len)) {
      if (!VAR_3->children.head) {
 FUNC_1(VAR_3);
 return;
      } else {
 FUNC_0(VAR_8->childw,VAR_3);
 return;
      }
    }
  }

  FUNC_2(VAR_3,VAR_0);
}
