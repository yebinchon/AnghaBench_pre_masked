
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_redist_region {int free_index; scalar_t__ base; } ;
struct vgic_io_device {int dev; struct kvm_vcpu* redist_vcpu; int nr_regions; int regions; int iodev_type; scalar_t__ base_addr; } ;
struct vgic_dist {int rd_regions; } ;
struct vgic_cpu {struct vgic_redist_region* rdreg; struct vgic_io_device rd_iodev; } ;
struct TYPE_4__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {TYPE_2__ arch; struct kvm* kvm; } ;
struct TYPE_3__ {struct vgic_dist vgic; } ;
struct kvm {int slots_lock; TYPE_1__ arch; } ;
typedef scalar_t__ gpa_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct kvm*,int ,scalar_t__,int,int *) ;
 int VAR_5 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kvm*) ;
 int VAR_6 ;
 struct vgic_redist_region* FUNC_7 (int *) ;

int FUNC_8(struct kvm_vcpu *VAR_7)
{
 struct kvm *VAR_8 = VAR_7->kvm;
 struct vgic_dist *VAR_9 = &VAR_8->arch.vgic;
 struct vgic_cpu *VAR_10 = &VAR_7->arch.vgic_cpu;
 struct vgic_io_device *VAR_11 = &VAR_7->arch.vgic_cpu.rd_iodev;
 struct vgic_redist_region *VAR_12;
 gpa_t VAR_13;
 int VAR_14;

 if (!FUNC_1(VAR_10->rd_iodev.base_addr))
  return 0;







 VAR_12 = FUNC_7(&VAR_9->rd_regions);
 if (!VAR_12)
  return 0;

 if (!FUNC_6(VAR_8))
  return -VAR_0;

 VAR_10->rdreg = VAR_12;

 VAR_13 = VAR_12->base + VAR_12->free_index * VAR_3;

 FUNC_3(&VAR_11->dev, &VAR_5);
 VAR_11->base_addr = VAR_13;
 VAR_11->iodev_type = VAR_1;
 VAR_11->regions = VAR_6;
 VAR_11->nr_regions = FUNC_0(VAR_6);
 VAR_11->redist_vcpu = VAR_7;

 FUNC_4(&VAR_8->slots_lock);
 VAR_14 = FUNC_2(VAR_8, VAR_2, VAR_13,
          2 * VAR_4, &VAR_11->dev);
 FUNC_5(&VAR_8->slots_lock);

 if (VAR_14)
  return VAR_14;

 VAR_12->free_index++;
 return 0;
}
