
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int all; } ;
struct xfrm_policy {TYPE_1__ walk; } ;
struct TYPE_4__ {int * policy_count; int policy_all; } ;
struct net {TYPE_2__ xfrm; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct xfrm_policy*) ;
 struct net* FUNC_2 (struct xfrm_policy*) ;

__attribute__((used)) static void FUNC_3(struct xfrm_policy *VAR_0, int VAR_1)
{
 struct net *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_0->walk.all, &VAR_2->xfrm.policy_all);
 VAR_2->xfrm.policy_count[VAR_1]++;
 FUNC_1(VAR_0);
}
