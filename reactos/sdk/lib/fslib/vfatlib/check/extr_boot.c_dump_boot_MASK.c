
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct boot_sector {int* system_id; int media; int fats; int total_sect; int sectors; int hidden; int heads; int secs_track; int reserved; int sector_size; } ;
struct TYPE_3__ {unsigned short cluster_size; int fat_bits; unsigned short root_entries; scalar_t__ data_clusters; scalar_t__ data_start; scalar_t__ root_cluster; scalar_t__ root_start; scalar_t__ fat_size; scalar_t__ fat_start; } ;
typedef TYPE_1__ DOS_FS ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_6(DOS_FS * VAR_1, struct boot_sector *VAR_2, unsigned VAR_3)
{
    unsigned short VAR_4;

    FUNC_4("Boot sector contents:\n");
    if (!VAR_0) {
 char VAR_5[9];
 FUNC_5(VAR_5, (const char *)VAR_2->system_id, 8);
 VAR_5[8] = 0;
 FUNC_4("System ID \"%s\"\n", VAR_5);
    } else {


 FUNC_4("Serial number 0x%x\n",
        VAR_2->system_id[5] | (VAR_2->system_id[6] << 8) | (VAR_2->
          system_id[7] << 16));
    }
    FUNC_4("Media byte 0x%02x (%s)\n", VAR_2->media, FUNC_1(VAR_2->media));
    FUNC_4("%10d bytes per logical sector\n", FUNC_0(VAR_2->sector_size));
    FUNC_4("%10d bytes per cluster\n", VAR_1->cluster_size);
    FUNC_4("%10d reserved sector%s\n", FUNC_2(VAR_2->reserved),
    FUNC_2(VAR_2->reserved) == 1 ? "" : "s");
    FUNC_4("First FAT starts at byte %llu (sector %llu)\n",
    (unsigned long long)VAR_1->fat_start,
    (unsigned long long)VAR_1->fat_start / VAR_3);
    FUNC_4("%10d FATs, %d bit entries\n", VAR_2->fats, VAR_1->fat_bits);
    FUNC_4("%10lld bytes per FAT (= %llu sectors)\n", (long long)VAR_1->fat_size,
    (long long)VAR_1->fat_size / VAR_3);
    if (!VAR_1->root_cluster) {
 FUNC_4("Root directory starts at byte %llu (sector %llu)\n",
        (unsigned long long)VAR_1->root_start,
        (unsigned long long)VAR_1->root_start / VAR_3);
 FUNC_4("%10d root directory entries\n", VAR_1->root_entries);
    } else {
 FUNC_4("Root directory start at cluster %lu (arbitrary size)\n",
        (unsigned long)VAR_1->root_cluster);
    }
    FUNC_4("Data area starts at byte %llu (sector %llu)\n",
    (unsigned long long)VAR_1->data_start,
    (unsigned long long)VAR_1->data_start / VAR_3);
    FUNC_4("%10lu data clusters (%llu bytes)\n",
    (unsigned long)VAR_1->data_clusters,
    (unsigned long long)VAR_1->data_clusters * VAR_1->cluster_size);
    FUNC_4("%u sectors/track, %u heads\n", FUNC_2(VAR_2->secs_track),
    FUNC_2(VAR_2->heads));
    FUNC_4("%10u hidden sectors\n", VAR_0 ?

    (((unsigned char *)&VAR_2->hidden)[0] |
     ((unsigned char *)&VAR_2->hidden)[1] << 8) : FUNC_3(VAR_2->hidden));
    VAR_4 = FUNC_0(VAR_2->sectors);
    FUNC_4("%10u sectors total\n", VAR_4 ? VAR_4 : FUNC_3(VAR_2->total_sect));
}
