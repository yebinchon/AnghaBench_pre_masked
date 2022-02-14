
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuflags {int id; int std; int std2; int ext; } ;


 scalar_t__ FUNC_0 (struct cpuflags) ;
 scalar_t__ FUNC_1 (struct cpuflags) ;
 scalar_t__ FUNC_2 (struct cpuflags) ;
 scalar_t__ FUNC_3 (struct cpuflags) ;
 scalar_t__ FUNC_4 (struct cpuflags) ;
 scalar_t__ FUNC_5 (struct cpuflags) ;
 scalar_t__ FUNC_6 (struct cpuflags) ;
 int FUNC_7 (struct cpuflags*) ;
 int FUNC_8 (char*,...) ;

int FUNC_9()
{
 int VAR_0;
 struct cpuflags VAR_1;
 if(!FUNC_7(&VAR_1)){ FUNC_8("CPU won't do cpuid (some old i386 or i486)\n"); return 0; }
 VAR_0 = (VAR_1.id & 0xf00)>>8;
 FUNC_8("family: %i\n", VAR_0);
 FUNC_8("stdcpuflags:  0x%08x\n", VAR_1.std);
 FUNC_8("std2cpuflags: 0x%08x\n", VAR_1.std2);
 FUNC_8("extcpuflags:  0x%08x\n", VAR_1.ext);
 if(FUNC_2(VAR_1))
 {
  FUNC_8("A i586 or better cpu with:");
  if(FUNC_3(VAR_1)) FUNC_8(" mmx");
  if(FUNC_0(VAR_1)) FUNC_8(" 3dnow");
  if(FUNC_1(VAR_1)) FUNC_8(" 3dnowext");
  if(FUNC_4(VAR_1)) FUNC_8(" sse");
  if(FUNC_5(VAR_1)) FUNC_8(" sse2");
  if(FUNC_6(VAR_1)) FUNC_8(" sse3");
  FUNC_8("\n");
 }
 else FUNC_8("I guess you have some i486\n");
 return 0;
}
