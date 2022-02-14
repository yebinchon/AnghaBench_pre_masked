
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_3, unsigned VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3);





 if (VAR_4 & VAR_1)
  return VAR_5 != VAR_2;




 return VAR_5 == VAR_0;
}
