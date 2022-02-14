
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(char *VAR_2)
{
 FUNC_1("%s: Sigfuzzer for powerpc\n", VAR_2);
 FUNC_1("Usage:\n");
 FUNC_1("\t-b\t Mess with TM before raising a SIGUSR1 signal\n");
 FUNC_1("\t-a\t Mess with TM after raising a SIGUSR1 signal\n");
 FUNC_1("\t-m\t Mess with MSR[TS] bits at mcontext\n");
 FUNC_1("\t-x\t Mess with everything above\n");
 FUNC_1("\t-f\t Run forever (Press ^C to Quit)\n");
 FUNC_1("\t-i\t Amount of interactions.	(Default = %d)\n", VAR_0);
 FUNC_1("\t-t\t Amount of threads.	(Default = %d)\n", VAR_1);
 FUNC_0(-1);
}
