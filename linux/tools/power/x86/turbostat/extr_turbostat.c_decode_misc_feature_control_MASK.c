
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,unsigned long long,char*,char*,char*,char*) ;
 int FUNC_1 (int,int ,unsigned long long*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(void)
{
 unsigned long long VAR_4;

 if (!VAR_2)
  return;

 if (!FUNC_1(VAR_1, VAR_0, &VAR_4))
  FUNC_0(VAR_3, "cpu%d: MSR_MISC_FEATURE_CONTROL: 0x%08llx (%sL2-Prefetch %sL2-Prefetch-pair %sL1-Prefetch %sL1-IP-Prefetch)\n",
   VAR_1, VAR_4,
   VAR_4 & (0 << 0) ? "No-" : "",
   VAR_4 & (1 << 0) ? "No-" : "",
   VAR_4 & (2 << 0) ? "No-" : "",
   VAR_4 & (3 << 0) ? "No-" : "");
}
