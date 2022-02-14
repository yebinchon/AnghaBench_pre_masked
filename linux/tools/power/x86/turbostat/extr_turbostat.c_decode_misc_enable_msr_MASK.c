
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,unsigned long long,char*,char*,char*,char*,char*) ;
 int VAR_7 ;
 int FUNC_1 (int,int ,unsigned long long*) ;
 int VAR_8 ;

void FUNC_2(void)
{
 unsigned long long VAR_9;

 if (!VAR_7)
  return;

 if (!FUNC_1(VAR_6, VAR_0, &VAR_9))
  FUNC_0(VAR_8, "cpu%d: MSR_IA32_MISC_ENABLE: 0x%08llx (%sTCC %sEIST %sMWAIT %sPREFETCH %sTURBO)\n",
   VAR_6, VAR_9,
   VAR_9 & VAR_4 ? "" : "No-",
   VAR_9 & VAR_1 ? "" : "No-",
   VAR_9 & VAR_2 ? "" : "No-",
   VAR_9 & VAR_3 ? "No-" : "",
   VAR_9 & VAR_5 ? "No-" : "");
}
