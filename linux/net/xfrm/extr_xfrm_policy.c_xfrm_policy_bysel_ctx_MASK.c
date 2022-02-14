
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct xfrm_selector {int daddr; int saddr; int family; } ;
struct xfrm_sec_ctx {int dummy; } ;
struct xfrm_policy {scalar_t__ pos; int security; } ;
struct xfrm_pol_inexact_candidates {struct hlist_head** res; } ;
struct xfrm_pol_inexact_bin {int dummy; } ;
struct TYPE_2__ {int xfrm_policy_lock; } ;
struct net {TYPE_1__ xfrm; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (struct hlist_head**) ;
 struct xfrm_policy* FUNC_1 (struct hlist_head*,int ,int ,int ,int,struct xfrm_selector*,struct xfrm_sec_ctx*) ;
 int FUNC_2 (struct xfrm_policy*,int) ;
 struct hlist_head* FUNC_3 (struct net*,struct xfrm_selector*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct xfrm_policy*) ;
 int FUNC_8 (struct xfrm_pol_inexact_candidates*,struct xfrm_pol_inexact_bin*,int *,int *) ;
 struct xfrm_pol_inexact_bin* FUNC_9 (struct net*,int ,int ,int,int ) ;
 int FUNC_10 (struct xfrm_pol_inexact_bin*) ;
 int FUNC_11 (struct xfrm_policy*) ;

struct xfrm_policy *FUNC_12(struct net *VAR_0, u32 VAR_1, u32 VAR_2,
       u8 VAR_3, int VAR_4,
       struct xfrm_selector *VAR_5,
       struct xfrm_sec_ctx *VAR_6, int VAR_7,
       int *VAR_8)
{
 struct xfrm_pol_inexact_bin *VAR_9 = ((void*)0);
 struct xfrm_policy *VAR_10, *VAR_11 = ((void*)0);
 struct hlist_head *VAR_12;

 *VAR_8 = 0;
 FUNC_5(&VAR_0->xfrm.xfrm_policy_lock);
 VAR_12 = FUNC_3(VAR_0, VAR_5, VAR_5->family, VAR_4);
 if (!VAR_12) {
  struct xfrm_pol_inexact_candidates VAR_13;
  int VAR_14;

  VAR_9 = FUNC_9(VAR_0, VAR_3,
       VAR_5->family, VAR_4, VAR_2);
  if (!VAR_9) {
   FUNC_6(&VAR_0->xfrm.xfrm_policy_lock);
   return ((void*)0);
  }

  if (!FUNC_8(&VAR_13, VAR_9,
        &VAR_5->saddr,
        &VAR_5->daddr)) {
   FUNC_6(&VAR_0->xfrm.xfrm_policy_lock);
   return ((void*)0);
  }

  VAR_10 = ((void*)0);
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_13.res); VAR_14++) {
   struct xfrm_policy *VAR_15;

   VAR_15 = FUNC_1(VAR_13.res[VAR_14], VAR_1,
            VAR_2, VAR_3, VAR_4,
            VAR_5, VAR_6);
   if (!VAR_15)
    continue;

   if (!VAR_10 || VAR_15->pos < VAR_10->pos)
    VAR_10 = VAR_15;
  }
 } else {
  VAR_10 = FUNC_1(VAR_12, VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6);
 }

 if (VAR_10) {
  FUNC_7(VAR_10);
  if (VAR_7) {
   *VAR_8 = FUNC_4(VAR_10->security);
   if (*VAR_8) {
    FUNC_6(&VAR_0->xfrm.xfrm_policy_lock);
    return VAR_10;
   }
   FUNC_2(VAR_10, VAR_4);
  }
  VAR_11 = VAR_10;
 }
 FUNC_6(&VAR_0->xfrm.xfrm_policy_lock);

 if (VAR_11 && VAR_7)
  FUNC_11(VAR_11);
 if (VAR_9 && VAR_7)
  FUNC_10(VAR_9);
 return VAR_11;
}
