
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct vgic_irq {scalar_t__ targets; } ;
struct kvm_vcpu {int kvm; } ;
typedef int gpa_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 struct vgic_irq* FUNC_1 (int ,struct kvm_vcpu*,scalar_t__) ;
 int FUNC_2 (int ,struct vgic_irq*) ;

__attribute__((used)) static unsigned long FUNC_3(struct kvm_vcpu *VAR_0,
        gpa_t VAR_1, unsigned int VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1, 8);
 int VAR_4;
 u64 VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct vgic_irq *VAR_6 = FUNC_1(VAR_0->kvm, VAR_0, VAR_3 + VAR_4);

  VAR_5 |= (u64)VAR_6->targets << (VAR_4 * 8);

  FUNC_2(VAR_0->kvm, VAR_6);
 }

 return VAR_5;
}
