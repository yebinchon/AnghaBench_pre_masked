
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msr_counter {scalar_t__ format; int width; scalar_t__ type; int name; struct msr_counter* next; } ;
struct TYPE_2__ {struct msr_counter* pp; struct msr_counter* cp; struct msr_counter* tp; } ;


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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_53 ;
 TYPE_1__ VAR_54 ;

void FUNC_2(char *VAR_55)
{
 struct msr_counter *VAR_56;
 int VAR_57 = 0;

 if (FUNC_0(VAR_45))
  VAR_51 += FUNC_1(VAR_51, "%susec", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_42))
  VAR_51 += FUNC_1(VAR_51, "%sTime_Of_Day_Seconds", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_26))
  VAR_51 += FUNC_1(VAR_51, "%sPackage", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_16))
  VAR_51 += FUNC_1(VAR_51, "%sDie", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_24))
  VAR_51 += FUNC_1(VAR_51, "%sNode", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_14))
  VAR_51 += FUNC_1(VAR_51, "%sCore", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_5))
  VAR_51 += FUNC_1(VAR_51, "%sCPU", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_0))
  VAR_51 += FUNC_1(VAR_51, "%sAPIC", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_46))
  VAR_51 += FUNC_1(VAR_51, "%sX2APIC", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_2))
  VAR_51 += FUNC_1(VAR_51, "%sAvg_MHz", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_3))
  VAR_51 += FUNC_1(VAR_51, "%sBusy%%", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_4))
  VAR_51 += FUNC_1(VAR_51, "%sBzy_MHz", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_43))
  VAR_51 += FUNC_1(VAR_51, "%sTSC_MHz", (VAR_57++ ? VAR_55 : ""));

 if (FUNC_0(VAR_22)) {
  if (VAR_53)
   VAR_51 += FUNC_1(VAR_51, "%s     IRQ", (VAR_57++ ? VAR_55 : ""));
  else
   VAR_51 += FUNC_1(VAR_51, "%sIRQ", (VAR_57++ ? VAR_55 : ""));
 }

 if (FUNC_0(VAR_40))
  VAR_51 += FUNC_1(VAR_51, "%sSMI", (VAR_57++ ? VAR_55 : ""));

 for (VAR_56 = VAR_54.tp; VAR_56; VAR_56 = VAR_56->next) {

  if (VAR_56->format == VAR_48) {
   if (VAR_56->width == 64)
    VAR_51 += FUNC_1(VAR_51, "%s%18.18s", (VAR_57++ ? VAR_55 : ""), VAR_56->name);
   else
    VAR_51 += FUNC_1(VAR_51, "%s%10.10s", (VAR_57++ ? VAR_55 : ""), VAR_56->name);
  } else {
   if ((VAR_56->type == VAR_47) && VAR_53)
    VAR_51 += FUNC_1(VAR_51, "%s%8s", (VAR_57++ ? VAR_55 : ""), VAR_56->name);
   else
    VAR_51 += FUNC_1(VAR_51, "%s%s", (VAR_57++ ? VAR_55 : ""), VAR_56->name);
  }
 }

 if (FUNC_0(VAR_8))
  VAR_51 += FUNC_1(VAR_51, "%sCPU%%c1", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_9))
  VAR_51 += FUNC_1(VAR_51, "%sCPU%%c3", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_10))
  VAR_51 += FUNC_1(VAR_51, "%sCPU%%c6", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_11))
  VAR_51 += FUNC_1(VAR_51, "%sCPU%%c7", (VAR_57++ ? VAR_55 : ""));

 if (FUNC_0(VAR_23))
  VAR_51 += FUNC_1(VAR_51, "%sMod%%c6", (VAR_57++ ? VAR_55 : ""));

 if (FUNC_0(VAR_15))
  VAR_51 += FUNC_1(VAR_51, "%sCoreTmp", (VAR_57++ ? VAR_55 : ""));

 if (VAR_50 && !VAR_52) {
  if (FUNC_0(VAR_12) && (VAR_50 & VAR_49))
   VAR_51 += FUNC_1(VAR_51, "%sCorWatt", (VAR_57++ ? VAR_55 : ""));
 } else if (VAR_50 && VAR_52) {
  if (FUNC_0(VAR_13) && (VAR_50 & VAR_49))
   VAR_51 += FUNC_1(VAR_51, "%sCor_J", (VAR_57++ ? VAR_55 : ""));
 }

 for (VAR_56 = VAR_54.cp; VAR_56; VAR_56 = VAR_56->next) {
  if (VAR_56->format == VAR_48) {
   if (VAR_56->width == 64)
    VAR_51 += FUNC_1(VAR_51, "%s%18.18s", VAR_55, VAR_56->name);
   else
    VAR_51 += FUNC_1(VAR_51, "%s%10.10s", VAR_55, VAR_56->name);
  } else {
   if ((VAR_56->type == VAR_47) && VAR_53)
    VAR_51 += FUNC_1(VAR_51, "%s%8s", VAR_55, VAR_56->name);
   else
    VAR_51 += FUNC_1(VAR_51, "%s%s", VAR_55, VAR_56->name);
  }
 }

 if (FUNC_0(VAR_27))
  VAR_51 += FUNC_1(VAR_51, "%sPkgTmp", (VAR_57++ ? VAR_55 : ""));

 if (FUNC_0(VAR_21))
  VAR_51 += FUNC_1(VAR_51, "%sGFX%%rc6", (VAR_57++ ? VAR_55 : ""));

 if (FUNC_0(VAR_17))
  VAR_51 += FUNC_1(VAR_51, "%sGFXMHz", (VAR_57++ ? VAR_55 : ""));

 if (FUNC_0(VAR_44))
  VAR_51 += FUNC_1(VAR_51, "%sTotl%%C0", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_1))
  VAR_51 += FUNC_1(VAR_51, "%sAny%%C0", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_20))
  VAR_51 += FUNC_1(VAR_51, "%sGFX%%C0", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_6))
  VAR_51 += FUNC_1(VAR_51, "%sCPUGFX%%", (VAR_57++ ? VAR_55 : ""));

 if (FUNC_0(VAR_31))
  VAR_51 += FUNC_1(VAR_51, "%sPkg%%pc2", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_32))
  VAR_51 += FUNC_1(VAR_51, "%sPkg%%pc3", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_33))
  VAR_51 += FUNC_1(VAR_51, "%sPkg%%pc6", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_34))
  VAR_51 += FUNC_1(VAR_51, "%sPkg%%pc7", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_35))
  VAR_51 += FUNC_1(VAR_51, "%sPkg%%pc8", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_36))
  VAR_51 += FUNC_1(VAR_51, "%sPkg%%pc9", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_30))
  VAR_51 += FUNC_1(VAR_51, "%sPk%%pc10", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_7))
  VAR_51 += FUNC_1(VAR_51, "%sCPU%%LPI", (VAR_57++ ? VAR_55 : ""));
 if (FUNC_0(VAR_41))
  VAR_51 += FUNC_1(VAR_51, "%sSYS%%LPI", (VAR_57++ ? VAR_55 : ""));

 if (VAR_50 && !VAR_52) {
  if (FUNC_0(VAR_28))
   VAR_51 += FUNC_1(VAR_51, "%sPkgWatt", (VAR_57++ ? VAR_55 : ""));
  if (FUNC_0(VAR_12) && !(VAR_50 & VAR_49))
   VAR_51 += FUNC_1(VAR_51, "%sCorWatt", (VAR_57++ ? VAR_55 : ""));
  if (FUNC_0(VAR_18))
   VAR_51 += FUNC_1(VAR_51, "%sGFXWatt", (VAR_57++ ? VAR_55 : ""));
  if (FUNC_0(VAR_37))
   VAR_51 += FUNC_1(VAR_51, "%sRAMWatt", (VAR_57++ ? VAR_55 : ""));
  if (FUNC_0(VAR_25))
   VAR_51 += FUNC_1(VAR_51, "%sPKG_%%", (VAR_57++ ? VAR_55 : ""));
  if (FUNC_0(VAR_39))
   VAR_51 += FUNC_1(VAR_51, "%sRAM_%%", (VAR_57++ ? VAR_55 : ""));
 } else if (VAR_50 && VAR_52) {
  if (FUNC_0(VAR_29))
   VAR_51 += FUNC_1(VAR_51, "%sPkg_J", (VAR_57++ ? VAR_55 : ""));
  if (FUNC_0(VAR_13) && !(VAR_50 & VAR_49))
   VAR_51 += FUNC_1(VAR_51, "%sCor_J", (VAR_57++ ? VAR_55 : ""));
  if (FUNC_0(VAR_19))
   VAR_51 += FUNC_1(VAR_51, "%sGFX_J", (VAR_57++ ? VAR_55 : ""));
  if (FUNC_0(VAR_38))
   VAR_51 += FUNC_1(VAR_51, "%sRAM_J", (VAR_57++ ? VAR_55 : ""));
  if (FUNC_0(VAR_25))
   VAR_51 += FUNC_1(VAR_51, "%sPKG_%%", (VAR_57++ ? VAR_55 : ""));
  if (FUNC_0(VAR_39))
   VAR_51 += FUNC_1(VAR_51, "%sRAM_%%", (VAR_57++ ? VAR_55 : ""));
 }
 for (VAR_56 = VAR_54.pp; VAR_56; VAR_56 = VAR_56->next) {
  if (VAR_56->format == VAR_48) {
   if (VAR_56->width == 64)
    VAR_51 += FUNC_1(VAR_51, "%s%18.18s", VAR_55, VAR_56->name);
   else
    VAR_51 += FUNC_1(VAR_51, "%s%10.10s", VAR_55, VAR_56->name);
  } else {
   if ((VAR_56->type == VAR_47) && VAR_53)
    VAR_51 += FUNC_1(VAR_51, "%s%8s", VAR_55, VAR_56->name);
   else
    VAR_51 += FUNC_1(VAR_51, "%s%s", VAR_55, VAR_56->name);
  }
 }

 VAR_51 += FUNC_1(VAR_51, "\n");
}
