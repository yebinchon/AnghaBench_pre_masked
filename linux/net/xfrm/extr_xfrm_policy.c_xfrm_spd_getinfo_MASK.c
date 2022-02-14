
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrmk_spdinfo {int spdhmcnt; int spdhcnt; int fwdscnt; int outscnt; int inscnt; int fwdcnt; int outcnt; int incnt; } ;
struct TYPE_2__ {int policy_idx_hmask; int * policy_count; } ;
struct net {TYPE_1__ xfrm; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

void FUNC_0(struct net *VAR_5, struct xfrmk_spdinfo *VAR_6)
{
 VAR_6->incnt = VAR_5->xfrm.policy_count[VAR_1];
 VAR_6->outcnt = VAR_5->xfrm.policy_count[VAR_3];
 VAR_6->fwdcnt = VAR_5->xfrm.policy_count[VAR_0];
 VAR_6->inscnt = VAR_5->xfrm.policy_count[VAR_1+VAR_2];
 VAR_6->outscnt = VAR_5->xfrm.policy_count[VAR_3+VAR_2];
 VAR_6->fwdscnt = VAR_5->xfrm.policy_count[VAR_0+VAR_2];
 VAR_6->spdhcnt = VAR_5->xfrm.policy_idx_hmask;
 VAR_6->spdhmcnt = VAR_4;
}
