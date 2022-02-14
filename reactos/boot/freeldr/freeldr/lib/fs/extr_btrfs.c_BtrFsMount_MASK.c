
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct btrfs_super_block {int dummy; } ;
struct btrfs_root_item {int level; int bytenr; } ;
struct btrfs_path {int dummy; } ;
struct BTRFS_INFO {int dummy; } ;
typedef int ULONG ;
struct TYPE_6__ {scalar_t__ magic; int root_level; int root; } ;
struct TYPE_7__ {struct btrfs_root_item FsRoot; TYPE_1__ SuperBlock; int DeviceId; } ;
typedef int DEVVTBL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (struct btrfs_root_item*,int ,int ,struct btrfs_path*) ;
 TYPE_2__* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_6 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,TYPE_1__*,int) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (struct btrfs_path*) ;
 scalar_t__ FUNC_11 (struct btrfs_path*) ;

const DEVVTBL *FUNC_12(ULONG VAR_7)
{
    struct btrfs_path VAR_8;
    struct btrfs_root_item VAR_9;

    FUNC_4("Enter BtrFsMount(%lu)\n", VAR_7);

    VAR_5 = FUNC_1(sizeof(struct BTRFS_INFO), VAR_6);
    if (!VAR_5)
        return ((void*)0);
    FUNC_3(VAR_5, sizeof(struct BTRFS_INFO));


    if (!FUNC_8(VAR_3, &VAR_5->SuperBlock, sizeof(struct btrfs_super_block)))
    {
        FUNC_2(VAR_5, VAR_6);
        return ((void*)0);
    }


    if (VAR_5->SuperBlock.magic != VAR_1)
    {
        FUNC_2(VAR_5, VAR_6);
        return ((void*)0);
    }

    VAR_5->DeviceId = VAR_7;
    FUNC_4("BtrFsMount(%lu) superblock magic ok\n", VAR_7);

    FUNC_5();

    FUNC_7();
    FUNC_6();


    VAR_9.bytenr = VAR_5->SuperBlock.root;
    VAR_9.level = VAR_5->SuperBlock.root_level;

    FUNC_10(&VAR_8);
    if (!FUNC_0(&VAR_9, VAR_0, VAR_2, &VAR_8))
    {
        FUNC_2(VAR_5, VAR_6);
        FUNC_9(&VAR_8);
        return ((void*)0);
    }

    VAR_5->FsRoot = *(struct btrfs_root_item *) FUNC_11(&VAR_8);

    FUNC_9(&VAR_8);

    FUNC_4("BtrFsMount(%lu) success\n", VAR_7);
    return &VAR_4;
}
