
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntfs_boot_sector {int NTFS_bsCode; int NTFS_bsHead; } ;
struct fat_boot_sector {int FAT_bsCode; int FAT_bsHead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int *,int ) ;

void FUNC_1(void *VAR_7, int VAR_8)
{
    if (VAR_8 == VAR_5) {
 struct fat_boot_sector *VAR_9 = VAR_7;
 const struct fat_boot_sector *VAR_10 =
     (const struct fat_boot_sector *)VAR_6;

 FUNC_0(&VAR_9->FAT_bsHead, &VAR_10->FAT_bsHead, VAR_1);
 FUNC_0(&VAR_9->FAT_bsCode, &VAR_10->FAT_bsCode, VAR_0);
    } else if (VAR_8 == VAR_2) {
 struct ntfs_boot_sector *VAR_11 = VAR_7;
 const struct ntfs_boot_sector *VAR_12 =
     (const struct ntfs_boot_sector *)VAR_6;

 FUNC_0(&VAR_11->NTFS_bsHead, &VAR_12->NTFS_bsHead, VAR_4);
 FUNC_0(&VAR_11->NTFS_bsCode, &VAR_12->NTFS_bsCode, VAR_3);
    }
}
