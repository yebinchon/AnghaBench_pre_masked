
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int winpe; scalar_t__ uses_minint; } ;
struct TYPE_5__ {int member_1; int member_0; } ;
struct TYPE_6__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char const**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;
 scalar_t__ FUNC_3 (char*,int,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__,char*,int,int*,int *) ;
 int FUNC_6 (scalar_t__,TYPE_2__ const,int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_7 () ;
 int FUNC_8 (scalar_t__,char*,int,int*,int ) ;
 int VAR_14 ;
 TYPE_3__ VAR_15 ;
 int * FUNC_9 (char*,char*,char*,int ) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int,int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*,char const*,int) ;
 int FUNC_15 (char*,char*,char,...) ;
 int FUNC_16 (char*,char const*) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (char*,...) ;

__attribute__((used)) static BOOL FUNC_19(char VAR_16)
{
 char VAR_17[64], VAR_18[32];
 const char* VAR_19[3] = { "i386", "amd64", "minint" };
 const char* VAR_20[2] = { "\\minint\\txtsetup.sif", "\\minint\\system32\\" };
 const char* VAR_21[2][2] = { { "\\i386\\txtsetup.sif", "\\i386\\system32\\" } ,
          { "\\amd64\\txtsetup.sif", "\\amd64\\system32\\" } };
 const char *VAR_22 = "$win_nt$.~bt";
 const char *VAR_23 = "rdisk(0)";
 const LARGE_INTEGER VAR_24 = { {0, 0} };
 char VAR_25[64];
 HANDLE VAR_26 = VAR_7;
 DWORD VAR_27, VAR_28, VAR_29, VAR_30, VAR_31 = 0;
 BOOL VAR_32 = VAR_0;
 char* VAR_33 = ((void*)0);

 if ((VAR_15.winpe & VAR_10) == VAR_10)
  VAR_31 = 1;
 else if ((VAR_15.winpe & VAR_12) == VAR_12)
  VAR_31 = 2;

 FUNC_15(VAR_25, "SetupSourceDevice = \"\\device\\harddisk%d\\partition1\"",
  FUNC_1(VAR_14));

 FUNC_15(VAR_17, "%c:\\%s\\ntdetect.com", VAR_16, VAR_19[2*(VAR_31/2)]);
 FUNC_15(VAR_18, "%c:\\ntdetect.com", VAR_16);
 FUNC_2(VAR_17, VAR_18, VAR_9);
 if (!VAR_15.uses_minint) {

  FUNC_15(VAR_17, "%c:\\%s\\txtsetup.sif", VAR_16, VAR_19[VAR_31]);
  FUNC_15(VAR_18, "%c:\\txtsetup.sif", VAR_16);
  if (!FUNC_2(VAR_17, VAR_18, VAR_9)) {
   FUNC_18("Did not copy %s as %s: %s\n", VAR_17, VAR_18, FUNC_7());
  }
  if (FUNC_9(VAR_18, "[SetupData]", VAR_25, VAR_0) == ((void*)0)) {
   FUNC_18("Failed to add SetupSourceDevice in %s\n", VAR_18);
   goto out;
  }
  FUNC_18("Successfully added '%s' to %s\n", VAR_25, VAR_18);
 }

 FUNC_15(VAR_17, "%c:\\%s\\setupldr.bin", VAR_16, VAR_19[2*(VAR_31/2)]);
 FUNC_15(VAR_18, "%c:\\BOOTMGR", VAR_16);
 if (!FUNC_2(VAR_17, VAR_18, VAR_9)) {
  FUNC_18("Did not copy %s as %s: %s\n", VAR_17, VAR_18, FUNC_7());
 }



 if (VAR_15.winpe&VAR_12) {
  if (VAR_15.uses_minint) {
   FUNC_18("Detected \\minint directory with /minint option: nothing to patch\n");
   VAR_32 = VAR_9;
  } else if (!(VAR_15.winpe&(VAR_11|VAR_10))) {
   FUNC_18("Detected \\minint directory only but no /minint option: not sure what to do\n");
  }
  goto out;
 }


 VAR_26 = FUNC_3(VAR_18, VAR_4|VAR_5, VAR_3,
  ((void*)0), VAR_8, VAR_1, ((void*)0));
 if (VAR_26 == VAR_7) {
  FUNC_18("Could not open %s for patching: %s\n", VAR_18, FUNC_7());
  goto out;
 }
 VAR_29 = FUNC_4(VAR_26, ((void*)0));
 if (VAR_29 == VAR_6) {
  FUNC_18("Could not get size for file %s: %s\n", VAR_18, FUNC_7());
  goto out;
 }
 VAR_33 = (char*)FUNC_10(VAR_29);
 if (VAR_33 == ((void*)0))
  goto out;
 if ((!FUNC_5(VAR_26, VAR_33, VAR_29, &VAR_30, ((void*)0))) || (VAR_29 != VAR_30)) {
  FUNC_18("Could not read file %s: %s\n", VAR_18, FUNC_7());
  goto out;
 }
 if (!FUNC_6(VAR_26, VAR_24, ((void*)0), VAR_2)) {
  FUNC_18("Could not rewind file %s: %s\n", VAR_18, FUNC_7());
  goto out;
 }


 FUNC_18("Patching file %s\n", VAR_18);

 if ((VAR_29 > 0x2061) && (VAR_33[0x2060] == 0x74) && (VAR_33[0x2061] == 0x03)) {
  VAR_33[0x2060] = 0xeb;
  VAR_33[0x2061] = 0x1a;
  FUNC_18("  0x00002060: 0x74 0x03 -> 0xEB 0x1A (disable Win2k3 CRC check)\n");
 }
 for (VAR_27=1; VAR_27<VAR_29-32; VAR_27++) {
  for (VAR_28=0; VAR_28<FUNC_0(VAR_20); VAR_28++) {
   if (FUNC_14(&VAR_33[VAR_27], VAR_20[VAR_28], FUNC_17(VAR_20[VAR_28])-1) == 0) {
    FUNC_18("  0x%08X: '%s' -> '%s'\n", VAR_27, &VAR_33[VAR_27], VAR_21[VAR_31][VAR_28]);
    FUNC_16(&VAR_33[VAR_27], VAR_21[VAR_31][VAR_28]);
    VAR_27 += (DWORD)FUNC_11(FUNC_17(VAR_20[VAR_28]), FUNC_17(VAR_21[VAR_31][VAR_28]));
   }
  }
 }

 if (!VAR_15.uses_minint) {

  for (VAR_27=0; VAR_27<VAR_29-32; VAR_27++) {


   if (FUNC_14(&VAR_33[VAR_27], VAR_23, FUNC_17(VAR_23)-1) == 0) {
    VAR_33[VAR_27+6] = 0x30 + FUNC_1(VAR_14);
    FUNC_18("  0x%08X: '%s' -> 'rdisk(%c)'\n", VAR_27, VAR_23, VAR_33[VAR_27+6]);
   }

   if (FUNC_14(&VAR_33[VAR_27], VAR_22, FUNC_17(VAR_22)-1) == 0) {
    FUNC_18("  0x%08X: '%s' -> '%s%s'\n", VAR_27, &VAR_33[VAR_27], VAR_19[VAR_31], &VAR_33[VAR_27+FUNC_17(VAR_22)]);
    FUNC_16(&VAR_33[VAR_27], VAR_19[VAR_31]);

    VAR_33[VAR_27+FUNC_17(VAR_19[VAR_31])] = VAR_33[VAR_27+FUNC_17(VAR_22)];
    VAR_33[VAR_27+FUNC_17(VAR_19[VAR_31])+1] = 0;
   }
  }
 }

 if (!FUNC_8(VAR_26, VAR_33, VAR_29, &VAR_30, VAR_13)) {
  FUNC_18("Could not write patched file: %s\n", FUNC_7());
  goto out;
 }
 VAR_32 = VAR_9;

out:
 FUNC_12(VAR_26);
 FUNC_13(VAR_33);
 return VAR_32;
}
