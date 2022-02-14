
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vgic_v3_cpu_if {unsigned long* vgic_ap1r; } ;
struct TYPE_5__ {unsigned long vgic_apr; } ;
struct TYPE_6__ {struct vgic_v3_cpu_if vgic_v3; TYPE_1__ vgic_v2; } ;
struct TYPE_7__ {TYPE_2__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
typedef int gpa_t ;
struct TYPE_8__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static unsigned long FUNC_2(struct kvm_vcpu *VAR_2,
     gpa_t VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 VAR_5 = (VAR_3 >> 2) & 0x3;

 if (VAR_1.type == VAR_0) {

  if (VAR_5 != 0)
   return 0;
  return VAR_2->arch.vgic_cpu.vgic_v2.vgic_apr;
 } else {
  struct vgic_v3_cpu_if *VAR_6 = &VAR_2->arch.vgic_cpu.vgic_v3;

  if (VAR_5 > FUNC_1(VAR_2))
   return 0;

  VAR_5 = FUNC_0(VAR_5, 4);


  return VAR_6->vgic_ap1r[VAR_5];
 }
}
