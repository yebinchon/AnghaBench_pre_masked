
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 FUNC_0(VAR_0, "Usage: fork <options> CPU\n\n");
 FUNC_0(VAR_0, "\t\t--fork\tUse fork() (default threads)\n");
 FUNC_0(VAR_0, "\t\t--vfork\tUse vfork() (default threads)\n");
 FUNC_0(VAR_0, "\t\t--exec\tAlso exec() (default no exec)\n");
 FUNC_0(VAR_0, "\t\t--timeout=X\tDuration in seconds to run (default 30)\n");
 FUNC_0(VAR_0, "\t\t--exec-target\tInternal option for exec workload\n");
}
