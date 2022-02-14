
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ msr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int ,unsigned long long*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2(void)
{
 unsigned long long VAR_7;

 FUNC_1(VAR_5, VAR_3, &VAR_7);
 FUNC_0(VAR_6, "cpu%d: MSR_CONFIG_TDP_NOMINAL: 0x%08llx", VAR_5, VAR_7);
 FUNC_0(VAR_6, " (base_ratio=%d)\n", (unsigned int)VAR_7 & 0xFF);

 FUNC_1(VAR_5, VAR_1, &VAR_7);
 FUNC_0(VAR_6, "cpu%d: MSR_CONFIG_TDP_LEVEL_1: 0x%08llx (", VAR_5, VAR_7);
 if (VAR_7) {
  FUNC_0(VAR_6, "PKG_MIN_PWR_LVL1=%d ", (unsigned int)(VAR_7 >> 48) & 0x7FFF);
  FUNC_0(VAR_6, "PKG_MAX_PWR_LVL1=%d ", (unsigned int)(VAR_7 >> 32) & 0x7FFF);
  FUNC_0(VAR_6, "LVL1_RATIO=%d ", (unsigned int)(VAR_7 >> 16) & 0xFF);
  FUNC_0(VAR_6, "PKG_TDP_LVL1=%d", (unsigned int)(VAR_7) & 0x7FFF);
 }
 FUNC_0(VAR_6, ")\n");

 FUNC_1(VAR_5, VAR_2, &VAR_7);
 FUNC_0(VAR_6, "cpu%d: MSR_CONFIG_TDP_LEVEL_2: 0x%08llx (", VAR_5, VAR_7);
 if (VAR_7) {
  FUNC_0(VAR_6, "PKG_MIN_PWR_LVL2=%d ", (unsigned int)(VAR_7 >> 48) & 0x7FFF);
  FUNC_0(VAR_6, "PKG_MAX_PWR_LVL2=%d ", (unsigned int)(VAR_7 >> 32) & 0x7FFF);
  FUNC_0(VAR_6, "LVL2_RATIO=%d ", (unsigned int)(VAR_7 >> 16) & 0xFF);
  FUNC_0(VAR_6, "PKG_TDP_LVL2=%d", (unsigned int)(VAR_7) & 0x7FFF);
 }
 FUNC_0(VAR_6, ")\n");

 FUNC_1(VAR_5, VAR_0, &VAR_7);
 FUNC_0(VAR_6, "cpu%d: MSR_CONFIG_TDP_CONTROL: 0x%08llx (", VAR_5, VAR_7);
 if ((VAR_7) & 0x3)
  FUNC_0(VAR_6, "TDP_LEVEL=%d ", (unsigned int)(VAR_7) & 0x3);
 FUNC_0(VAR_6, " lock=%d", (unsigned int)(VAR_7 >> 31) & 1);
 FUNC_0(VAR_6, ")\n");

 FUNC_1(VAR_5, VAR_4, &VAR_7);
 FUNC_0(VAR_6, "cpu%d: MSR_TURBO_ACTIVATION_RATIO: 0x%08llx (", VAR_5, VAR_7);
 FUNC_0(VAR_6, "MAX_NON_TURBO_RATIO=%d", (unsigned int)(VAR_7) & 0xFF);
 FUNC_0(VAR_6, " lock=%d", (unsigned int)(VAR_7 >> 31) & 1);
 FUNC_0(VAR_6, ")\n");
}
