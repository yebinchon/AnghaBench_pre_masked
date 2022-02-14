
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vgic_its {int dummy; } ;
struct vgic_irq {int dummy; } ;
struct TYPE_8__ {scalar_t__ its_vm; } ;
struct TYPE_5__ {TYPE_4__ its_vpe; } ;
struct TYPE_6__ {TYPE_1__ vgic_v3; } ;
struct TYPE_7__ {TYPE_2__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct kvm {int dummy; } ;
struct its_collection {int target_addr; } ;


 int VAR_0 ;
 struct its_collection* FUNC_0 (struct vgic_its*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct its_collection*) ;
 int FUNC_4 (int *) ;
 struct kvm_vcpu* FUNC_5 (struct kvm*,int ) ;
 int FUNC_6 (struct kvm*,struct vgic_irq*,struct kvm_vcpu*,int) ;
 int FUNC_7 (struct kvm*,struct kvm_vcpu*,int **) ;
 struct vgic_irq* FUNC_8 (struct kvm*,int *,int ) ;
 int FUNC_9 (struct kvm*,struct vgic_irq*) ;

__attribute__((used)) static int FUNC_10(struct kvm *VAR_1, struct vgic_its *VAR_2,
          u64 *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3);
 struct its_collection *VAR_5;
 struct kvm_vcpu *VAR_6;
 struct vgic_irq *VAR_7;
 u32 *VAR_8;
 int VAR_9, VAR_10;

 VAR_5 = FUNC_0(VAR_2, VAR_4);
 if (!FUNC_3(VAR_5))
  return VAR_0;

 VAR_6 = FUNC_5(VAR_1, VAR_5->target_addr);

 VAR_9 = FUNC_7(VAR_1, VAR_6, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_7 = FUNC_8(VAR_1, ((void*)0), VAR_8[VAR_10]);
  if (!VAR_7)
   continue;
  FUNC_6(VAR_1, VAR_7, VAR_6, 0);
  FUNC_9(VAR_1, VAR_7);
 }

 FUNC_4(VAR_8);

 if (VAR_6->arch.vgic_cpu.vgic_v3.its_vpe.its_vm)
  FUNC_2(&VAR_6->arch.vgic_cpu.vgic_v3.its_vpe);

 return 0;
}
