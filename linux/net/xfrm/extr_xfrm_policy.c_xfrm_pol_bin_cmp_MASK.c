
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_pol_inexact_key {int dir; int type; int family; int if_id; int net; } ;
struct TYPE_2__ {int dir; int type; int family; int if_id; int net; } ;
struct xfrm_pol_inexact_bin {TYPE_1__ k; } ;
struct rhashtable_compare_arg {struct xfrm_pol_inexact_key* key; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct rhashtable_compare_arg *VAR_0,
       const void *VAR_1)
{
 const struct xfrm_pol_inexact_key *VAR_2 = VAR_0->key;
 const struct xfrm_pol_inexact_bin *VAR_3 = VAR_1;
 int VAR_4;

 if (!FUNC_0(FUNC_1(&VAR_3->k.net), FUNC_1(&VAR_2->net)))
  return -1;

 VAR_4 = VAR_3->k.dir ^ VAR_2->dir;
 if (VAR_4)
  return VAR_4;

 VAR_4 = VAR_3->k.type ^ VAR_2->type;
 if (VAR_4)
  return VAR_4;

 VAR_4 = VAR_3->k.family ^ VAR_2->family;
 if (VAR_4)
  return VAR_4;

 return VAR_3->k.if_id ^ VAR_2->if_id;
}
