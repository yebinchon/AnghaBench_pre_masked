
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {scalar_t__ config; int line_level; int pending_latch; int irq_lock; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 struct kvm_vcpu* FUNC_0 (struct kvm*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,unsigned int,int) ;
 struct vgic_irq* FUNC_4 (struct kvm*,struct kvm_vcpu*,unsigned int) ;
 int FUNC_5 (struct kvm*) ;
 int FUNC_6 (struct kvm*,struct vgic_irq*) ;
 int FUNC_7 (struct kvm*,struct vgic_irq*,unsigned long) ;
 int FUNC_8 (struct vgic_irq*,int,void*) ;

int FUNC_9(struct kvm *VAR_3, int VAR_4, unsigned int VAR_5,
   bool VAR_6, void *VAR_7)
{
 struct kvm_vcpu *VAR_8;
 struct vgic_irq *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 FUNC_3(VAR_4, VAR_5, VAR_6);

 VAR_11 = FUNC_5(VAR_3);
 if (VAR_11)
  return VAR_11;

 VAR_8 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_8 && VAR_5 < VAR_2)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_3, VAR_8, VAR_5);
 if (!VAR_9)
  return -VAR_0;

 FUNC_1(&VAR_9->irq_lock, VAR_10);

 if (!FUNC_8(VAR_9, VAR_6, VAR_7)) {

  FUNC_2(&VAR_9->irq_lock, VAR_10);
  FUNC_6(VAR_3, VAR_9);
  return 0;
 }

 if (VAR_9->config == VAR_1)
  VAR_9->line_level = VAR_6;
 else
  VAR_9->pending_latch = 1;

 FUNC_7(VAR_3, VAR_9, VAR_10);
 FUNC_6(VAR_3, VAR_9);

 return 0;
}
