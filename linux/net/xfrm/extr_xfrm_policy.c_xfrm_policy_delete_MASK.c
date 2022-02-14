
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_policy {int dummy; } ;
struct TYPE_2__ {int xfrm_policy_lock; } ;
struct net {TYPE_1__ xfrm; } ;


 int VAR_0 ;
 struct xfrm_policy* FUNC_0 (struct xfrm_policy*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xfrm_policy*) ;
 struct net* FUNC_4 (struct xfrm_policy*) ;

int FUNC_5(struct xfrm_policy *VAR_1, int VAR_2)
{
 struct net *VAR_3 = FUNC_4(VAR_1);

 FUNC_1(&VAR_3->xfrm.xfrm_policy_lock);
 VAR_1 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_3->xfrm.xfrm_policy_lock);
 if (VAR_1) {
  FUNC_3(VAR_1);
  return 0;
 }
 return -VAR_0;
}
