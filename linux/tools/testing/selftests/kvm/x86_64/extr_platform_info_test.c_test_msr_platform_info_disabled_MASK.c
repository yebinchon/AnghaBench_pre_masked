
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int dummy; } ;
struct kvm_run {scalar_t__ exit_reason; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct kvm_vm*,int) ;
 int FUNC_3 (struct kvm_vm*,int ) ;
 struct kvm_run* FUNC_4 (struct kvm_vm*,int ) ;

__attribute__((used)) static void FUNC_5(struct kvm_vm *VAR_2)
{
 struct kvm_run *VAR_3 = FUNC_4(VAR_2, VAR_1);

 FUNC_2(VAR_2, 0);
 FUNC_3(VAR_2, VAR_1);
 FUNC_0(VAR_3->exit_reason == VAR_0,
   "Exit_reason other than KVM_EXIT_SHUTDOWN: %u (%s)\n",
   VAR_3->exit_reason,
   FUNC_1(VAR_3->exit_reason));
}
