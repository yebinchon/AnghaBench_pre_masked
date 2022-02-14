
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int FileSysType; int BootSignature; int FATSz32; } ;
struct TYPE_3__ {int FileSysType; int BootSignature; } ;
struct fat_boot_sector {TYPE_2__ bs32; TYPE_1__ bs16; int bsFATsecs; int bsFATs; int bsRootDirEnts; int bsResSectors; int bsHugeSectors; int bsSectors; int bsSecPerClust; int bsBytesPerSec; } ;


 int VAR_0 ;
 long long FUNC_0 (int *) ;
 long long FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,int *,int) ;

__attribute__((used)) static const char *FUNC_5(const void *VAR_1, int *VAR_2)
{
    int VAR_3;
    const struct fat_boot_sector *VAR_4 = VAR_1;
    long long VAR_5, VAR_6, VAR_7;
    long long VAR_8;
    int VAR_9, VAR_10;

    VAR_3 = FUNC_0(&VAR_4->bsBytesPerSec);

    VAR_10 = FUNC_2(&VAR_4->bsSecPerClust);
    if (VAR_10 == 0 || (VAR_10 & (VAR_10 - 1)))
 return "impossible cluster size on an FAT volume";

    VAR_5 = FUNC_0(&VAR_4->bsSectors);
    VAR_5 = VAR_5 ? VAR_5 : FUNC_1(&VAR_4->bsHugeSectors);

    VAR_7 = VAR_5 - FUNC_0(&VAR_4->bsResSectors);

    VAR_6 = FUNC_0(&VAR_4->bsFATsecs);
    VAR_6 = VAR_6 ? VAR_6 : FUNC_1(&VAR_4->bs32.FATSz32);
    VAR_6 *= FUNC_2(&VAR_4->bsFATs);
    VAR_7 -= VAR_6;

    VAR_9 = FUNC_0(&VAR_4->bsRootDirEnts);
    VAR_7 -= (VAR_9 + VAR_3 / 32 - 1) / VAR_3;

    if (VAR_7 < 0)
 return "negative number of data sectors on an FAT volume";

    VAR_8 = VAR_7 / VAR_10;

    VAR_6 = FUNC_0(&VAR_4->bsFATsecs);
    VAR_6 = VAR_6 ? VAR_6 : FUNC_1(&VAR_4->bs32.FATSz32);
    VAR_6 *= FUNC_2(&VAR_4->bsFATs);

    if (!VAR_6)
 return "zero FAT sectors";

    if (VAR_8 < 0xFFF5) {

 if (!FUNC_0(&VAR_4->bsFATsecs))
     return "zero FAT sectors (FAT12/16)";

 if (FUNC_2(&VAR_4->bs16.BootSignature) == 0x29) {
     if (!FUNC_3(&VAR_4->bs16.FileSysType, "FAT12   ", 8)) {
  if (VAR_8 >= 0xFF5)
      return "more than 4084 clusters but claims FAT12";
     } else if (!FUNC_3(&VAR_4->bs16.FileSysType, "FAT16   ", 8)) {
  if (VAR_8 < 0xFF5)
      return "less than 4084 clusters but claims FAT16";
     } else if (!FUNC_3(&VAR_4->bs16.FileSysType, "FAT32   ", 8)) {
  return "less than 65525 clusters but claims FAT32";
     } else if (FUNC_3(&VAR_4->bs16.FileSysType, "FAT     ", 8)) {
  static char VAR_11[] = "filesystem type \"????????\" not "
      "supported";
  FUNC_4(VAR_11 + 17, &VAR_4->bs16.FileSysType, 8);
  return VAR_11;
     }
 }
    } else if (VAR_8 < 0x0FFFFFF5) {






 if (FUNC_2(&VAR_4->bs32.BootSignature) != 0x29 ||
     FUNC_3(&VAR_4->bs32.FileSysType, "FAT32   ", 8))
     return "missing FAT32 signature";
    } else {
 return "impossibly large number of clusters on an FAT volume";
    }

    if (VAR_2)
 *VAR_2 = VAR_0;

    return ((void*)0);
}
