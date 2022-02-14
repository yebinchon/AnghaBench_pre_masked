
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct boot_sector_16 {int extended_sig; int label; int fs_type; scalar_t__ serial; } ;
struct boot_sector {int extended_sig; int label; int fs_type; scalar_t__ serial; } ;
typedef int b16 ;
typedef int b ;
struct TYPE_3__ {int fat_bits; scalar_t__ backupboot_start; } ;
typedef TYPE_1__ DOS_FS ;


 int FUNC_0 (int ,int,struct boot_sector_16*) ;
 int FUNC_1 (scalar_t__,int,struct boot_sector_16*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(DOS_FS * VAR_0, char *VAR_1)
{
    if (VAR_0->fat_bits == 12 || VAR_0->fat_bits == 16) {
 struct boot_sector_16 VAR_2;

 FUNC_0(0, sizeof(VAR_2), &VAR_2);
 if (VAR_2 != 0x29) {
     VAR_2 = 0x29;
     VAR_2 = 0;
     FUNC_2(VAR_2, VAR_0->fat_bits == 12 ? "FAT12   " : "FAT16   ",
      8);
 }
 FUNC_2(VAR_2, VAR_1, 11);
 FUNC_1(0, sizeof(VAR_2), &VAR_2);
    } else if (VAR_0->fat_bits == 32) {
 struct boot_sector VAR_3;

 FUNC_0(0, sizeof(VAR_3), &VAR_3);
 if (VAR_3.extended_sig != 0x29) {
     VAR_3.extended_sig = 0x29;
     VAR_3.serial = 0;
     FUNC_2(VAR_3.fs_type, "FAT32   ", 8);
 }
 FUNC_2(VAR_3.label, VAR_1, 11);
 FUNC_1(0, sizeof(VAR_3), &VAR_3);
 if (VAR_0->backupboot_start)
     FUNC_1(VAR_0->backupboot_start, sizeof(VAR_3), &VAR_3);
    }
}
