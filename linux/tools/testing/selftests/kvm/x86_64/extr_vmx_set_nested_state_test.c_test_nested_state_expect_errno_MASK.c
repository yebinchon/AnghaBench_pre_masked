
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int dummy; } ;
struct kvm_nested_state {int dummy; } ;


 int FUNC_0 (int,char*,int ,int,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct kvm_vm*,int ,struct kvm_nested_state*,int) ;

void FUNC_3(struct kvm_vm *VAR_2,
        struct kvm_nested_state *VAR_3,
        int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_0, VAR_3, 1);
 FUNC_0(VAR_5 == -1 && VAR_1 == VAR_4,
  "Expected %s (%d) from vcpu_nested_state_set but got rv: %i errno: %s (%d)",
  FUNC_1(VAR_4), VAR_4, VAR_5, FUNC_1(VAR_1),
  VAR_1);
}
