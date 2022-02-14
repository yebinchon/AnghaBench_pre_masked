
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrmk_sadinfo {int sadhmcnt; scalar_t__ sadhcnt; int sadcnt; } ;
struct TYPE_2__ {int xfrm_state_lock; scalar_t__ state_hmask; int state_num; } ;
struct net {TYPE_1__ xfrm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

void FUNC_2(struct net *VAR_1, struct xfrmk_sadinfo *VAR_2)
{
 FUNC_0(&VAR_1->xfrm.xfrm_state_lock);
 VAR_2->sadcnt = VAR_1->xfrm.state_num;
 VAR_2->sadhcnt = VAR_1->xfrm.state_hmask + 1;
 VAR_2->sadhmcnt = VAR_0;
 FUNC_1(&VAR_1->xfrm.xfrm_state_lock);
}
