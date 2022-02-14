
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {int dummy; } ;
struct kvm {int dummy; } ;
struct gfn_to_hva_cache {int dummy; } ;
typedef int gpa_t ;


 int FUNC_0 (struct kvm_memslots*,struct gfn_to_hva_cache*,int ,unsigned long) ;
 struct kvm_memslots* FUNC_1 (struct kvm*) ;

int FUNC_2(struct kvm *VAR_0, struct gfn_to_hva_cache *VAR_1,
         gpa_t VAR_2, unsigned long VAR_3)
{
 struct kvm_memslots *VAR_4 = FUNC_1(VAR_0);
 return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
