
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s_magic; scalar_t__* s_volume_name; int * s_uuid; int s_def_resgid; int s_def_resuid; int s_rev_level; int s_creator_os; int s_checkinterval; int s_minor_rev_level; int s_errors; int s_state; int s_max_mnt_count; int s_mnt_count; int s_inodes_per_group; int s_frags_per_group; int s_blocks_per_group; int s_log_frag_size; int s_log_block_size; int s_first_data_block; int s_free_inodes_count; int s_free_blocks_count; int s_r_blocks_count; int s_blocks_count; int s_inodes_count; } ;
typedef TYPE_1__* PEXT2_SUPER_BLOCK ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;

void FUNC_2(PEXT2_SUPER_BLOCK VAR_1)
{
    int VAR_2;

    FUNC_0("\nExt2 Super Block Details ...\n\n");
    FUNC_0("     Inode Count: %lu\n", VAR_1->s_inodes_count);
    FUNC_0("     Block Count: %lu\n", VAR_1->s_blocks_count);
    FUNC_0("     Reserved Block Count: %lu\n", VAR_1->s_r_blocks_count);
    FUNC_0("     Free Blocks: %lu\n", VAR_1->s_free_blocks_count);
    FUNC_0("     Free Inodes: %lu\n", VAR_1->s_free_inodes_count);
    FUNC_0("     First Data Block: %lu\n", VAR_1->s_first_data_block);
    FUNC_0("     Log Block Size: %lu\n", VAR_1->s_log_block_size);
    FUNC_0("     Log Frag Size: %ld\n", VAR_1->s_log_frag_size);
    FUNC_0("     Blocks per Group: %lu\n", VAR_1->s_blocks_per_group);
    FUNC_0("     Fragments per Group: %lu\n", VAR_1->s_frags_per_group);
    FUNC_0("     Inodes per Group: %lu\n", VAR_1->s_inodes_per_group);


    FUNC_0("     Mount Count: %u\n", VAR_1->s_mnt_count);
    FUNC_0("     Max Mount Count: %d\n", VAR_1->s_max_mnt_count);
    FUNC_0("     Magic Number: %X  (%s)\n", VAR_1->s_magic,
        VAR_1->s_magic == VAR_0 ? "OK" : "BAD");
    FUNC_0("     File System State: %X\n", VAR_1->s_state);
    FUNC_0("     Error Behaviour: %X\n", VAR_1->s_errors);
    FUNC_0("     Minor rev: %u\n", VAR_1->s_minor_rev_level);

    FUNC_0("     Check Interval: %lu\n", VAR_1->s_checkinterval);
    FUNC_0("     Creator OS: %lu\n", VAR_1->s_creator_os);
    FUNC_0("     Revision Level: %lu\n", VAR_1->s_rev_level);
    FUNC_0("     Reserved Block Default UID: %u\n", VAR_1->s_def_resuid);
    FUNC_0("     Reserved Block Default GID: %u\n", VAR_1->s_def_resgid);
    FUNC_0("     uuid = ");
    for (VAR_2=0; VAR_2 < 16; VAR_2++)
        FUNC_1("%x ", VAR_1->s_uuid[VAR_2]);
    FUNC_1("\n");

    FUNC_0("     volume label name: ");
    for (VAR_2=0; VAR_2 < 16; VAR_2++)
    {
        if (VAR_1->s_volume_name[VAR_2] == 0)
            break;
        FUNC_1("%c", VAR_1->s_volume_name[VAR_2]);
    }
    FUNC_1("\n");

    FUNC_0("\n\n");
}
