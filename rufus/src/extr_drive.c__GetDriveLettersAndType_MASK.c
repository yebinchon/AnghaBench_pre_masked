
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int file_fs_device_info ;
typedef int drives ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int Characteristics; } ;
typedef int IO_STATUS_BLOCK ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ FILE_FS_DEVICE_INFORMATION ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int ,int,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,int ) ;
 int VAR_15 ;
 int FUNC_6 () ;
 int FUNC_7 (char) ;
 scalar_t__ FUNC_8 (scalar_t__,int *,TYPE_1__*,int,int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,char) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (char*,int,...) ;

__attribute__((used)) static BOOL FUNC_14(DWORD VAR_16, char* VAR_17, UINT* VAR_18)
{
 DWORD VAR_19;
 BOOL VAR_20 = VAR_3;
 HANDLE VAR_21 = VAR_10;
 UINT VAR_22;
 IO_STATUS_BLOCK VAR_23;
 FILE_FS_DEVICE_INFORMATION VAR_24;
 int VAR_25 = 0, VAR_26;
 char *VAR_27, VAR_28[26*4 + 1];
 char VAR_29[] = "\\\\.\\#:";

 FUNC_5(VAR_12, VAR_13);

 if (VAR_17 != ((void*)0))
  VAR_17[0] = 0;
 if (VAR_18 != ((void*)0))
  *VAR_18 = VAR_2;
 FUNC_0(VAR_16);
 VAR_19 = FUNC_4(sizeof(VAR_28), VAR_28);
 if (VAR_19 == 0) {
  FUNC_13("GetLogicalDriveStrings failed: %s", FUNC_6());
  goto out;
 }
 if (VAR_19 > sizeof(VAR_28)) {
  FUNC_13("GetLogicalDriveStrings: Buffer too small (required %d vs. %d)", VAR_19, sizeof(VAR_28));
  goto out;
 }

 VAR_20 = VAR_15;
 for (VAR_27 = VAR_28 ;*VAR_27; VAR_27 += FUNC_10(VAR_27)+1) {
  if (!FUNC_7(*VAR_27))
   continue;
  *VAR_27 = (char)FUNC_12((int)*VAR_27);





  VAR_22 = FUNC_3(VAR_27);

  if ((VAR_22 != VAR_1) && (VAR_22 != VAR_0))
   continue;

  FUNC_11(VAR_29, "\\\\.\\%c:", VAR_27[0]);
  VAR_21 = FUNC_1(VAR_29, VAR_9, VAR_6|VAR_7,
   ((void*)0), VAR_14, VAR_4, ((void*)0));
  if (VAR_21 == VAR_10) {

   continue;
  }


  if ((&FUNC_8 != ((void*)0)) &&
   (FUNC_8(VAR_21, &VAR_23, &VAR_24,
    sizeof(VAR_24), VAR_8) == VAR_11) &&
   (VAR_24.Characteristics & VAR_5) ) {
    continue;
  }

  VAR_26 = FUNC_2(VAR_21, VAR_29);
  FUNC_9(VAR_21);
  if (VAR_26 == VAR_16) {
   VAR_20 = VAR_15;
   if (VAR_17 != ((void*)0))
    VAR_17[VAR_25++] = *VAR_27;

   if (VAR_18 != ((void*)0))
    *VAR_18 = VAR_22;
  }
 }

out:
 if (VAR_17 != ((void*)0))
  VAR_17[VAR_25] = 0;
 return VAR_20;
}
