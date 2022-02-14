
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vgic_its {int dummy; } ;
struct vgic_irq {int pending_latch; int irq_lock; int host_irq; scalar_t__ hw; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct kvm*,struct vgic_its*,int ,int ,struct vgic_irq**) ;
 int FUNC_3 (struct kvm*,struct vgic_irq*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_1, struct vgic_its *VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 struct vgic_irq *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_5->hw)
  return FUNC_0(VAR_5->host_irq,
          VAR_0, 1);

 FUNC_1(&VAR_5->irq_lock, VAR_6);
 VAR_5->pending_latch = 1;
 FUNC_3(VAR_1, VAR_5, VAR_6);

 return 0;
}
