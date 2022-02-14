
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_vmcr {int grpen0; int grpen1; int ackctl; int fiqen; int cbpr; int eoim; unsigned long pmr; unsigned long bpr; unsigned long abpr; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gpa_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;



 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;

 int FUNC_0 (struct kvm_vcpu*,struct vgic_vmcr*) ;
 int FUNC_1 (struct kvm_vcpu*,struct vgic_vmcr*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_8,
       gpa_t VAR_9, unsigned int VAR_10,
       unsigned long VAR_11)
{
 struct vgic_vmcr VAR_12;

 FUNC_0(VAR_8, &VAR_12);

 switch (VAR_9 & 0xff) {
 case 129:
  VAR_12.grpen0 = !!(VAR_11 & VAR_5);
  VAR_12.grpen1 = !!(VAR_11 & VAR_6);
  VAR_12.ackctl = !!(VAR_11 & VAR_2);
  VAR_12.fiqen = !!(VAR_11 & VAR_7);
  VAR_12.cbpr = !!(VAR_11 & VAR_3);
  VAR_12.eoim = !!(VAR_11 & VAR_4);

  break;
 case 128:







  VAR_12.pmr = (VAR_11 << VAR_1) &
   VAR_0;
  break;
 case 130:
  VAR_12.bpr = VAR_11;
  break;
 case 131:
  VAR_12.abpr = VAR_11;
  break;
 }

 FUNC_1(VAR_8, &VAR_12);
}
