
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memory_slot {scalar_t__ base_gfn; int npages; } ;
struct TYPE_2__ {int * pgd; } ;
struct kvm {TYPE_1__ arch; } ;
typedef scalar_t__ phys_addr_t ;
typedef int pgd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm*,int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct kvm*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct kvm*,scalar_t__) ;
 int FUNC_3 (struct kvm*,int ) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_2,
     struct kvm_memory_slot *VAR_3)
{
 phys_addr_t VAR_4 = VAR_3->base_gfn << VAR_0;
 phys_addr_t VAR_5 = VAR_4 + VAR_1 * VAR_3->npages;
 phys_addr_t VAR_6;
 pgd_t *VAR_7;

 VAR_7 = VAR_2->arch.pgd + FUNC_2(VAR_2, VAR_4);
 do {
  VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_5);
  if (!FUNC_3(VAR_2, *VAR_7))
   FUNC_0(VAR_2, VAR_7, VAR_4, VAR_6);
 } while (VAR_7++, VAR_4 = VAR_6, VAR_4 != VAR_5);
}
