
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_2;



 VAR_2 = FUNC_2("/proc/sys/kernel/unprivileged_bpf_disabled");
 if (VAR_0) {
  FUNC_0(VAR_1, "unprivileged_bpf_disabled", VAR_2);
 } else {
  switch (VAR_2) {
  case 0:
   FUNC_1("bpf() syscall for unprivileged users is enabled\n");
   break;
  case 1:
   FUNC_1("bpf() syscall restricted to privileged users\n");
   break;
  case -1:
   FUNC_1("Unable to retrieve required privileges for bpf() syscall\n");
   break;
  default:
   FUNC_1("bpf() syscall restriction has unknown value %d\n", VAR_2);
  }
 }
}
