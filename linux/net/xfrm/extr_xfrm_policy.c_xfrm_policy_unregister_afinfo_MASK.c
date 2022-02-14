
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy_afinfo {struct dst_ops* dst_ops; } ;
struct dst_ops {int * link_failure; int * negative_advice; int * check; int * kmem_cachep; } ;


 int FUNC_0 (struct xfrm_policy_afinfo const**) ;
 int FUNC_1 (struct xfrm_policy_afinfo const*,int *) ;
 int FUNC_2 () ;
 struct xfrm_policy_afinfo const** VAR_0 ;

void FUNC_3(const struct xfrm_policy_afinfo *VAR_1)
{
 struct dst_ops *VAR_2 = VAR_1->dst_ops;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3] != VAR_1)
   continue;
  FUNC_1(VAR_0[VAR_3], ((void*)0));
  break;
 }

 FUNC_2();

 VAR_2->kmem_cachep = ((void*)0);
 VAR_2->check = ((void*)0);
 VAR_2->negative_advice = ((void*)0);
 VAR_2->link_failure = ((void*)0);
}
