
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct boot_sector_16 {int extended_sig; int * label; } ;
struct boot_sector {unsigned int cluster_size; int fats; int extended_sig; int heads; int secs_track; int label; int backup_boot; scalar_t__ root_cluster; scalar_t__ fat32_length; int fat_length; int dir_entries; int reserved; scalar_t__ total_sect; int sectors; int sector_size; } ;
typedef unsigned int off_t ;
typedef int b ;
struct TYPE_7__ {unsigned int cluster_size; int nfats; unsigned int fat_start; unsigned int root_start; int root_entries; unsigned int data_start; unsigned int data_clusters; unsigned int root_cluster; int free_clusters; int fat_bits; unsigned int backupboot_start; int eff_fat_bits; unsigned int fat_size; int * label; scalar_t__ fsinfo_start; } ;
typedef TYPE_1__ DOS_FS ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,struct boot_sector*,unsigned int) ;
 int FUNC_4 (TYPE_1__*,struct boot_sector*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_1__*,struct boot_sector*,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int,struct boot_sector*) ;
 int FUNC_9 (unsigned int,unsigned int) ;
 unsigned int FUNC_10 (int ) ;
 unsigned int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (TYPE_1__*,struct boot_sector*,unsigned int) ;
 scalar_t__ VAR_6 ;

void FUNC_15(DOS_FS * VAR_7)
{
    struct boot_sector VAR_8;
    unsigned VAR_9;
    unsigned int VAR_10, VAR_11;
    off_t VAR_12;
    unsigned VAR_13;
    off_t VAR_14;

    FUNC_8(0, sizeof(VAR_8), &VAR_8);
    VAR_10 = FUNC_0(VAR_8.sector_size);
    if (!VAR_10)
 FUNC_5("Logical sector size is zero.");




    if (VAR_10 & (VAR_4 - 1))
 FUNC_5("Logical sector size (%d bytes) is not a multiple of the physical "
     "sector size.", VAR_10);

    VAR_7->cluster_size = VAR_8.cluster_size * VAR_10;
    if (!VAR_7->cluster_size)
 FUNC_5("Cluster size is zero.");
    if (VAR_8.fats != 2 && VAR_8.fats != 1)
 FUNC_5("Currently, only 1 or 2 FATs are supported, not %d.\n", VAR_8.fats);
    VAR_7->nfats = VAR_8.fats;
    VAR_11 = FUNC_0(VAR_8.sectors);
    VAR_9 = VAR_11 ? VAR_11 : FUNC_11(VAR_8.total_sect);
    if (VAR_6)
 FUNC_13("Checking we can access the last sector of the filesystem\n");

    FUNC_9((off_t)((VAR_9 & ~1) - 1) * VAR_10,
     VAR_10);

    VAR_12 = FUNC_10(VAR_8.fat_length) ?
 FUNC_10(VAR_8.fat_length) : FUNC_11(VAR_8.fat32_length);
    if (!VAR_12)
 FUNC_5("FAT size is zero.");

    VAR_7->fat_start = (off_t)FUNC_10(VAR_8.reserved) * VAR_10;
    VAR_7->root_start = ((off_t)FUNC_10(VAR_8.reserved) + VAR_8.fats * VAR_12) *
 VAR_10;
    VAR_7->root_entries = FUNC_0(VAR_8.dir_entries);
    VAR_7->data_start = VAR_7->root_start + FUNC_1(VAR_7->root_entries <<
       VAR_2,
       VAR_10);

    VAR_14 = (off_t)VAR_9 * VAR_10 - VAR_7->data_start;
    if (VAR_14 < VAR_7->cluster_size)
 FUNC_5("Filesystem has no space for any data clusters");

    VAR_7->data_clusters = VAR_14 / VAR_7->cluster_size;
    VAR_7->root_cluster = 0;
    VAR_7->fsinfo_start = 0;
    VAR_7->free_clusters = -1;
    if (!VAR_8.fat_length && VAR_8.fat32_length) {
 VAR_7->fat_bits = 32;
 VAR_7->root_cluster = FUNC_11(VAR_8.root_cluster);
 if (!VAR_7->root_cluster && VAR_7->root_entries)





     FUNC_13("Warning: FAT32 root dir not in cluster chain! "
     "Compatibility mode...\n");
 else if (!VAR_7->root_cluster && !VAR_7->root_entries)
     FUNC_5("No root directory!");
 else if (VAR_7->root_cluster && VAR_7->root_entries)
     FUNC_13("Warning: FAT32 root dir is in a cluster chain, but "
     "a separate root dir\n"
     "  area is defined. Cannot fix this easily.\n");
 if (VAR_7->data_clusters < VAR_1)
     FUNC_13("Warning: Filesystem is FAT32 according to fat_length "
     "and fat32_length fields,\n"
     "  but has only %lu clusters, less than the required "
     "minimum of %d.\n"
     "  This may lead to problems on some systems.\n",
     (unsigned long)VAR_7->data_clusters, VAR_1);

 FUNC_4(VAR_7, &VAR_8);
 VAR_7->backupboot_start = FUNC_10(VAR_8.backup_boot) * VAR_10;
 FUNC_3(VAR_7, &VAR_8, VAR_10);

 FUNC_14(VAR_7, &VAR_8, VAR_10);
    } else if (!VAR_5) {


 VAR_7->fat_bits = (VAR_7->data_clusters >= VAR_0) ? 16 : 12;
 if (VAR_7->data_clusters >= VAR_1)
     FUNC_5("Too many clusters (%lu) for FAT16 filesystem.",
      (unsigned long)VAR_7->data_clusters);
 FUNC_4(VAR_7, &VAR_8);
    } else {


 VAR_7->fat_bits = 16;


 if (VAR_7->data_clusters + 2 > VAR_12 * VAR_10 * 8 / 16 ||

     (VAR_9 == 720 || VAR_9 == 1440 ||
      VAR_9 == 2880))
     VAR_7->fat_bits = 12;
    }

    VAR_7->eff_fat_bits = (VAR_7->fat_bits == 32) ? 28 : VAR_7->fat_bits;
    VAR_7->fat_size = VAR_12 * VAR_10;

    VAR_7->label = FUNC_2(12, sizeof(uint8_t));
    if (VAR_7->fat_bits == 12 || VAR_7->fat_bits == 16) {
 struct boot_sector_16 *VAR_15 = (struct boot_sector_16 *)&VAR_8;
 if (VAR_15->extended_sig == 0x29)
     FUNC_12(VAR_7->label, VAR_15->label, 11);
 else




     VAR_7->label = ((void*)0);



    } else if (VAR_7->fat_bits == 32) {
 if (VAR_8.extended_sig == 0x29)
     FUNC_12(VAR_7->label, &VAR_8.label, 11);
 else




     VAR_7->label = ((void*)0);



    }

    VAR_13 = (uint64_t)VAR_7->fat_size * 8 / VAR_7->fat_bits;
    if (VAR_7->data_clusters > VAR_13 - 2)
 FUNC_5("Filesystem has %u clusters but only space for %u FAT entries.",
     VAR_7->data_clusters, VAR_13 - 2);
    if (!VAR_7->root_entries && !VAR_7->root_cluster)
 FUNC_5("Root directory has zero size.");
    if (VAR_7->root_entries & (VAR_3 - 1))
 FUNC_5("Root directory (%d entries) doesn't span an integral number of "
     "sectors.", VAR_7->root_entries);
    if (VAR_10 & (VAR_4 - 1))
 FUNC_5("Logical sector size (%u bytes) is not a multiple of the physical "
     "sector size.", VAR_10);





    if (VAR_6)
 FUNC_6(VAR_7, &VAR_8, VAR_10);
}
