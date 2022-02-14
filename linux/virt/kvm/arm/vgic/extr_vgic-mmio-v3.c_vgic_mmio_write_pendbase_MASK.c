
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vgic_cpu {int pendbaser; scalar_t__ lpis_enabled; } ;
struct TYPE_2__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gpa_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int,unsigned int,unsigned long) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_0,
         gpa_t VAR_1, unsigned int VAR_2,
         unsigned long VAR_3)
{
 struct vgic_cpu *VAR_4 = &VAR_0->arch.vgic_cpu;
 u64 VAR_5, VAR_6;


 if (VAR_4->lpis_enabled)
  return;

 do {
  VAR_5 = FUNC_0(VAR_4->pendbaser);
  VAR_6 = VAR_5;
  VAR_6 = FUNC_2(VAR_6, VAR_1 & 4, VAR_2, VAR_3);
  VAR_6 = FUNC_3(VAR_6);
 } while (FUNC_1(&VAR_4->pendbaser, VAR_5,
      VAR_6) != VAR_5);
}
