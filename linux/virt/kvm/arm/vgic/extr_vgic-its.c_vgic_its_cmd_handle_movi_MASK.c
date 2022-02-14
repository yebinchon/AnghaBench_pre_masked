
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vgic_its {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm {int dummy; } ;
struct its_ite {int irq; struct its_collection* collection; } ;
struct its_collection {int target_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct its_collection* FUNC_0 (struct vgic_its*,int ) ;
 struct its_ite* FUNC_1 (struct vgic_its*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct its_collection*) ;
 struct kvm_vcpu* FUNC_6 (struct kvm*,int ) ;
 int FUNC_7 (int ,struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm*) ;

__attribute__((used)) static int FUNC_9(struct kvm *VAR_2, struct vgic_its *VAR_3,
        u64 *VAR_4)
{
 u32 VAR_5 = FUNC_3(VAR_4);
 u32 VAR_6 = FUNC_4(VAR_4);
 u32 VAR_7 = FUNC_2(VAR_4);
 struct kvm_vcpu *VAR_8;
 struct its_ite *VAR_9;
 struct its_collection *VAR_10;

 VAR_9 = FUNC_1(VAR_3, VAR_5, VAR_6);
 if (!VAR_9)
  return VAR_1;

 if (!FUNC_5(VAR_9->collection))
  return VAR_0;

 VAR_10 = FUNC_0(VAR_3, VAR_7);
 if (!FUNC_5(VAR_10))
  return VAR_0;

 VAR_9->collection = VAR_10;
 VAR_8 = FUNC_6(VAR_2, VAR_10->target_addr);

 FUNC_8(VAR_2);

 return FUNC_7(VAR_9->irq, VAR_8);
}
