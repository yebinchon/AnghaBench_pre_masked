
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct vgic_its {int dummy; } ;
struct vgic_irq {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm {int online_vcpus; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,int,int) ;
 int FUNC_3 (scalar_t__*) ;
 struct kvm_vcpu* FUNC_4 (struct kvm*,scalar_t__) ;
 int FUNC_5 (struct vgic_irq*,struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm*,struct kvm_vcpu*,scalar_t__**) ;
 struct vgic_irq* FUNC_7 (struct kvm*,int *,scalar_t__) ;
 int FUNC_8 (struct kvm*) ;
 int FUNC_9 (struct kvm*,struct vgic_irq*) ;

__attribute__((used)) static int FUNC_10(struct kvm *VAR_1, struct vgic_its *VAR_2,
          u64 *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5 = FUNC_2(VAR_3, 3, 16, 32);
 struct kvm_vcpu *VAR_6, *VAR_7;
 struct vgic_irq *VAR_8;
 u32 *VAR_9;
 int VAR_10, VAR_11;

 if (VAR_4 >= FUNC_0(&VAR_1->online_vcpus) ||
     VAR_5 >= FUNC_0(&VAR_1->online_vcpus))
  return VAR_0;

 if (VAR_4 == VAR_5)
  return 0;

 VAR_6 = FUNC_4(VAR_1, VAR_4);
 VAR_7 = FUNC_4(VAR_1, VAR_5);

 VAR_10 = FUNC_6(VAR_1, VAR_6, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_8 = FUNC_7(VAR_1, ((void*)0), VAR_9[VAR_11]);

  FUNC_5(VAR_8, VAR_7);

  FUNC_9(VAR_1, VAR_8);
 }

 FUNC_8(VAR_1);

 FUNC_3(VAR_9);
 return 0;
}
