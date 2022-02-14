
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vgic_irq {unsigned long source; int pending_latch; int irq_lock; } ;
struct kvm_vcpu {int kvm; } ;
typedef int gpa_t ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vgic_irq* FUNC_2 (int ,struct kvm_vcpu*,int) ;
 int FUNC_3 (int ,struct vgic_irq*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_0,
         gpa_t VAR_1, unsigned int VAR_2,
         unsigned long VAR_3)
{
 u32 VAR_4 = VAR_1 & 0x0f;
 int VAR_5;
 unsigned long VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct vgic_irq *VAR_7 = FUNC_2(VAR_0->kvm, VAR_0, VAR_4 + VAR_5);

  FUNC_0(&VAR_7->irq_lock, VAR_6);

  VAR_7->source &= ~((VAR_3 >> (VAR_5 * 8)) & 0xff);
  if (!VAR_7->source)
   VAR_7->pending_latch = 0;

  FUNC_1(&VAR_7->irq_lock, VAR_6);
  FUNC_3(VAR_0->kvm, VAR_7);
 }
}
