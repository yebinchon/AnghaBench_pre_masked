
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_vaddr_t ;
struct ucall {char const* cmd; scalar_t__* args; } ;
struct kvm_run {scalar_t__ exit_reason; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char const*,...) ;



 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,struct ucall*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 struct kvm_run* FUNC_11 (int ,int ) ;
 int VAR_3 ;
 int FUNC_12 (int ,int ,void*) ;

int FUNC_13(int VAR_4, char *VAR_5[])
{
 vm_vaddr_t VAR_6;

 FUNC_5();

 VAR_3 = FUNC_12(VAR_1, 0, (void *) VAR_2);
 FUNC_10(VAR_3, VAR_1, FUNC_3());


 FUNC_7(VAR_3, &VAR_6);
 FUNC_8(VAR_3, VAR_1, 1, VAR_6);

 for (;;) {
  volatile struct kvm_run *VAR_7 = FUNC_11(VAR_3, VAR_1);
  struct ucall VAR_8;

  FUNC_9(VAR_3, VAR_1);
  FUNC_0(VAR_7->exit_reason == VAR_0,
       "Got exit_reason other than KVM_EXIT_IO: %u (%s)\n",
       VAR_7->exit_reason,
       FUNC_1(VAR_7->exit_reason));

  switch (FUNC_2(VAR_3, VAR_1, &VAR_8)) {
  case 130:
   FUNC_0(0, "%s", (const char *)VAR_8.args[0]);

  case 128:
   FUNC_6(VAR_8.args[1]);
   break;
  case 129:
   goto done;
  default:
   FUNC_0(0, "Unknown ucall 0x%x.", VAR_8.cmd);
  }
 }

 FUNC_4(VAR_3);
done:
 return 0;
}
