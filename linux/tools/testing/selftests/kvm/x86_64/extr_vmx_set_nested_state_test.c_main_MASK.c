
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int dummy; } ;
struct kvm_nested_state {int flags; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vm*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct kvm_nested_state*) ;
 int FUNC_6 (struct kvm_vm*,int *) ;
 int FUNC_7 (struct kvm_vm*,struct kvm_nested_state*) ;
 int FUNC_8 (struct kvm_vm*) ;
 struct kvm_vm* FUNC_9 (int ,int ,int ) ;

int FUNC_10(int VAR_6, char *VAR_7[])
{
 struct kvm_vm *VAR_8;
 struct kvm_nested_state VAR_9;

 VAR_5 = FUNC_1(VAR_1);

 if (!FUNC_1(VAR_2)) {
  FUNC_4("KVM_CAP_NESTED_STATE not available, skipping test\n");
  FUNC_0(VAR_0);
 }





 FUNC_3();

 VAR_8 = FUNC_9(VAR_4, 0, 0);


 FUNC_6(VAR_8, ((void*)0));


 FUNC_5(&VAR_9);
 VAR_9.size = 0;
 FUNC_7(VAR_8, &VAR_9);
 FUNC_5(&VAR_9);
 VAR_9.flags = 0xf;
 FUNC_7(VAR_8, &VAR_9);





 FUNC_5(&VAR_9);
 VAR_9.flags = VAR_3;
 FUNC_7(VAR_8, &VAR_9);

 FUNC_8(VAR_8);

 FUNC_2(VAR_8);
 return 0;
}
