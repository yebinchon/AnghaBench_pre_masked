
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u16 ;
struct xfrm_pol_inexact_node {int hhead; int root; } ;
struct xfrm_pol_inexact_candidates {int ** res; } ;
struct TYPE_2__ {int family; } ;
struct xfrm_pol_inexact_bin {int count; int root_s; int root_d; int hhead; TYPE_1__ k; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct xfrm_pol_inexact_candidates*,int ,int) ;
 struct xfrm_pol_inexact_node* FUNC_1 (int *,int *,int const*,int ) ;

__attribute__((used)) static bool
FUNC_2(struct xfrm_pol_inexact_candidates *VAR_4,
        struct xfrm_pol_inexact_bin *VAR_5,
        const xfrm_address_t *VAR_6,
        const xfrm_address_t *VAR_7)
{
 struct xfrm_pol_inexact_node *VAR_8;
 u16 VAR_9;

 if (!VAR_5)
  return 0;

 VAR_9 = VAR_5->k.family;
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->res[VAR_0] = &VAR_5->hhead;

 VAR_8 = FUNC_1(&VAR_5->root_d, &VAR_5->count, VAR_7,
         VAR_9);
 if (VAR_8) {
  VAR_4->res[VAR_2] = &VAR_8->hhead;
  VAR_8 = FUNC_1(&VAR_8->root, &VAR_5->count, VAR_6,
          VAR_9);
  if (VAR_8)
   VAR_4->res[VAR_1] = &VAR_8->hhead;
 }

 VAR_8 = FUNC_1(&VAR_5->root_s, &VAR_5->count, VAR_6,
         VAR_9);
 if (VAR_8)
  VAR_4->res[VAR_3] = &VAR_8->hhead;

 return 1;
}
