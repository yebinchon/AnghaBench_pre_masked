
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct vgic_redist_region {int base; int free_index; } ;
struct vgic_cpu {struct vgic_redist_region* rdreg; } ;
struct TYPE_2__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {int vcpu_id; int kvm; TYPE_1__ arch; } ;
typedef int gpa_t ;


 unsigned long FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (int,int,unsigned int) ;
 unsigned long FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static unsigned long FUNC_4(struct kvm_vcpu *VAR_4,
           gpa_t VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7 = FUNC_2(VAR_4);
 struct vgic_cpu *VAR_8 = &VAR_4->arch.vgic_cpu;
 struct vgic_redist_region *VAR_9 = VAR_8->rdreg;
 int VAR_10 = VAR_4->vcpu_id;
 gpa_t VAR_11 = VAR_9->base + VAR_0 +
   (VAR_9->free_index - 1) * VAR_3;
 u64 VAR_12;

 VAR_12 = (u64)(VAR_7 & FUNC_0(23, 0)) << 32;
 VAR_12 |= ((VAR_10 & 0xffff) << 8);

 if (VAR_5 == VAR_11)
  VAR_12 |= VAR_1;
 if (FUNC_3(VAR_4->kvm))
  VAR_12 |= VAR_2;

 return FUNC_1(VAR_12, VAR_5 & 7, VAR_6);
}
