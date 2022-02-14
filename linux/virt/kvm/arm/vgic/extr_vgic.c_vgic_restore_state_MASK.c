
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int gicv3_cpuif; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static inline void FUNC_3(struct kvm_vcpu *VAR_1)
{
 if (!FUNC_1(&VAR_0.gicv3_cpuif))
  FUNC_2(VAR_1);
 else
  FUNC_0(VAR_1);
}
