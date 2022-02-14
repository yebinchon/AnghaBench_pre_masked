
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_super_block {int flags; int num_devices; int chunk_root_level; int chunk_root; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_disk_key {scalar_t__ offset; int type; int objectid; } ;
struct btrfs_chunk {int dummy; } ;
struct TYPE_2__ {struct btrfs_super_block SuperBlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,struct btrfs_disk_key*,struct btrfs_path*) ;
 scalar_t__ FUNC_2 (struct btrfs_disk_key*,int ) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (int ,struct btrfs_chunk*) ;
 int FUNC_6 (struct btrfs_disk_key*,struct btrfs_path*) ;
 scalar_t__ FUNC_7 (struct btrfs_path*) ;
 int FUNC_8 (struct btrfs_path*) ;

__attribute__((used)) static void FUNC_9()
{
    struct btrfs_super_block *VAR_6 = &VAR_5->SuperBlock;
    struct btrfs_disk_key VAR_7;
    struct btrfs_disk_key VAR_8;
    struct btrfs_chunk *VAR_9;
    struct btrfs_path VAR_10;

    if (!(VAR_6->flags & VAR_4))
    {
        if (VAR_6->num_devices > 1)
            FUNC_0("warning: only support single device btrfs\n");

        VAR_7.objectid = VAR_1;
        VAR_7.type = VAR_2;


        VAR_8.objectid = VAR_3;
        VAR_8.type = VAR_0;
        VAR_8.offset = 0;
        FUNC_4(&VAR_10);
        FUNC_1(VAR_6->chunk_root, VAR_6->chunk_root_level, &VAR_8, &VAR_10);
        do
        {



            if (!FUNC_2(&VAR_7, FUNC_8(&VAR_10)))
                continue;
            if (FUNC_2(&VAR_8, FUNC_8(&VAR_10)))
                break;

            VAR_9 = (struct btrfs_chunk *) (FUNC_7(&VAR_10));
            FUNC_5(FUNC_8(&VAR_10), VAR_9);
        } while (!FUNC_6(&VAR_8, &VAR_10));
        FUNC_3(&VAR_10);
    }
}
