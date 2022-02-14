
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vgic_irq {int pending_latch; int irq_lock; } ;
struct kvm_msi {int address_lo; int data; int devid; scalar_t__ address_hi; } ;
struct kvm {int dummy; } ;
typedef int phys_addr_t ;


 int FUNC_0 (int *,unsigned long) ;
 struct vgic_irq* FUNC_1 (struct kvm*,int,int ,int ) ;
 int FUNC_2 (struct kvm*,struct vgic_irq*,unsigned long) ;

int FUNC_3(struct kvm *VAR_0, struct kvm_msi *VAR_1)
{
 struct vgic_irq *VAR_2;
 unsigned long VAR_3;
 phys_addr_t VAR_4;

 VAR_4 = (u64)VAR_1->address_hi << 32 | VAR_1->address_lo;
 VAR_2 = FUNC_1(VAR_0, VAR_4, VAR_1->devid, VAR_1->data);

 if (!VAR_2)
  return -1;

 FUNC_0(&VAR_2->irq_lock, VAR_3);
 VAR_2->pending_latch = 1;
 FUNC_2(VAR_0, VAR_2, VAR_3);

 return 0;
}
