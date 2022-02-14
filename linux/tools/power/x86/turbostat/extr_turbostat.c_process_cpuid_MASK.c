
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;




 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int FUNC_2 (int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (int,int ,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (char*,int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 () ;
 int VAR_35 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 void* VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 void* VAR_43 ;
 int FUNC_12 (unsigned int,unsigned int) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int,char*) ;
 int FUNC_16 (int ,char*,...) ;
 int VAR_44 ;
 int FUNC_17 (unsigned int,unsigned int) ;
 int VAR_45 ;
 scalar_t__ FUNC_18 (unsigned int,unsigned int) ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 unsigned int VAR_52 ;
 scalar_t__ FUNC_19 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_20 (unsigned int,unsigned int) ;
 void* FUNC_21 (unsigned int,unsigned int) ;
 int VAR_53 ;
 unsigned int FUNC_22 (unsigned int) ;
 scalar_t__ FUNC_23 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_24 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_25 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_26 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_27 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_28 (unsigned int,unsigned int) ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_29 (unsigned int,unsigned int) ;
 scalar_t__ VAR_57 ;
 scalar_t__ FUNC_30 (unsigned int,unsigned int) ;
 int VAR_58 ;
 int FUNC_31 (unsigned int,unsigned int) ;
 int VAR_59 ;
 int VAR_60 ;

void FUNC_32()
{
 unsigned int VAR_61, VAR_62, VAR_63, VAR_64;
 unsigned int VAR_65, VAR_66, VAR_67, VAR_68, VAR_69, VAR_70;
 unsigned int VAR_71;

 VAR_61 = VAR_62 = VAR_63 = VAR_64 = 0;

 FUNC_2(0, VAR_55, VAR_62, VAR_63, VAR_64);

 if (VAR_62 == 0x756e6547 && VAR_63 == 0x6c65746e && VAR_64 == 0x49656e69)
  VAR_44 = 1;
 else if (VAR_62 == 0x68747541 && VAR_63 == 0x444d4163 && VAR_64 == 0x69746e65)
  VAR_34 = 1;
 else if (VAR_62 == 0x6f677948 && VAR_63 == 0x656e6975 && VAR_64 == 0x6e65476e)
  VAR_53 = 1;

 if (!VAR_58)
  FUNC_16(VAR_56, "CPUID(0): %.4s%.4s%.4s ",
   (char *)&VAR_62, (char *)&VAR_64, (char *)&VAR_63);

 FUNC_2(1, VAR_65, VAR_62, VAR_63, VAR_64);
 VAR_66 = (VAR_65 >> 8) & 0xf;
 VAR_67 = (VAR_65 >> 4) & 0xf;
 VAR_68 = VAR_65 & 0xf;
 if (VAR_66 == 0xf)
  VAR_66 += (VAR_65 >> 20) & 0xff;
 if (VAR_66 >= 6)
  VAR_67 += ((VAR_65 >> 16) & 0xf) << 4;
 VAR_69 = VAR_63;
 VAR_70 = VAR_64;






 VAR_62 = VAR_63 = VAR_64 = 0;
 FUNC_2(0x80000000, VAR_54, VAR_62, VAR_63, VAR_64);

 if (!VAR_58) {
  FUNC_16(VAR_56, "0x%x CPUID levels; 0x%x xlevels; family:model:stepping 0x%x:%x:%x (%d:%d:%d)\n",
   VAR_55, VAR_54, VAR_66, VAR_67, VAR_68, VAR_66, VAR_67, VAR_68);
  FUNC_16(VAR_56, "CPUID(1): %s %s %s %s %s %s %s %s %s %s\n",
   VAR_69 & (1 << 0) ? "SSE3" : "-",
   VAR_69 & (1 << 3) ? "MONITOR" : "-",
   VAR_69 & (1 << 6) ? "SMX" : "-",
   VAR_69 & (1 << 7) ? "EIST" : "-",
   VAR_69 & (1 << 8) ? "TM2" : "-",
   VAR_70 & (1 << 4) ? "TSC" : "-",
   VAR_70 & (1 << 5) ? "MSR" : "-",
   VAR_70 & (1 << 22) ? "ACPI-TM" : "-",
   VAR_70 & (1 << 28) ? "HT" : "-",
   VAR_70 & (1 << 29) ? "TM" : "-");
 }
 if (VAR_44)
  VAR_67 = FUNC_22(VAR_67);

 if (!(VAR_70 & (1 << 5)))
  FUNC_15(1, "CPUID: no MSR");

 if (VAR_54 >= 0x80000007) {





  FUNC_2(0x80000007, VAR_61, VAR_62, VAR_63, VAR_64);
  VAR_52 = VAR_64 & (1 << 8);
 }






 FUNC_2(0x6, VAR_61, VAR_62, VAR_63, VAR_64);
 VAR_45 = VAR_63 & (1 << 0);
 if (VAR_45) {
  FUNC_1(VAR_1);
  FUNC_1(VAR_2);
  FUNC_1(VAR_3);
 }
 VAR_36 = VAR_61 & (1 << 0);
 if (VAR_36)
  FUNC_1(VAR_10);
 VAR_71 = VAR_61 & (1 << 1);
 VAR_41 = VAR_61 & (1 << 6);
 if (VAR_41)
  FUNC_1(VAR_16);
 VAR_47 = VAR_61 & (1 << 7);
 VAR_50 = VAR_61 & (1 << 8);
 VAR_48 = VAR_61 & (1 << 9);
 VAR_49 = VAR_61 & (1 << 10);
 VAR_51 = VAR_61 & (1 << 11);
 VAR_46 = VAR_63 & (1 << 3);

 if (!VAR_58)
  FUNC_16(VAR_56, "CPUID(6): %sAPERF, %sTURBO, %sDTS, %sPTM, %sHWP, "
   "%sHWPnotify, %sHWPwindow, %sHWPepp, %sHWPpkg, %sEPB\n",
   VAR_45 ? "" : "No-",
   VAR_71 ? "" : "No-",
   VAR_36 ? "" : "No-",
   VAR_41 ? "" : "No-",
   VAR_47 ? "" : "No-",
   VAR_50 ? "" : "No-",
   VAR_48 ? "" : "No-",
   VAR_49 ? "" : "No-",
   VAR_51 ? "" : "No-",
   VAR_46 ? "" : "No-");

 if (!VAR_58)
  FUNC_9();


 if (VAR_55 >= 0x7 && !VAR_58) {
  int VAR_72;

  VAR_63 = 0;

  FUNC_3(0x7, 0, VAR_61, VAR_62, VAR_63, VAR_64);

  VAR_72 = VAR_62 & (1 << 2);
  FUNC_16(VAR_56, "CPUID(7): %sSGX\n", VAR_72 ? "" : "No-");

  if (VAR_72)
   FUNC_8();
 }

 if (VAR_55 >= 0x15) {
  unsigned int VAR_73;
  unsigned int VAR_74;




  VAR_73 = VAR_74 = VAR_35 = VAR_64 = 0;
  FUNC_2(0x15, VAR_73, VAR_74, VAR_35, VAR_64);

  if (VAR_74 != 0) {

   if (!VAR_58 && (VAR_62 != 0))
    FUNC_16(VAR_56, "CPUID(0x15): eax_crystal: %d ebx_tsc: %d ecx_crystal_hz: %d\n",
     VAR_73, VAR_74, VAR_35);

   if (VAR_35 == 0)
    switch(VAR_67) {
    case 128:
     VAR_35 = 24000000;
     break;
    case 130:
     VAR_35 = 25000000;
     break;
    case 131:
    case 129:
     VAR_35 = 19200000;
     break;
    default:
     VAR_35 = 0;
   }

   if (VAR_35) {
    VAR_59 = (unsigned long long) VAR_35 * VAR_74 / VAR_73;
    if (!VAR_58)
     FUNC_16(VAR_56, "TSC: %d MHz (%d Hz * %d / %d / 1000000)\n",
      VAR_59 / 1000000, VAR_35, VAR_74, VAR_73);
   }
  }
 }
 if (VAR_55 >= 0x16) {
  unsigned int VAR_75, VAR_76, VAR_77, VAR_78;




  VAR_75 = VAR_76 = VAR_77 = VAR_78 = 0;

  FUNC_2(0x16, VAR_75, VAR_76, VAR_77, VAR_78);
  if (!VAR_58)
   FUNC_16(VAR_56, "CPUID(0x16): base_mhz: %d max_mhz: %d bus_mhz: %d\n",
    VAR_75, VAR_76, VAR_77);
 }

 if (VAR_45)
  VAR_33 = FUNC_17(VAR_66, VAR_67);

 FUNC_1(VAR_14);
 FUNC_1(VAR_26);

 if (FUNC_30(VAR_66, VAR_67)) {
  VAR_40 = 1;
  FUNC_1(VAR_6);
  FUNC_1(VAR_7);
  FUNC_1(VAR_8);
  FUNC_1(VAR_24);
 }
 VAR_43 = FUNC_21(VAR_66, VAR_67);

 if (VAR_43)
  FUNC_1(VAR_9);

 VAR_38 = FUNC_21(VAR_66, VAR_67);
 if (VAR_43 && (VAR_57 >= VAR_28))
  FUNC_1(VAR_18);
 if (VAR_57 >= VAR_29)
  FUNC_1(VAR_19);
 if (VAR_57 >= VAR_30)
  FUNC_1(VAR_20);
 if (VAR_43 && (VAR_57 >= VAR_31))
  FUNC_1(VAR_21);
 if (FUNC_20(VAR_66, VAR_67)) {
  FUNC_0(VAR_18);
  FUNC_0(VAR_19);
  FUNC_1(VAR_20);
  FUNC_0(VAR_21);
  FUNC_1(VAR_15);
  VAR_60 = 1;
 }
 if (FUNC_25(VAR_66, VAR_67)) {
  FUNC_1(VAR_6);
  FUNC_0(VAR_7);
  FUNC_0(VAR_19);
  FUNC_0(VAR_9);
  FUNC_0(VAR_21);
  VAR_60 = 1;
 }
 if (FUNC_27(VAR_66, VAR_67)) {
  FUNC_0(VAR_7);
  FUNC_0(VAR_19);
  FUNC_0(VAR_9);
  FUNC_0(VAR_21);
 }
 if (FUNC_23(VAR_66, VAR_67)) {
  FUNC_0(VAR_9);
  FUNC_0(VAR_21);
 }
 if (FUNC_18(VAR_66, VAR_67)) {
  FUNC_1(VAR_22);
  FUNC_1(VAR_23);
  FUNC_1(VAR_17);
 }
 VAR_37 = FUNC_18(VAR_66, VAR_67);
 if (FUNC_19(VAR_66, VAR_67)) {
  FUNC_1(VAR_27);
  FUNC_1(VAR_0);
  FUNC_1(VAR_12);
  FUNC_1(VAR_4);
 }
 VAR_42 = FUNC_28(VAR_66, VAR_67);
 VAR_39 = FUNC_26(VAR_66, VAR_67);

 if (VAR_42 || VAR_39 || FUNC_24(VAR_66, VAR_67))
  FUNC_0(VAR_7);

 if (!VAR_58)
  FUNC_11();

 if (!VAR_58 && FUNC_20(VAR_66, VAR_67))
  FUNC_7();

 FUNC_31(VAR_66, VAR_67);
 FUNC_29(VAR_66, VAR_67);
 FUNC_5(VAR_66, VAR_67);

 if (!VAR_58)
  FUNC_12(VAR_66, VAR_67);

 if (!VAR_58)
  FUNC_13();
 if (!VAR_58)
  FUNC_14();

 if (FUNC_19(VAR_66, VAR_67))
  FUNC_6();

 if (!FUNC_4("/sys/class/drm/card0/power/rc6_residency_ms", VAR_32))
  FUNC_1(VAR_13);

 if (!FUNC_4("/sys/class/graphics/fb0/device/drm/card0/gt_cur_freq_mhz", VAR_32))
  FUNC_1(VAR_11);

 if (!FUNC_4("/sys/devices/system/cpu/cpuidle/low_power_idle_cpu_residency_us", VAR_32))
  FUNC_1(VAR_5);
 else
  FUNC_0(VAR_5);

 if (!FUNC_4("/sys/devices/system/cpu/cpuidle/low_power_idle_system_residency_us", VAR_32))
  FUNC_1(VAR_25);
 else
  FUNC_0(VAR_25);

 if (!VAR_58)
  FUNC_10();

 return;
}
