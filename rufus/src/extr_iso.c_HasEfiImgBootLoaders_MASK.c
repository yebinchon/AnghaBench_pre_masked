
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct libfat_filesystem {int dummy; } ;
struct libfat_direntry {int* entry; } ;
typedef int iso9660_t ;
struct TYPE_9__ {TYPE_2__* psz_symlink; } ;
struct TYPE_10__ {TYPE_1__ rr; int **** lsn; int buf; int * p_iso; scalar_t__ sec_start; } ;
typedef TYPE_2__ iso9660_stat_t ;
typedef TYPE_2__ iso9660_readfat_private ;
typedef scalar_t__ int32_t ;
struct TYPE_11__ {char* efi_img_path; } ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char**) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_7__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char** VAR_4 ;
 char* VAR_5 ;
 TYPE_7__ VAR_6 ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ***,int) ;
 int * FUNC_5 (char*) ;
 int VAR_7 ;
 int FUNC_6 (struct libfat_filesystem*) ;
 struct libfat_filesystem* FUNC_7 (int ,intptr_t) ;
 scalar_t__ FUNC_8 (struct libfat_filesystem*,scalar_t__,char*,struct libfat_direntry*) ;
 TYPE_2__* FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (char*) ;
 char FUNC_12 (char) ;
 int FUNC_13 (char*,...) ;

BOOL FUNC_14(void)
{
 BOOL VAR_8 = VAR_0;
 iso9660_t* VAR_9 = ((void*)0);
 iso9660_stat_t* VAR_10 = ((void*)0);
 iso9660_readfat_private* VAR_11 = ((void*)0);
 int32_t VAR_12, VAR_13;
 struct libfat_filesystem *VAR_14 = ((void*)0);
 struct libfat_direntry VAR_15;
 char VAR_16[12] = { 0 };
 int VAR_17, VAR_18, VAR_19;

 if ((VAR_5 == ((void*)0)) || !FUNC_1(VAR_6))
  return VAR_0;

 VAR_9 = FUNC_5(VAR_5);
 if (VAR_9 == ((void*)0)) {
  FUNC_13("Could not open image '%s' as an ISO-9660 file system", VAR_5);
  goto out;
 }
 VAR_10 = FUNC_3(VAR_9, VAR_6.efi_img_path);
 if (VAR_10 == ((void*)0)) {
  FUNC_13("Could not get ISO-9660 file information for file %s\n", VAR_6.efi_img_path);
  goto out;
 }
 VAR_11 = FUNC_9(sizeof(iso9660_readfat_private));
 if (VAR_11 == ((void*)0))
  goto out;
 VAR_11->p_iso = VAR_9;
 VAR_11->lsn = &VAR_10->lsn[0];
 VAR_11->sec_start = 0;

 if (FUNC_4(VAR_11->p_iso, VAR_11->buf, *VAR_11->lsn, VAR_2) != VAR_2 * VAR_1) {
  FUNC_13("Error reading ISO-9660 file %s at LSN %lu\n", VAR_6.efi_img_path, (long unsigned int)VAR_11->lsn);
  goto out;
 }
 VAR_14 = FUNC_7(VAR_7, (intptr_t)VAR_11);
 if (VAR_14 == ((void*)0)) {
  FUNC_13("FAT access error");
  goto out;
 }


 if (FUNC_8(VAR_14, 0, "EFI        ", &VAR_15) < 0)
  goto out;
 VAR_12 = VAR_15.entry[26] + (VAR_15.entry[27] << 8);
 if (FUNC_8(VAR_14, VAR_12, "BOOT       ", &VAR_15) < 0)
  goto out;
 VAR_12 = VAR_15.entry[26] + (VAR_15.entry[27] << 8);

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_4); VAR_17++) {

  if (FUNC_11(VAR_4[VAR_17]) > 12) {
   FUNC_13("Internal error: FAT 8.3");
   continue;
  }
  for (VAR_18 = 0, VAR_19 = 0; VAR_4[VAR_17][VAR_18] != 0; VAR_18++) {
   if (VAR_4[VAR_17][VAR_18] == '.') {
    while (VAR_19 < 8)
     VAR_16[VAR_19++] = ' ';
   } else
    VAR_16[VAR_19++] = FUNC_12(VAR_4[VAR_17][VAR_18]);
  }
  VAR_13 = FUNC_8(VAR_14, VAR_12, VAR_16, &VAR_15);
  if (VAR_13 > 0) {
   if (!VAR_8)
    FUNC_13("  Detected EFI bootloader(s) (from '%s'):", VAR_6.efi_img_path);
   FUNC_13("  ● '%s'", VAR_4[VAR_17]);
   VAR_8 = VAR_3;
  }
 }

out:
 if (VAR_14 != ((void*)0))
  FUNC_6(VAR_14);
 if (VAR_10 != ((void*)0))
  FUNC_10(VAR_10->rr.psz_symlink);
 FUNC_10(VAR_10);
 FUNC_10(VAR_11);
 if (VAR_9 != ((void*)0))
  FUNC_2(VAR_9);
 return VAR_8;
}
