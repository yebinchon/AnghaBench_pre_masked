
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_cpu {int lpis_enabled; } ;
struct TYPE_2__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;
typedef int gpa_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_1,
         gpa_t VAR_2, unsigned int VAR_3,
         unsigned long VAR_4)
{
 struct vgic_cpu *VAR_5 = &VAR_1->arch.vgic_cpu;
 bool VAR_6 = VAR_5->lpis_enabled;

 if (!FUNC_2(VAR_1->kvm))
  return;

 VAR_5->lpis_enabled = VAR_4 & VAR_0;

 if (VAR_6 && !VAR_5->lpis_enabled) {
  FUNC_1(VAR_1);
  FUNC_3(VAR_1->kvm);
 }

 if (!VAR_6 && VAR_5->lpis_enabled)
  FUNC_0(VAR_1);
}
