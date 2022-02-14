
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int udf_t ;
typedef int udf_dirent_t ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ lsn_t ;
typedef int iso9660_t ;
struct TYPE_5__ {TYPE_2__* psz_symlink; } ;
struct TYPE_6__ {size_t extents; scalar_t__* extsize; TYPE_1__ rr; scalar_t__* lsn; } ;
typedef TYPE_2__ iso9660_stat_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,int ,int *,int ,scalar_t__,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (scalar_t__,char*,scalar_t__,scalar_t__*,int ) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *,char const*) ;
 scalar_t__ FUNC_6 (int *,char*,scalar_t__,int) ;
 int * FUNC_7 (char const*) ;
 int FUNC_8 (char*,int ,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,char const*) ;
 scalar_t__ FUNC_14 (int *) ;
 int * FUNC_15 (int *,int,int ) ;
 int * FUNC_16 (char const*) ;
 scalar_t__ FUNC_17 (int *,char*,int) ;
 int FUNC_18 (char*,...) ;

int64_t FUNC_19(const char* VAR_8, const char* VAR_9, const char* VAR_10, DWORD VAR_11)
{
 size_t VAR_12, VAR_13;
 ssize_t VAR_14;
 int64_t VAR_15, VAR_16, VAR_17 = 0;
 char VAR_18[VAR_6];
 DWORD VAR_19, VAR_20;
 iso9660_t* VAR_21 = ((void*)0);
 udf_t* VAR_22 = ((void*)0);
 udf_dirent_t *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
 iso9660_stat_t *VAR_25 = ((void*)0);
 lsn_t VAR_26;
 HANDLE VAR_27 = VAR_4;

 VAR_27 = FUNC_0(VAR_10, VAR_2 | VAR_3,
  VAR_1, ((void*)0), VAR_0, VAR_11, ((void*)0));
 if (VAR_27 == VAR_4) {
  FUNC_18("  Could not create file %s: %s", VAR_10, FUNC_2());
  goto out;
 }


 VAR_22 = FUNC_16(VAR_8);
 if (VAR_22 == ((void*)0))
  goto try_iso;

 VAR_23 = FUNC_15(VAR_22, 1, 0);
 if (VAR_23 == ((void*)0)) {
  FUNC_18("Could not locate UDF root directory");
  goto out;
 }
 VAR_24 = FUNC_13(VAR_23, VAR_9);
 if (!VAR_24) {
  FUNC_18("Could not locate file %s in ISO image", VAR_9);
  goto out;
 }
 VAR_15 = FUNC_14(VAR_24);
 while (VAR_15 > 0) {
  FUNC_8(VAR_18, 0, VAR_6);
  VAR_14 = FUNC_17(VAR_24, VAR_18, 1);
  if (VAR_14 < 0) {
   FUNC_18("Error reading UDF file %s", VAR_9);
   goto out;
  }
  VAR_19 = (DWORD)FUNC_1(VAR_15, VAR_14);
  if (!FUNC_3(VAR_27, VAR_18, VAR_19, &VAR_20, VAR_7)) {
   FUNC_18("  Error writing file %s: %s", VAR_10, FUNC_2());
   goto out;
  }
  VAR_15 -= VAR_14;
  VAR_17 += VAR_14;
 }
 goto out;

try_iso:
 VAR_21 = FUNC_7(VAR_8);
 if (VAR_21 == ((void*)0)) {
  FUNC_18("Unable to open image '%s'", VAR_8);
  goto out;
 }

 VAR_25 = FUNC_5(VAR_21, VAR_9);
 if (VAR_25 == ((void*)0)) {
  FUNC_18("Could not get ISO-9660 file information for file %s", VAR_9);
  goto out;
 }

 for (VAR_13 = 0; VAR_13 < VAR_25->extents; VAR_13++) {
  VAR_16 = VAR_25->extsize[VAR_13];
  for (VAR_12 = 0; VAR_16 > 0; VAR_12++) {
   FUNC_8(VAR_18, 0, VAR_5);
   VAR_26 = VAR_25->lsn[VAR_13] + (lsn_t)VAR_12;
   if (FUNC_6(VAR_21, VAR_18, VAR_26, 1) != VAR_5) {
    FUNC_18("  Error reading ISO9660 file %s at LSN %lu", VAR_9, (long unsigned int)VAR_26);
    goto out;
   }
   VAR_19 = (DWORD)FUNC_1(VAR_16, VAR_5);
   if (!FUNC_3(VAR_27, VAR_18, VAR_19, &VAR_20, VAR_7)) {
    FUNC_18("  Error writing file %s: %s", VAR_10, FUNC_2());
    goto out;
   }
   VAR_16 -= VAR_5;
   VAR_17 += VAR_5;
  }
 }

out:
 FUNC_9(VAR_27);
 if (VAR_25 != ((void*)0))
  FUNC_10(VAR_25->rr.psz_symlink);
 FUNC_10(VAR_25);
 if (VAR_23 != ((void*)0))
  FUNC_12(VAR_23);
 if (VAR_24 != ((void*)0))
  FUNC_12(VAR_24);
 if (VAR_21 != ((void*)0))
  FUNC_4(VAR_21);
 if (VAR_22 != ((void*)0))
  FUNC_11(VAR_22);
 return VAR_17;
}
