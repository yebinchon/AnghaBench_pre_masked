
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,unsigned long long,char*,char*) ;
 int FUNC_1 (int,int ,unsigned long long*) ;
 int VAR_3 ;

void FUNC_2(void)
{
 unsigned long long VAR_4;

 if (!FUNC_1(VAR_2, VAR_1, &VAR_4))
  FUNC_0(VAR_3, "cpu%d: MSR_IA32_FEATURE_CONTROL: 0x%08llx (%sLocked %s)\n",
   VAR_2, VAR_4,
   VAR_4 & VAR_0 ? "" : "UN-",
   VAR_4 & (1 << 18) ? "SGX" : "");
}
