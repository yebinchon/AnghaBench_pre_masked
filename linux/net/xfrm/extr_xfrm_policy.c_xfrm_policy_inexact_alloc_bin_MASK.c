
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct xfrm_policy {int if_id; int type; int family; } ;
struct xfrm_pol_inexact_key {int net; int if_id; int dir; int type; int family; } ;
struct xfrm_pol_inexact_bin {int inexact_bins; int head; struct xfrm_pol_inexact_key k; int count; void* root_s; void* root_d; int hhead; } ;
struct TYPE_2__ {int inexact_bins; int xfrm_policy_lock; } ;
struct net {TYPE_1__ xfrm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct xfrm_pol_inexact_bin*) ;
 void* VAR_1 ;
 int FUNC_2 (struct xfrm_pol_inexact_bin*) ;
 struct xfrm_pol_inexact_bin* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 struct xfrm_pol_inexact_bin* FUNC_6 (int *,struct xfrm_pol_inexact_key*,int ) ;
 struct xfrm_pol_inexact_bin* FUNC_7 (int *,struct xfrm_pol_inexact_key*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct net*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct net* FUNC_10 (struct xfrm_policy const*) ;

__attribute__((used)) static struct xfrm_pol_inexact_bin *
FUNC_11(const struct xfrm_policy *VAR_4, u8 VAR_5)
{
 struct xfrm_pol_inexact_bin *VAR_6, *VAR_7;
 struct xfrm_pol_inexact_key VAR_8 = {
  .family = VAR_4->family,
  .type = VAR_4->type,
  .dir = VAR_5,
  .if_id = VAR_4->if_id,
 };
 struct net *VAR_9 = FUNC_10(VAR_4);

 FUNC_5(&VAR_9->xfrm.xfrm_policy_lock);

 FUNC_9(&VAR_8.net, VAR_9);
 VAR_6 = FUNC_6(&VAR_3, &VAR_8,
         VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->k = VAR_8;
 FUNC_0(&VAR_6->hhead);
 VAR_6->root_d = VAR_1;
 VAR_6->root_s = VAR_1;
 FUNC_8(&VAR_6->count);

 VAR_7 = FUNC_7(&VAR_3,
      &VAR_6->k, &VAR_6->head,
      VAR_2);
 if (!VAR_7) {
  FUNC_4(&VAR_6->inexact_bins, &VAR_9->xfrm.inexact_bins);
  return VAR_6;
 }

 FUNC_2(VAR_6);

 return FUNC_1(VAR_7) ? ((void*)0) : VAR_7;
}
