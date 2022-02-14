
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xfrm_state {int dummy; } ;
struct xfrm_policy {int genid; } ;
struct xfrm_dst {int num_xfrms; int num_pols; int policy_genid; int pols; } ;
struct net {int dummy; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 struct xfrm_dst* FUNC_0 (struct dst_entry*) ;
 struct xfrm_dst* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct dst_entry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct net*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct xfrm_policy**,int) ;
 struct dst_entry* FUNC_6 (struct xfrm_policy*,struct xfrm_state**,struct xfrm_dst**,int,struct flowi const*,struct dst_entry*) ;
 int FUNC_7 (struct xfrm_policy**,int,struct flowi const*,struct xfrm_state**,int ) ;
 struct net* FUNC_8 (struct xfrm_policy*) ;

__attribute__((used)) static struct xfrm_dst *
FUNC_9(struct xfrm_policy **VAR_4, int VAR_5,
          const struct flowi *VAR_6, u16 VAR_7,
          struct dst_entry *VAR_8)
{
 struct net *VAR_9 = FUNC_8(VAR_4[0]);
 struct xfrm_state *VAR_10[VAR_3];
 struct xfrm_dst *VAR_11[VAR_3];
 struct xfrm_dst *VAR_12;
 struct dst_entry *VAR_13;
 int VAR_14;


 VAR_14 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_10, VAR_7);
 if (VAR_14 <= 0) {
  if (VAR_14 == 0)
   return ((void*)0);

  if (VAR_14 != -VAR_0)
   FUNC_3(VAR_9, VAR_2);
  return FUNC_1(VAR_14);
 }

 VAR_13 = FUNC_6(VAR_4[0], VAR_10, VAR_11, VAR_14, VAR_6, VAR_8);
 if (FUNC_2(VAR_13)) {
  FUNC_3(VAR_9, VAR_1);
  return FUNC_0(VAR_13);
 }

 VAR_12 = (struct xfrm_dst *)VAR_13;
 VAR_12->num_xfrms = VAR_14;
 VAR_12->num_pols = VAR_5;
 FUNC_5(VAR_12->pols, VAR_4, sizeof(struct xfrm_policy *) * VAR_5);
 VAR_12->policy_genid = FUNC_4(&VAR_4[0]->genid);

 return VAR_12;
}
