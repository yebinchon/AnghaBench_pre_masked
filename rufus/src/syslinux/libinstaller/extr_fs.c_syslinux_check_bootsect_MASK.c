
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ntfs_boot_sector {int dummy; } ;
struct fat_boot_sector {int bsBytesPerSec; int bsMedia; } ;


 int VAR_0 ;
 char* FUNC_0 (void const*,int*) ;
 char* FUNC_1 (void const*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct ntfs_boot_sector*) ;

const char *FUNC_5(const void *VAR_1, int *VAR_2)
{
    uint8_t VAR_3;
    int VAR_4;
    const struct fat_boot_sector *VAR_5 = VAR_1;
    const char *VAR_6;

    VAR_3 = FUNC_3(&VAR_5->bsMedia);

    if (VAR_3 != 0xF0 && VAR_3 < 0xF8)
 return "invalid media signature (not an FAT/NTFS volume?)";

    VAR_4 = FUNC_2(&VAR_5->bsBytesPerSec);
    if (VAR_4 == VAR_0) ;
    else if (VAR_4 >= 512 && VAR_4 <= 4096 &&
      (VAR_4 & (VAR_4 - 1)) == 0)
 return "unsupported sectors size";
    else
 return "impossible sector size";

    if (FUNC_4((struct ntfs_boot_sector *)VAR_1))
 VAR_6 = FUNC_1(VAR_1, VAR_2);
    else
 VAR_6 = FUNC_0(VAR_1, VAR_2);

    return VAR_6;
}
