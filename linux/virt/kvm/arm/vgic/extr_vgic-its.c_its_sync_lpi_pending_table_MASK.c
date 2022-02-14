
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int u32 ;
struct vgic_irq {unsigned int pending_latch; int irq_lock; } ;
struct TYPE_3__ {int pendbaser; } ;
struct TYPE_4__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,scalar_t__,unsigned int*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,struct kvm_vcpu*,int**) ;
 struct vgic_irq* FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,struct vgic_irq*) ;
 int FUNC_7 (int ,struct vgic_irq*,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_1)
{
 gpa_t VAR_2 = FUNC_0(VAR_1->arch.vgic_cpu.pendbaser);
 struct vgic_irq *VAR_3;
 int VAR_4 = -1;
 int VAR_5 = 0;
 u32 *VAR_6;
 int VAR_7, VAR_8;
 unsigned long VAR_9;
 u8 VAR_10;

 VAR_7 = FUNC_4(VAR_1->kvm, VAR_1, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  int VAR_11, VAR_12;

  VAR_11 = VAR_6[VAR_8] / VAR_0;
  VAR_12 = VAR_6[VAR_8] % VAR_0;





  if (VAR_11 != VAR_4) {
   VAR_5 = FUNC_2(VAR_1->kvm,
        VAR_2 + VAR_11,
        &VAR_10, 1);
   if (VAR_5) {
    FUNC_1(VAR_6);
    return VAR_5;
   }
   VAR_4 = VAR_11;
  }

  VAR_3 = FUNC_5(VAR_1->kvm, ((void*)0), VAR_6[VAR_8]);
  FUNC_3(&VAR_3->irq_lock, VAR_9);
  VAR_3->pending_latch = VAR_10 & (1U << VAR_12);
  FUNC_7(VAR_1->kvm, VAR_3, VAR_9);
  FUNC_6(VAR_1->kvm, VAR_3);
 }

 FUNC_1(VAR_6);

 return VAR_5;
}
