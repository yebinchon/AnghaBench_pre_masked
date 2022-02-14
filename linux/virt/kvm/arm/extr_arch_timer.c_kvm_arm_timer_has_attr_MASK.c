
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_device_attr {int attr; } ;


 int VAR_0 ;



int FUNC_0(struct kvm_vcpu *VAR_1, struct kvm_device_attr *VAR_2)
{
 switch (VAR_2->attr) {
 case 128:
 case 129:
  return 0;
 }

 return -VAR_0;
}
