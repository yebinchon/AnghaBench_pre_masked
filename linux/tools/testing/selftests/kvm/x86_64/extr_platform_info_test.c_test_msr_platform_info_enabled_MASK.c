
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucall {scalar_t__ cmd; int* args; } ;
struct kvm_vm {int dummy; } ;
struct kvm_run {scalar_t__ exit_reason; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct kvm_vm*,int ,struct ucall*) ;
 int FUNC_3 (struct kvm_vm*,int) ;
 int VAR_4 ;
 int FUNC_4 (struct kvm_vm*,int ) ;
 struct kvm_run* FUNC_5 (struct kvm_vm*,int ) ;

__attribute__((used)) static void FUNC_6(struct kvm_vm *VAR_5)
{
 struct kvm_run *VAR_6 = FUNC_5(VAR_5, VAR_3);
 struct ucall VAR_7;

 FUNC_3(VAR_5, 1);
 FUNC_4(VAR_5, VAR_3);
 FUNC_0(VAR_6->exit_reason == VAR_0,
   "Exit_reason other than KVM_EXIT_IO: %u (%s),\n",
   VAR_6->exit_reason,
   FUNC_1(VAR_6->exit_reason));
 FUNC_2(VAR_5, VAR_3, &VAR_7);
 FUNC_0(VAR_7.cmd == VAR_2,
   "Received ucall other than UCALL_SYNC: %u\n",
   VAR_4);
 FUNC_0((VAR_7.args[1] & VAR_1) ==
  VAR_1,
  "Expected MSR_PLATFORM_INFO to have max turbo ratio mask: %i.",
  VAR_1);
}
