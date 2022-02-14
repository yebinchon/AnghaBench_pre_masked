
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {scalar_t__ MediaType; int SectorSize; } ;
struct TYPE_5__ {char** wininst_path; } ;
typedef int FILE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (scalar_t__,int ,int,int ,char*,int) ;
 int VAR_12 ;
 unsigned char* FUNC_5 (int ,int ,int ,char*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__) ;
 scalar_t__ FUNC_7 (TYPE_1__) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 char* FUNC_10 (int ) ;
 int VAR_17 ;
 size_t VAR_18 ;
 scalar_t__ FUNC_11 (char*,int *,scalar_t__) ;
 TYPE_2__ VAR_19 ;
 int FUNC_12 (int) ;
 scalar_t__ VAR_20 ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_15 (char*,int ,char const*) ;
 int VAR_21 ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (char*,char*) ;
 scalar_t__ FUNC_18 (unsigned char*,int,scalar_t__,int *) ;
 int VAR_22 ;
 int VAR_23 ;
 TYPE_1__ VAR_24 ;
 int VAR_25 ;
 int * VAR_26 ;
 int FUNC_19 (char*,char*,char const*,char const*,...) ;
 int * VAR_27 ;
 int FUNC_20 (char*,...) ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 size_t VAR_32 ;
 int VAR_33 ;

__attribute__((used)) static BOOL FUNC_21(DWORD VAR_34, const char* VAR_35, BOOL VAR_36)
{



 static char VAR_37[] = "?:\\Windows\\System32\\sysprep\\unattend.xml";
 char *VAR_38, *VAR_39 = ((void*)0), VAR_40[128], VAR_41[VAR_15];
 unsigned char *VAR_42;
 DWORD VAR_43;
 ULONG VAR_44;
 FILE* VAR_45;

 FUNC_20("Windows To Go mode selected");

 if ((VAR_36) && (VAR_19.MediaType != VAR_11) && (VAR_25 < 15000)) {
  VAR_12 = VAR_3|FUNC_3(VAR_4)|VAR_2;
  return VAR_5;
 }


 VAR_38 = FUNC_10(VAR_23);
 if (VAR_38 == ((void*)0)) {
  FUNC_20("Could not mount ISO for Windows To Go installation");
  VAR_12 = VAR_3|FUNC_3(VAR_4)|FUNC_0(VAR_1);
  return VAR_5;
 }
 FUNC_19(VAR_40, "%s%s", VAR_38, &VAR_24.wininst_path[VAR_32][2]);
 FUNC_20("Mounted ISO as '%s'", VAR_38);


 if (!FUNC_15(VAR_40, VAR_33, VAR_35)) {
  FUNC_20("Failed to apply Windows To Go image");
  if (!FUNC_8(VAR_12))
   VAR_12 = VAR_3|FUNC_3(VAR_4)|FUNC_0(VAR_1);
  FUNC_13();
  return VAR_5;
 }
 FUNC_13();

 if (VAR_36) {
  FUNC_20("Setting up EFI System Partition");



  if (VAR_19.SectorSize <= 1024)
   VAR_44 = 1024;
  else if (VAR_19.SectorSize <= 4096)
   VAR_44 = 4096;
  else
   VAR_44 = (ULONG)VAR_19.SectorSize;





  if (!FUNC_4(VAR_34, VAR_26[VAR_18], VAR_44, VAR_10, "",
   VAR_9 | VAR_6 | VAR_7 | VAR_8)) {
   FUNC_20("Could not format EFI System Partition");
   return VAR_5;
  }
  FUNC_12(200);
 }

 if (VAR_36) {

  VAR_39 = FUNC_1(VAR_34, VAR_26[VAR_18], VAR_5);
  if (VAR_39 == ((void*)0)) {
   VAR_12 = VAR_3 | FUNC_3(VAR_4) | FUNC_0(VAR_0);
   return VAR_5;
  }
 }





 FUNC_19(VAR_41, "%s\\bcdboot.exe %s\\Windows /v /f %s /s %s", VAR_27, VAR_35,
  FUNC_6(VAR_24) ? (FUNC_7(VAR_24) ? "ALL" : "BIOS") : "UEFI",
  (VAR_36)?VAR_39:VAR_35);
 FUNC_20("Enabling boot using command '%s'", VAR_41);
 if (FUNC_11(VAR_41, VAR_27, VAR_28) != 0) {

  FUNC_20("Failed to enable boot");
  VAR_12 = VAR_3 | FUNC_3(VAR_4) | FUNC_0(VAR_1);
 }

 if (VAR_36) {
  FUNC_12(200);
  FUNC_2(VAR_39, VAR_5);
 }
 FUNC_14(VAR_17, VAR_16, VAR_31 + 2 * VAR_29, VAR_30);
 FUNC_20("Copying 'unattend.xml', to disable the use of the Windows Recovery Environment...");
 VAR_42 = FUNC_5(VAR_22, FUNC_9(VAR_14),
  VAR_21, "unattend.xml", &VAR_43, VAR_5);
 VAR_37[0] = VAR_35[0];
 VAR_45 = FUNC_17(VAR_37, "wb");
 if ((VAR_45 == ((void*)0)) || (FUNC_18(VAR_42, 1, VAR_43, VAR_45) != VAR_43))
  FUNC_20("Could not write '%s'", VAR_37);
 if (VAR_45 != ((void*)0))
  FUNC_16(VAR_45);
 FUNC_14(VAR_17, VAR_16, VAR_30, VAR_30);

 return VAR_20;
}
