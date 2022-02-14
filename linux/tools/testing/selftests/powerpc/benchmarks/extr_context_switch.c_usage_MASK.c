
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 FUNC_0(VAR_0, "Usage: context_switch2 <options> CPU1 CPU2\n\n");
 FUNC_0(VAR_0, "\t\t--test=X\tpipe, futex or yield (default)\n");
 FUNC_0(VAR_0, "\t\t--process\tUse processes (default threads)\n");
 FUNC_0(VAR_0, "\t\t--timeout=X\tDuration in seconds to run (default 30)\n");
 FUNC_0(VAR_0, "\t\t--vdso\t\ttouch VDSO\n");
 FUNC_0(VAR_0, "\t\t--no-fp\t\tDon't touch FP\n");



 FUNC_0(VAR_0, "\t\t--no-vector\tDon't touch vector\n");
}
