
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int mutex; } ;
struct kvm {int dummy; } ;


 struct kvm_vcpu* FUNC_0 (struct kvm*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct kvm *VAR_0, int VAR_1)
{
 struct kvm_vcpu *VAR_2;

 for (; VAR_1 >= 0; VAR_1--) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  FUNC_1(&VAR_2->mutex);
 }
}
