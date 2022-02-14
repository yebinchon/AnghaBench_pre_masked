
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct vgic_irq {scalar_t__ group; } ;
struct kvm_vcpu {int kvm; } ;
typedef int gpa_t ;


 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (int ,int) ;
 struct vgic_irq* FUNC_2 (int ,struct kvm_vcpu*,unsigned long) ;
 int FUNC_3 (int ,struct vgic_irq*) ;

unsigned long FUNC_4(struct kvm_vcpu *VAR_0,
       gpa_t VAR_1, unsigned int VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_1, 1);
 u32 VAR_4 = 0;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_2 * 8; VAR_5++) {
  struct vgic_irq *VAR_6 = FUNC_2(VAR_0->kvm, VAR_0, VAR_3 + VAR_5);

  if (VAR_6->group)
   VAR_4 |= FUNC_0(VAR_5);

  FUNC_3(VAR_0->kvm, VAR_6);
 }

 return VAR_4;
}
