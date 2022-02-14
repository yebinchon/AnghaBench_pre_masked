
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vgic_dist {int propbaser; } ;
struct vgic_cpu {scalar_t__ lpis_enabled; } ;
struct TYPE_6__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_2__* kvm; } ;
typedef int gpa_t ;
struct TYPE_4__ {struct vgic_dist vgic; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int,unsigned int,unsigned long) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_0,
         gpa_t VAR_1, unsigned int VAR_2,
         unsigned long VAR_3)
{
 struct vgic_dist *VAR_4 = &VAR_0->kvm->arch.vgic;
 struct vgic_cpu *VAR_5 = &VAR_0->arch.vgic_cpu;
 u64 VAR_6, VAR_7;


 if (VAR_5->lpis_enabled)
  return;

 do {
  VAR_6 = FUNC_0(VAR_4->propbaser);
  VAR_7 = VAR_6;
  VAR_7 = FUNC_2(VAR_7, VAR_1 & 4, VAR_2, VAR_3);
  VAR_7 = FUNC_3(VAR_7);
 } while (FUNC_1(&VAR_4->propbaser, VAR_6,
      VAR_7) != VAR_6);
}
