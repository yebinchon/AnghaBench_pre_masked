
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int dummy; } ;
struct kvm_enable_cap {int* args; scalar_t__ flags; int cap; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vm*,struct kvm_enable_cap*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vm *VAR_1, bool VAR_2)
{
 struct kvm_enable_cap VAR_3 = {};

 VAR_3.cap = VAR_0;
 VAR_3.flags = 0;
 VAR_3.args[0] = (int)VAR_2;
 FUNC_0(VAR_1, &VAR_3);
}
