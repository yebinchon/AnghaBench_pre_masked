
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy_afinfo {struct dst_ops* dst_ops; } ;
struct dst_ops {scalar_t__ confirm_neigh; int * neigh_lookup; int * link_failure; int * negative_advice; int * mtu; int * default_advmss; int * check; int * kmem_cachep; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,struct xfrm_policy_afinfo const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int ** VAR_10 ;
 int VAR_11 ;

int FUNC_7(const struct xfrm_policy_afinfo *VAR_12, int VAR_13)
{
 int VAR_14 = 0;

 if (FUNC_1(VAR_13 >= FUNC_0(VAR_10)))
  return -VAR_0;

 FUNC_4(&VAR_11);
 if (FUNC_6(VAR_10[VAR_13] != ((void*)0)))
  VAR_14 = -VAR_1;
 else {
  struct dst_ops *VAR_15 = VAR_12->dst_ops;
  if (FUNC_2(VAR_15->kmem_cachep == ((void*)0)))
   VAR_15->kmem_cachep = VAR_4;
  if (FUNC_2(VAR_15->check == ((void*)0)))
   VAR_15->check = VAR_5;
  if (FUNC_2(VAR_15->default_advmss == ((void*)0)))
   VAR_15->default_advmss = VAR_3;
  if (FUNC_2(VAR_15->mtu == ((void*)0)))
   VAR_15->mtu = VAR_7;
  if (FUNC_2(VAR_15->negative_advice == ((void*)0)))
   VAR_15->negative_advice = VAR_8;
  if (FUNC_2(VAR_15->link_failure == ((void*)0)))
   VAR_15->link_failure = VAR_6;
  if (FUNC_2(VAR_15->neigh_lookup == ((void*)0)))
   VAR_15->neigh_lookup = VAR_9;
  if (FUNC_2(!VAR_15->confirm_neigh))
   VAR_15->confirm_neigh = VAR_2;
  FUNC_3(VAR_10[VAR_13], VAR_12);
 }
 FUNC_5(&VAR_11);

 return VAR_14;
}
