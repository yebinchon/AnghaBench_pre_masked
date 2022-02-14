
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_host_map {int * page; int * hva; int pfn; int gfn; } ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct kvm_vcpu *VAR_1, struct kvm_host_map *VAR_2,
      bool VAR_3)
{
 if (!VAR_2)
  return;

 if (!VAR_2->hva)
  return;

 if (VAR_2->page != VAR_0)
  FUNC_0(VAR_2->page);





 if (VAR_3) {
  FUNC_3(VAR_1, VAR_2->gfn);
  FUNC_2(VAR_2->pfn);
 } else {
  FUNC_1(VAR_2->pfn);
 }

 VAR_2->hva = ((void*)0);
 VAR_2->page = ((void*)0);
}
