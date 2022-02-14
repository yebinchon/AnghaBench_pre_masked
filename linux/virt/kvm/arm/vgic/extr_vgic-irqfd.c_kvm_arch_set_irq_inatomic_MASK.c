
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_msi {int dummy; } ;
struct kvm_kernel_irq_routing_entry {scalar_t__ type; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kvm_kernel_irq_routing_entry*,struct kvm_msi*) ;
 scalar_t__ FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm*,struct kvm_msi*) ;

int FUNC_3(struct kvm_kernel_irq_routing_entry *VAR_2,
         struct kvm *VAR_3, int VAR_4, int VAR_5,
         bool VAR_6)
{
 if (VAR_2->type == VAR_1 && FUNC_1(VAR_3) && VAR_5) {
  struct kvm_msi VAR_7;

  FUNC_0(VAR_2, &VAR_7);
  if (!FUNC_2(VAR_3, &VAR_7))
   return 0;
 }

 return -VAR_0;
}
