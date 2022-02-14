
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int gpa_t ;




__attribute__((used)) static unsigned long FUNC_0(struct kvm_vcpu *VAR_0,
           gpa_t VAR_1, unsigned int VAR_2)
{
 switch (VAR_1 & 0xffff) {
 case 128:

  return 0x3b;
 }

 return 0;
}
