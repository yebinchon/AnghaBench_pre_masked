
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct btrfs_super_block {scalar_t__ sys_chunk_array_size; scalar_t__ sys_chunk_array; } ;
struct btrfs_disk_key {int type; int offset; int objectid; } ;
struct btrfs_chunk {scalar_t__ length; scalar_t__ owner; scalar_t__ stripe_len; scalar_t__ type; scalar_t__ io_align; scalar_t__ io_width; scalar_t__ sector_size; scalar_t__ num_stripes; scalar_t__ sub_stripes; } ;
struct TYPE_2__ {struct btrfs_super_block SuperBlock; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct btrfs_disk_key const*,struct btrfs_chunk*) ;

__attribute__((used)) static void FUNC_3()
{
    struct btrfs_super_block *VAR_1 = &VAR_0->SuperBlock;
    struct btrfs_disk_key *VAR_2;
    struct btrfs_chunk *VAR_3;
    u16 VAR_4;


    FUNC_0("reading chunk array\n-----------------------------\n");
    VAR_4 = 0;
    while (VAR_4 < VAR_1->sys_chunk_array_size)
    {
        VAR_2 = (struct btrfs_disk_key *) (VAR_1->sys_chunk_array + VAR_4);
        FUNC_0("chunk key objectid: %llx, offset: %llx, type: %u\n", VAR_2->objectid, VAR_2->offset, VAR_2->type);
        VAR_4 += sizeof(*VAR_2);
        VAR_3 = (struct btrfs_chunk *) (VAR_1->sys_chunk_array + VAR_4);
        FUNC_0("chunk length: %llx\n", VAR_3->length);
        FUNC_0("chunk owner: %llu\n", VAR_3->owner);
        FUNC_0("chunk stripe_len: %llx\n", VAR_3->stripe_len);
        FUNC_0("chunk type: %llu\n", VAR_3->type);
        FUNC_0("chunk io_align: %u\n", VAR_3->io_align);
        FUNC_0("chunk io_width: %u\n", VAR_3->io_width);
        FUNC_0("chunk sector_size: %u\n", VAR_3->sector_size);
        FUNC_0("chunk num_stripes: %u\n", VAR_3->num_stripes);
        FUNC_0("chunk sub_stripes: %u\n", VAR_3->sub_stripes);

        VAR_4 += FUNC_1(VAR_3->num_stripes);
        FUNC_0("read_sys_chunk_array() cur=%d\n", VAR_4);
        FUNC_2((const struct btrfs_disk_key *) VAR_2, VAR_3);
    }
}
