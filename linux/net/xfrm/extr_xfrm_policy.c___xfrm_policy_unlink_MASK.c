
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int all; } ;
struct xfrm_policy {TYPE_2__ walk; int byidx; int bydst_inexact_list; int bydst; } ;
struct TYPE_3__ {int * policy_count; } ;
struct net {TYPE_1__ xfrm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 struct net* FUNC_6 (struct xfrm_policy*) ;

__attribute__((used)) static struct xfrm_policy *FUNC_7(struct xfrm_policy *VAR_0,
      int VAR_1)
{
 struct net *VAR_2 = FUNC_6(VAR_0);

 if (FUNC_5(&VAR_0->walk.all))
  return ((void*)0);


 if (!FUNC_3(&VAR_0->bydst)) {
  FUNC_2(&VAR_0->bydst);
  FUNC_1(&VAR_0->bydst_inexact_list);
  FUNC_0(&VAR_0->byidx);
 }

 FUNC_4(&VAR_0->walk.all);
 VAR_2->xfrm.policy_count[VAR_1]--;

 return VAR_0;
}
