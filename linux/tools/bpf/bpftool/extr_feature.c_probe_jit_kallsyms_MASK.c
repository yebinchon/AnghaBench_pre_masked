
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



 VAR_2 = FUNC_2("/proc/sys/net/core/bpf_jit_kallsyms");
 if (VAR_0) {
  FUNC_0(VAR_1, "bpf_jit_kallsyms", VAR_2);
 } else {
  switch (VAR_2) {
  case 0:
   FUNC_1("JIT compiler kallsyms exports are disabled\n");
   break;
  case 1:
   FUNC_1("JIT compiler kallsyms exports are enabled for root\n");
   break;
  case -1:
   FUNC_1("Unable to retrieve JIT kallsyms export status\n");
   break;
  default:
   FUNC_1("JIT kallsyms exports status has unknown value %d\n", VAR_2);
  }
 }
}
