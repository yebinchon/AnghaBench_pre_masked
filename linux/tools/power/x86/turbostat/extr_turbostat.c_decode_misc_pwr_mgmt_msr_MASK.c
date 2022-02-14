
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,unsigned long long,char*,char*,char*) ;
 int FUNC_1 (int,int ,unsigned long long*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_2(void)
{
 unsigned long long VAR_5;

 if (!VAR_2)
  return;

 if (VAR_3)
  return;

 if (!FUNC_1(VAR_1, VAR_0, &VAR_5))
  FUNC_0(VAR_4, "cpu%d: MSR_MISC_PWR_MGMT: 0x%08llx (%sable-EIST_Coordination %sable-EPB %sable-OOB)\n",
   VAR_1, VAR_5,
   VAR_5 & (1 << 0) ? "DIS" : "EN",
   VAR_5 & (1 << 1) ? "EN" : "DIS",
   VAR_5 & (1 << 8) ? "EN" : "DIS");
}
