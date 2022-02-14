
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

void FUNC_3(void)
{
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_11 = VAR_12 = VAR_13 = VAR_14 = 0;

 FUNC_2(0, &VAR_15, &VAR_12, &VAR_13, &VAR_14);

 if (VAR_12 == 0x756e6547 && VAR_14 == 0x49656e69 && VAR_13 == 0x6c65746e)
  VAR_1 = 1;

 if (VAR_0)
  FUNC_1(VAR_8, "CPUID(0): %.4s%.4s%.4s ",
   (char *)&VAR_12, (char *)&VAR_14, (char *)&VAR_13);

 FUNC_2(1, &VAR_16, &VAR_12, &VAR_13, &VAR_14);
 VAR_17 = (VAR_16 >> 8) & 0xf;
 VAR_18 = (VAR_16 >> 4) & 0xf;
 VAR_19 = VAR_16 & 0xf;
 if (VAR_17 == 6 || VAR_17 == 0xf)
  VAR_18 += ((VAR_16 >> 16) & 0xf) << 4;

 if (VAR_0) {
  FUNC_1(VAR_8, "%d CPUID levels; family:model:stepping 0x%x:%x:%x (%d:%d:%d)\n",
   VAR_15, VAR_17, VAR_18, VAR_19, VAR_17, VAR_18, VAR_19);
  FUNC_1(VAR_8, "CPUID(1): %s %s %s %s %s %s %s %s\n",
   VAR_13 & (1 << 0) ? "SSE3" : "-",
   VAR_13 & (1 << 3) ? "MONITOR" : "-",
   VAR_13 & (1 << 7) ? "EIST" : "-",
   VAR_13 & (1 << 8) ? "TM2" : "-",
   VAR_14 & (1 << 4) ? "TSC" : "-",
   VAR_14 & (1 << 5) ? "MSR" : "-",
   VAR_14 & (1 << 22) ? "ACPI-TM" : "-",
   VAR_14 & (1 << 29) ? "TM" : "-");
 }

 if (!(VAR_14 & (1 << 5)))
  FUNC_0(1, "CPUID: no MSR");


 FUNC_2(0x6, &VAR_11, &VAR_12, &VAR_13, &VAR_14);


 VAR_6 = VAR_11 & (1 << 8);
 VAR_4 = VAR_11 & (1 << 9);
 VAR_5 = VAR_11 & (1 << 10);
 VAR_7 = VAR_11 & (1 << 11);

 if (!VAR_7 && VAR_10)
  FUNC_0(1, "--hwp-use-pkg is not available on this hardware");



 if (VAR_0)
  FUNC_1(VAR_8,
   "CPUID(6): %sTURBO, %sHWP, %sHWPnotify, %sHWPwindow, %sHWPepp, %sHWPpkg, %sEPB\n",
   VAR_9 ? "" : "No-",
   VAR_3 ? "" : "No-",
   VAR_6 ? "" : "No-",
   VAR_4 ? "" : "No-",
   VAR_5 ? "" : "No-",
   VAR_7 ? "" : "No-",
   VAR_2 ? "" : "No-");

 return;
}
