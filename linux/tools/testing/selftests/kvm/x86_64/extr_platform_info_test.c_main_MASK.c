
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kvm_vm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vm*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct kvm_vm*) ;
 int FUNC_6 (struct kvm_vm*) ;
 int FUNC_7 (struct kvm_vm*,int ,int ) ;
 int FUNC_8 (struct kvm_vm*,int ,int ,int) ;
 struct kvm_vm* FUNC_9 (int ,int ,int ) ;

int FUNC_10(int VAR_8, char *VAR_9[])
{
 struct kvm_vm *VAR_10;
 int VAR_11;
 uint64_t VAR_12;


 FUNC_4(VAR_7, ((void*)0));

 VAR_11 = FUNC_2(VAR_1);
 if (!VAR_11) {
  FUNC_1(VAR_6,
   "KVM_CAP_MSR_PLATFORM_INFO not supported, skip test\n");
  FUNC_0(VAR_0);
 }

 VAR_10 = FUNC_9(VAR_4, 0, VAR_5);

 VAR_12 = FUNC_7(VAR_10, VAR_4, VAR_2);
 FUNC_8(VAR_10, VAR_4, VAR_2,
  VAR_12 | VAR_3);
 FUNC_6(VAR_10);
 FUNC_5(VAR_10);
 FUNC_8(VAR_10, VAR_4, VAR_2, VAR_12);

 FUNC_3(VAR_10);

 return 0;
}
