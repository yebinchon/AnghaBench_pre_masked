
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,int,unsigned long long,...) ;
 int FUNC_1 (int,int ,unsigned long long*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(void)
{
 unsigned long long VAR_5;
 unsigned int VAR_6;

 FUNC_1(VAR_2, VAR_1, &VAR_5);

 FUNC_0(VAR_4, "cpu%d: MSR_PLATFORM_INFO: 0x%08llx\n", VAR_2, VAR_5);

 VAR_6 = (VAR_5 >> 40) & 0xFF;
 FUNC_0(VAR_4, "%d * %.1llu = %.1u MHz max efficiency frequency\n",
  VAR_6, VAR_3, VAR_6 * VAR_3);

 VAR_6 = (VAR_5 >> 8) & 0xFF;
 FUNC_0(VAR_4, "%d * %.1llu = %.1u MHz base frequency\n",
  VAR_6, VAR_3, VAR_6 * VAR_3);

 FUNC_1(VAR_2, VAR_0, &VAR_5);
 FUNC_0(VAR_4, "cpu%d: MSR_IA32_POWER_CTL: 0x%08llx (C1E auto-promotion: %sabled)\n",
  VAR_2, VAR_5, VAR_5 & 0x2 ? "EN" : "DIS");

 return;
}
