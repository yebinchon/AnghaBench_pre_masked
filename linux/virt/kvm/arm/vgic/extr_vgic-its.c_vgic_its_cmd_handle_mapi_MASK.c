
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vgic_its {int dummy; } ;
struct vgic_irq {struct vgic_irq* irq; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int propbaser; } ;
struct TYPE_4__ {TYPE_1__ vgic; } ;
struct kvm {TYPE_2__ arch; } ;
struct its_ite {struct its_ite* irq; } ;
struct its_device {int num_eventid_bits; } ;
struct its_collection {int target_addr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct vgic_irq*) ;
 int FUNC_2 (struct vgic_irq*) ;
 struct its_collection* FUNC_3 (struct vgic_its*,int) ;
 scalar_t__ FUNC_4 (struct vgic_its*,int,int) ;
 struct its_device* FUNC_5 (struct vgic_its*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct kvm*,struct vgic_irq*) ;
 scalar_t__ FUNC_12 (struct its_collection*) ;
 struct kvm_vcpu* FUNC_13 (struct kvm*,int ) ;
 int FUNC_14 (int ) ;
 struct vgic_irq* FUNC_15 (struct kvm*,int,struct kvm_vcpu*) ;
 int FUNC_16 (struct vgic_its*,struct its_collection**,int) ;
 struct vgic_irq* FUNC_17 (struct its_device*,struct its_collection*,int) ;
 int FUNC_18 (struct vgic_its*,int) ;

__attribute__((used)) static int FUNC_19(struct kvm *VAR_5, struct vgic_its *VAR_6,
        u64 *VAR_7)
{
 u32 VAR_8 = FUNC_8(VAR_7);
 u32 VAR_9 = FUNC_9(VAR_7);
 u32 VAR_10 = FUNC_6(VAR_7);
 struct its_ite *VAR_11;
 struct kvm_vcpu *VAR_12 = ((void*)0);
 struct its_device *VAR_13;
 struct its_collection *VAR_14, *VAR_15 = ((void*)0);
 struct vgic_irq *VAR_16;
 int VAR_17;

 VAR_13 = FUNC_5(VAR_6, VAR_8);
 if (!VAR_13)
  return VAR_2;

 if (VAR_9 >= FUNC_0(VAR_13->num_eventid_bits))
  return VAR_0;

 if (FUNC_7(VAR_7) == VAR_4)
  VAR_17 = FUNC_10(VAR_7);
 else
  VAR_17 = VAR_9;
 if (VAR_17 < VAR_3 ||
     VAR_17 >= FUNC_14(VAR_5->arch.vgic.propbaser))
  return VAR_1;


 if (FUNC_4(VAR_6, VAR_8, VAR_9))
  return 0;

 VAR_14 = FUNC_3(VAR_6, VAR_10);
 if (!VAR_14) {
  int VAR_18 = FUNC_16(VAR_6, &VAR_14, VAR_10);
  if (VAR_18)
   return VAR_18;
  VAR_15 = VAR_14;
 }

 VAR_11 = FUNC_17(VAR_13, VAR_14, VAR_9);
 if (FUNC_1(VAR_11)) {
  if (VAR_15)
   FUNC_18(VAR_6, VAR_10);
  return FUNC_2(VAR_11);
 }

 if (FUNC_12(VAR_14))
  VAR_12 = FUNC_13(VAR_5, VAR_14->target_addr);

 VAR_16 = FUNC_15(VAR_5, VAR_17, VAR_12);
 if (FUNC_1(VAR_16)) {
  if (VAR_15)
   FUNC_18(VAR_6, VAR_10);
  FUNC_11(VAR_5, VAR_11);
  return FUNC_2(VAR_16);
 }
 VAR_11->irq = VAR_16;

 return 0;
}
