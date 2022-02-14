
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int base_gfn; } ;
struct kvm {int dummy; } ;
typedef int phys_addr_t ;
typedef int gfn_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct kvm*,int,int) ;

__attribute__((used)) static void FUNC_3(struct kvm *VAR_1,
  struct kvm_memory_slot *VAR_2,
  gfn_t VAR_3, unsigned long VAR_4)
{
 phys_addr_t VAR_5 = VAR_2->base_gfn + VAR_3;
 phys_addr_t VAR_6 = (VAR_5 + FUNC_0(VAR_4)) << VAR_0;
 phys_addr_t VAR_7 = (VAR_5 + FUNC_1(VAR_4) + 1) << VAR_0;

 FUNC_2(VAR_1, VAR_6, VAR_7);
}
