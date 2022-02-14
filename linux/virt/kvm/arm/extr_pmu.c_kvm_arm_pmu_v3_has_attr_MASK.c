
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int features; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_device_attr {int attr; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct kvm_vcpu *VAR_2, struct kvm_device_attr *VAR_3)
{
 switch (VAR_3->attr) {
 case 128:
 case 129:
  if (FUNC_0() &&
      FUNC_1(VAR_1, VAR_2->arch.features))
   return 0;
 }

 return -VAR_0;
}
