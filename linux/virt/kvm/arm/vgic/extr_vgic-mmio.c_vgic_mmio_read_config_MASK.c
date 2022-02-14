
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct vgic_irq {scalar_t__ config; } ;
struct kvm_vcpu {int kvm; } ;
typedef int gpa_t ;


 unsigned int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 struct vgic_irq* FUNC_1 (int ,struct kvm_vcpu*,unsigned int) ;
 int FUNC_2 (int ,struct vgic_irq*) ;

unsigned long FUNC_3(struct kvm_vcpu *VAR_1,
        gpa_t VAR_2, unsigned int VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2, 2);
 u32 VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3 * 4; VAR_6++) {
  struct vgic_irq *VAR_7 = FUNC_1(VAR_1->kvm, VAR_1, VAR_4 + VAR_6);

  if (VAR_7->config == VAR_0)
   VAR_5 |= (2U << (VAR_6 * 2));

  FUNC_2(VAR_1->kvm, VAR_7);
 }

 return VAR_5;
}
