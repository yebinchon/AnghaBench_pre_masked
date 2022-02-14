
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct vgic_irq {scalar_t__ active; } ;
struct kvm_vcpu {int kvm; } ;
typedef int gpa_t ;


 unsigned int FUNC_0 (int ,int) ;
 struct vgic_irq* FUNC_1 (int ,struct kvm_vcpu*,unsigned int) ;
 int FUNC_2 (int ,struct vgic_irq*) ;

unsigned long FUNC_3(struct kvm_vcpu *VAR_0,
        gpa_t VAR_1, unsigned int VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1, 1);
 u32 VAR_4 = 0;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_2 * 8; VAR_5++) {
  struct vgic_irq *VAR_6 = FUNC_1(VAR_0->kvm, VAR_0, VAR_3 + VAR_5);

  if (VAR_6->active)
   VAR_4 |= (1U << VAR_5);

  FUNC_2(VAR_0->kvm, VAR_6);
 }

 return VAR_4;
}
