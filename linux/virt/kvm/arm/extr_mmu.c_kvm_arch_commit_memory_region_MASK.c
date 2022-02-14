
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_userspace_memory_region {int flags; int slot; } ;
struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef enum kvm_mr_change { ____Placeholder_kvm_mr_change } kvm_mr_change ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm*,int ) ;

void FUNC_1(struct kvm *VAR_2,
       const struct kvm_userspace_memory_region *VAR_3,
       const struct kvm_memory_slot *VAR_4,
       const struct kvm_memory_slot *VAR_5,
       enum kvm_mr_change VAR_6)
{





 if (VAR_6 != VAR_1 && VAR_3->flags & VAR_0)
  FUNC_0(VAR_2, VAR_3->slot);
}
