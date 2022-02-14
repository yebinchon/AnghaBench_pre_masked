
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ lsn_t ;
typedef int libfat_sector_t ;
struct TYPE_3__ {int sec_start; int * buf; scalar_t__ lsn; int p_iso; } ;
typedef TYPE_1__ iso9660_readfat_private ;
struct TYPE_4__ {size_t efi_img_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,int *,scalar_t__,int) ;
 int FUNC_1 (void*,int *,size_t) ;
 int FUNC_2 (char*,size_t,unsigned long) ;

int FUNC_3(intptr_t VAR_3, void *VAR_4, size_t VAR_5, libfat_sector_t VAR_6)
{
 iso9660_readfat_private* VAR_7 = (iso9660_readfat_private*)VAR_3;

 if (sizeof(VAR_7->buf) % VAR_5 != 0) {
  FUNC_2("iso9660_readfat: Sector size %d is not a divisor of %d", VAR_5, sizeof(VAR_7->buf));
  return 0;
 }

 if ((VAR_6 < VAR_7->sec_start) || (VAR_6 >= VAR_7->sec_start + sizeof(VAR_7->buf) / VAR_5)) {

  VAR_7->sec_start = (((VAR_6 * VAR_5) / VAR_0) * VAR_0) / VAR_5;
  if (FUNC_0(VAR_7->p_iso, VAR_7->buf,
   VAR_7->lsn + (lsn_t)((VAR_7->sec_start * VAR_5) / VAR_0), VAR_1)
   != VAR_1 * VAR_0) {
   FUNC_2("Error reading ISO-9660 file %s at LSN %lu\n", VAR_2.efi_img_path,
    (long unsigned int)(VAR_7->lsn + (VAR_7->sec_start * VAR_5) / VAR_0));
   return 0;
  }
 }
 FUNC_1(VAR_4, &VAR_7->buf[(VAR_6 - VAR_7->sec_start)*VAR_5], VAR_5);
 return (int)VAR_5;
}
