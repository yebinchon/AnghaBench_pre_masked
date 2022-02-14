
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int pin; } ;
struct kvm_kernel_irq_routing_entry {TYPE_1__ irqchip; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct kvm*,int ,unsigned int,int,int *) ;
 int FUNC_1 (struct kvm*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct kvm_kernel_irq_routing_entry *VAR_2,
   struct kvm *VAR_3, int VAR_4,
   int VAR_5, bool VAR_6)
{
 unsigned int VAR_7 = VAR_2->irqchip.pin + VAR_1;

 if (!FUNC_1(VAR_3, VAR_7))
  return -VAR_0;
 return FUNC_0(VAR_3, 0, VAR_7, VAR_5, ((void*)0));
}
