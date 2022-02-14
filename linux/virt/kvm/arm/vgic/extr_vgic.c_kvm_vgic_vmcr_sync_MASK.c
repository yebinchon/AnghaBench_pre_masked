
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int kvm; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_2)
{
 if (FUNC_1(!FUNC_0(VAR_2->kvm)))
  return;

 if (VAR_1.type == VAR_0)
  FUNC_2(VAR_2);
 else
  FUNC_3(VAR_2);
}
