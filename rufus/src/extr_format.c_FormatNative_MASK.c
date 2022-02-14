
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef char WCHAR ;
struct TYPE_2__ {int MediaType; } ;
typedef char* LPCSTR ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 () ;
 char* FUNC_2 (int,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,char*,...) ;
 int FUNC_9 (int ) ;
 TYPE_1__ VAR_17 ;
 int FUNC_10 (int ) ;
 int VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int FUNC_11 () ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 float VAR_24 ;
 scalar_t__ FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,int ,char*,char*,int,int,int ) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (int ,char*) ;
 scalar_t__ FUNC_16 (char*,int ) ;
 scalar_t__ VAR_25 ;
 int FUNC_17 (char*,...) ;
 char* FUNC_18 (char*) ;
 size_t FUNC_19 (char*) ;

__attribute__((used)) static BOOL FUNC_20(DWORD VAR_26, uint64_t VAR_27, DWORD VAR_28, LPCSTR VAR_29, LPCSTR VAR_30, DWORD VAR_31)
{
 BOOL VAR_32 = VAR_5;
 FUNC_5(VAR_11);
 FUNC_5(VAR_3);
 char *VAR_33, *VAR_34 = ((void*)0);
 WCHAR* VAR_35 = ((void*)0), *VAR_36 = FUNC_18(VAR_30), *VAR_37 = FUNC_18(VAR_29);
 size_t VAR_38;

 if ((FUNC_16(VAR_29, VAR_10[VAR_9]) == 0) && !((VAR_21 == 0) && (VAR_22 == 0))) {
  FUNC_8(0, VAR_15, VAR_29, VAR_21, VAR_22);
 } else {
  FUNC_8(0, VAR_16, VAR_29);
 }
 VAR_34 = FUNC_2(VAR_26, VAR_27, VAR_18, VAR_18);
 VAR_35 = FUNC_18(VAR_34);
 if (VAR_35 == ((void*)0)) {
  FUNC_17("Could not read volume name");
  VAR_13 = VAR_2|FUNC_0(VAR_4)|VAR_1;
  goto out;
 }


 VAR_35[FUNC_19(VAR_35)-1] = 0;




 VAR_33 = FUNC_15(VAR_14, ((void*)0));
 FUNC_7(VAR_11, VAR_23);
 FUNC_6(VAR_3, VAR_23);
 FUNC_15(VAR_14, VAR_33);

 if (VAR_28 < 0x200) {

  VAR_28 = 0;
  FUNC_17("Using default cluster size");
 } else {
  FUNC_17("Using cluster size: %d bytes", VAR_28);
 }
 VAR_24 = 0.0f;
 VAR_25 = 0;

 FUNC_17("%s format was selected", (VAR_31 & VAR_8) ? "Quick" : "Slow");
 for (VAR_38 = 0; VAR_38 < VAR_19; VAR_38++) {
  FUNC_13(VAR_35, VAR_17.MediaType, VAR_37, VAR_36,
   (VAR_31 & VAR_8), VAR_28, VAR_12);
  if (!FUNC_4(VAR_13) || (FUNC_3(VAR_13) == VAR_0))
   break;
  FUNC_17("%s - Retrying...", FUNC_11());
  FUNC_10(VAR_20);
 }
 if (FUNC_4(VAR_13))
  goto out;

 if (VAR_31 & VAR_7) {
  VAR_35[FUNC_19(VAR_35)] = '\\';
  if (FUNC_12(VAR_35, VAR_6)) {
   FUNC_17("Enabled NTFS compression");
  } else {
   FUNC_17("Could not enable NTFS compression: %s", FUNC_11());
  }
 }

 if (!FUNC_4(VAR_13)) {
  FUNC_17("Format completed.");
  VAR_32 = VAR_18;
 }

out:
 if (!VAR_32 && !FUNC_4(VAR_13))
  VAR_13 = VAR_2|FUNC_0(VAR_4)|FUNC_9(FUNC_1());
 FUNC_14(VAR_34);
 FUNC_14(VAR_35);
 FUNC_14(VAR_36);
 FUNC_14(VAR_37);
 return VAR_32;
}
