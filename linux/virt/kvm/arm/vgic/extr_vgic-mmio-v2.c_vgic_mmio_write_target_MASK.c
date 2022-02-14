
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u8 ;
typedef scalar_t__ u32 ;
struct vgic_irq {unsigned long targets; int irq_lock; int target_vcpu; } ;
struct kvm_vcpu {TYPE_1__* kvm; } ;
typedef int gpa_t ;
struct TYPE_4__ {int online_vcpus; } ;


 unsigned long FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (long) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct vgic_irq* FUNC_7 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,struct vgic_irq*) ;

__attribute__((used)) static void FUNC_9(struct kvm_vcpu *VAR_1,
       gpa_t VAR_2, unsigned int VAR_3,
       unsigned long VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_2, 8);
 u8 VAR_6 = FUNC_0(FUNC_3(&VAR_1->kvm->online_vcpus) - 1, 0);
 int VAR_7;
 unsigned long VAR_8;


 if (VAR_5 < VAR_0)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct vgic_irq *VAR_9 = FUNC_7(VAR_1->kvm, ((void*)0), VAR_5 + VAR_7);
  int VAR_10;

  FUNC_5(&VAR_9->irq_lock, VAR_8);

  VAR_9->targets = (VAR_4 >> (VAR_7 * 8)) & VAR_6;
  VAR_10 = VAR_9->targets ? FUNC_2(VAR_9->targets) : 0;
  VAR_9->target_vcpu = FUNC_4(VAR_1->kvm, VAR_10);

  FUNC_6(&VAR_9->irq_lock, VAR_8);
  FUNC_8(VAR_1->kvm, VAR_9);
 }
}
