
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_vaddr_t ;
struct ucall {char const* cmd; scalar_t__* args; } ;
struct TYPE_2__ {scalar_t__ port; } ;
struct kvm_run {scalar_t__ exit_reason; TYPE_1__ io; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,char const*,...) ;

 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,struct ucall*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 struct kvm_run* FUNC_9 (int ,int ) ;
 int VAR_4 ;
 int FUNC_10 (int ,int ,void*) ;

int FUNC_11(int VAR_5, char *VAR_6[])
{
 vm_vaddr_t VAR_7;

 FUNC_4();

 VAR_4 = FUNC_10(VAR_2, 0, (void *) VAR_3);
 FUNC_8(VAR_4, VAR_2, FUNC_3());


 FUNC_5(VAR_4, &VAR_7);
 FUNC_6(VAR_4, VAR_2, 1, VAR_7);

 for (;;) {
  volatile struct kvm_run *VAR_8 = FUNC_9(VAR_4, VAR_2);
  struct ucall VAR_9;

  FUNC_7(VAR_4, VAR_2);
  FUNC_0(VAR_8->exit_reason == VAR_0,
       "Got exit_reason other than KVM_EXIT_IO: %u (%s)\n",
       VAR_8->exit_reason,
       FUNC_1(VAR_8->exit_reason));

  if (VAR_8->io.port == VAR_1)
   break;

  switch (FUNC_2(VAR_4, VAR_2, &VAR_9)) {
  case 128:
   FUNC_0(0, "%s", (const char *)VAR_9.args[0]);

  default:
   FUNC_0(0, "Unknown ucall 0x%x.", VAR_9.cmd);
  }
 }
}
