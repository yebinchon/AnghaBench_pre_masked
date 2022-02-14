
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int prefixlen_s; int saddr; int prefixlen_d; int daddr; } ;
struct xfrm_policy {TYPE_2__ selector; int family; } ;
struct hlist_head {int dummy; } ;
struct xfrm_pol_inexact_node {struct hlist_head hhead; int root; } ;
struct xfrm_pol_inexact_bin {int count; int root_d; int root_s; struct hlist_head hhead; } ;
struct TYPE_3__ {int xfrm_policy_lock; } ;
struct net {TYPE_1__ xfrm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 struct xfrm_pol_inexact_node* FUNC_4 (struct net*,int *,int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct xfrm_policy*) ;
 struct net* FUNC_6 (struct xfrm_policy*) ;

__attribute__((used)) static struct hlist_head *
FUNC_7(struct xfrm_pol_inexact_bin *VAR_0,
    struct xfrm_policy *VAR_1, u8 VAR_2)
{
 struct xfrm_pol_inexact_node *VAR_3;
 struct net *VAR_4;

 VAR_4 = FUNC_6(VAR_1);
 FUNC_0(&VAR_4->xfrm.xfrm_policy_lock);

 if (FUNC_5(VAR_1))
  return &VAR_0->hhead;

 if (FUNC_3(&VAR_1->selector.daddr,
            VAR_1->family,
            VAR_1->selector.prefixlen_d)) {
  FUNC_1(&VAR_0->count);
  VAR_3 = FUNC_4(VAR_4,
          &VAR_0->root_s,
          &VAR_1->selector.saddr,
          VAR_1->family,
          VAR_1->selector.prefixlen_s,
          VAR_2);
  FUNC_2(&VAR_0->count);
  if (!VAR_3)
   return ((void*)0);

  return &VAR_3->hhead;
 }


 FUNC_1(&VAR_0->count);
 VAR_3 = FUNC_4(VAR_4,
         &VAR_0->root_d,
         &VAR_1->selector.daddr,
         VAR_1->family,
         VAR_1->selector.prefixlen_d, VAR_2);
 FUNC_2(&VAR_0->count);
 if (!VAR_3)
  return ((void*)0);


 if (FUNC_3(&VAR_1->selector.saddr,
            VAR_1->family,
            VAR_1->selector.prefixlen_s))
  return &VAR_3->hhead;

 FUNC_1(&VAR_0->count);
 VAR_3 = FUNC_4(VAR_4,
         &VAR_3->root,
         &VAR_1->selector.saddr,
         VAR_1->family,
         VAR_1->selector.prefixlen_s, VAR_2);
 FUNC_2(&VAR_0->count);
 if (!VAR_3)
  return ((void*)0);

 return &VAR_3->hhead;
}
