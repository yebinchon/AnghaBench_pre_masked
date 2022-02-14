
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_irq {int irq_lock; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_vcpu*,struct vgic_irq*,int) ;
 int FUNC_2 (struct kvm_vcpu*,struct vgic_irq*,int) ;

__attribute__((used)) static inline void FUNC_3(struct kvm_vcpu *VAR_2,
        struct vgic_irq *VAR_3, int VAR_4)
{
 FUNC_0(&VAR_3->irq_lock);

 if (VAR_1.type == VAR_0)
  FUNC_1(VAR_2, VAR_3, VAR_4);
 else
  FUNC_2(VAR_2, VAR_3, VAR_4);
}
