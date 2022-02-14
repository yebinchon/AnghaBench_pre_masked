
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct vgic_its {TYPE_1__* dev; } ;
struct vgic_irq {struct vgic_irq* irq; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm {int dummy; } ;
struct its_ite {struct its_ite* irq; } ;
struct its_device {int num_eventid_bits; } ;
struct its_collection {int target_addr; } ;
struct TYPE_2__ {struct kvm* kvm; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct vgic_irq*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct vgic_irq*) ;
 scalar_t__ VAR_5 ;
 struct its_collection* FUNC_3 (struct vgic_its*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct its_collection*) ;
 struct kvm_vcpu* FUNC_5 (struct kvm*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 struct vgic_irq* FUNC_7 (struct kvm*,scalar_t__,struct kvm_vcpu*) ;
 struct vgic_irq* FUNC_8 (struct its_device*,struct its_collection*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct vgic_its *VAR_6, u32 VAR_7,
    void *VAR_8, void *VAR_9)
{
 struct its_device *VAR_10 = (struct its_device *)VAR_9;
 struct its_collection *VAR_11;
 struct kvm *VAR_12 = VAR_6->dev->kvm;
 struct kvm_vcpu *VAR_13 = ((void*)0);
 u64 VAR_14;
 u64 *VAR_15 = (u64 *)VAR_8;
 struct vgic_irq *VAR_16;
 u32 VAR_17, VAR_18;
 struct its_ite *VAR_19;
 u32 VAR_20;

 VAR_14 = *VAR_15;

 VAR_14 = FUNC_6(VAR_14);

 VAR_17 = VAR_14 & VAR_1;
 VAR_18 = (VAR_14 & VAR_3) >> VAR_4;

 if (!VAR_18)
  return 1;

 if (VAR_18 < VAR_5)
  return -VAR_0;

 VAR_20 = VAR_14 >> VAR_2;
 if (VAR_7 + VAR_20 >= FUNC_0(VAR_10->num_eventid_bits))
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_6, VAR_17);
 if (!VAR_11)
  return -VAR_0;

 VAR_19 = FUNC_8(VAR_10, VAR_11, VAR_7);
 if (FUNC_1(VAR_19))
  return FUNC_2(VAR_19);

 if (FUNC_4(VAR_11))
  VAR_13 = FUNC_5(VAR_12, VAR_11->target_addr);

 VAR_16 = FUNC_7(VAR_12, VAR_18, VAR_13);
 if (FUNC_1(VAR_16))
  return FUNC_2(VAR_16);
 VAR_19->irq = VAR_16;

 return VAR_20;
}
