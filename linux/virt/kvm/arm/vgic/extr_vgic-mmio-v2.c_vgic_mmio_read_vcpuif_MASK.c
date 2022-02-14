
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct vgic_vmcr {unsigned long grpen0; unsigned long grpen1; unsigned long ackctl; unsigned long fiqen; unsigned long cbpr; unsigned long eoim; unsigned long pmr; unsigned long bpr; unsigned long abpr; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gpa_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;



 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct kvm_vcpu*,struct vgic_vmcr*) ;

__attribute__((used)) static unsigned long FUNC_1(struct kvm_vcpu *VAR_11,
        gpa_t VAR_12, unsigned int VAR_13)
{
 struct vgic_vmcr VAR_14;
 u32 VAR_15;

 FUNC_0(VAR_11, &VAR_14);

 switch (VAR_12 & 0xff) {
 case 130:
  VAR_15 = VAR_14.grpen0 << VAR_6;
  VAR_15 |= VAR_14.grpen1 << VAR_7;
  VAR_15 |= VAR_14.ackctl << VAR_3;
  VAR_15 |= VAR_14.fiqen << VAR_8;
  VAR_15 |= VAR_14.cbpr << VAR_4;
  VAR_15 |= VAR_14.eoim << VAR_5;

  break;
 case 128:







  VAR_15 = (VAR_14.pmr & VAR_1) >>
   VAR_2;
  break;
 case 131:
  VAR_15 = VAR_14.bpr;
  break;
 case 132:
  VAR_15 = VAR_14.abpr;
  break;
 case 129:
  VAR_15 = ((VAR_10 << 20) |
         (VAR_0 << 16) |
         VAR_9);
  break;
 default:
  return 0;
 }

 return VAR_15;
}
