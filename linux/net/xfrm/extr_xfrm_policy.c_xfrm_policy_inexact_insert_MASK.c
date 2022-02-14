
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct xfrm_policy {int dummy; } ;
struct xfrm_pol_inexact_bin {int dummy; } ;
struct TYPE_2__ {struct hlist_head* policy_inexact; int xfrm_policy_lock; } ;
struct net {TYPE_1__ xfrm; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfrm_policy* FUNC_0 (int ) ;
 int FUNC_1 (struct xfrm_pol_inexact_bin*,int) ;
 int FUNC_2 (int *) ;
 struct xfrm_pol_inexact_bin* FUNC_3 (struct xfrm_policy*,size_t) ;
 struct hlist_head* FUNC_4 (struct xfrm_pol_inexact_bin*,struct xfrm_policy*,size_t) ;
 int FUNC_5 (struct hlist_head*,struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_6 (struct hlist_head*,struct xfrm_policy*,int) ;
 struct net* FUNC_7 (struct xfrm_policy*) ;

__attribute__((used)) static struct xfrm_policy *
FUNC_8(struct xfrm_policy *VAR_2, u8 VAR_3, int VAR_4)
{
 struct xfrm_pol_inexact_bin *VAR_5;
 struct xfrm_policy *VAR_6;
 struct hlist_head *VAR_7;
 struct net *VAR_8;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_7(VAR_2);
 FUNC_2(&VAR_8->xfrm.xfrm_policy_lock);

 VAR_7 = FUNC_4(VAR_5, VAR_2, VAR_3);
 if (!VAR_7) {
  FUNC_1(VAR_5, 0);
  return FUNC_0(-VAR_1);
 }

 VAR_6 = FUNC_6(VAR_7, VAR_2, VAR_4);
 if (VAR_6 && VAR_4) {
  FUNC_1(VAR_5, 0);
  return FUNC_0(-VAR_0);
 }

 VAR_7 = &VAR_8->xfrm.policy_inexact[VAR_3];
 FUNC_5(VAR_7, VAR_2);

 if (VAR_6)
  FUNC_1(VAR_5, 0);

 return VAR_6;
}
