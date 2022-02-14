
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {int active; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct vgic_irq*,int) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0, struct vgic_irq *VAR_1,
          bool VAR_2, bool VAR_3)
{
 if (VAR_3)
  return;

 VAR_1->active = VAR_2;
 FUNC_0(VAR_1, VAR_2);
}
