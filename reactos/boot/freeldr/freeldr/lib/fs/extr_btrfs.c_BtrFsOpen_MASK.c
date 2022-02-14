
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int pbtrfs_file_info ;
struct TYPE_8__ {int size; } ;
struct TYPE_6__ {scalar_t__ position; int inr; TYPE_4__ inode; } ;
typedef TYPE_1__ btrfs_file_info ;
typedef int ULONG ;
struct TYPE_7__ {int root_dirid; } ;
struct TYPE_9__ {TYPE_3__ FsRoot; } ;
typedef scalar_t__ OPENMODE ;
typedef int CHAR ;
typedef int ARC_STATUS ;


 scalar_t__ VAR_0 ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (TYPE_3__*,int ,int *,scalar_t__*,TYPE_4__*,int) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;

ARC_STATUS FUNC_5(CHAR *VAR_10, OPENMODE VAR_11, ULONG *VAR_12)
{
    u64 VAR_13;
    u8 VAR_14;

    btrfs_file_info VAR_15;
    pbtrfs_file_info VAR_16;

    FUNC_2("BtrFsOpen %s\n", *VAR_10);

    if (VAR_11 != VAR_8)
        return VAR_2;

    VAR_13 = FUNC_3(&VAR_1->FsRoot, VAR_1->FsRoot.root_dirid, VAR_10, &VAR_14, &VAR_15.inode, 40);

    if (VAR_13 == VAR_7)
    {
        FUNC_2("Cannot lookup file %s\n", *VAR_10);
        return VAR_4;
    }

    if (VAR_14 != VAR_0)
    {
        FUNC_2("Not a regular file: %s\n", *VAR_10);
        return VAR_3;
    }

    FUNC_2("found inode inr=%llu size=%llu\n", VAR_13, VAR_15.inode.size);

    VAR_15.inr = VAR_13;
    VAR_15.position = 0;

    VAR_16 = FUNC_0(sizeof(btrfs_file_info), VAR_9);
    if (!VAR_16)
        return VAR_5;

    FUNC_4(VAR_16, &VAR_15, sizeof(btrfs_file_info));

    FUNC_1(*VAR_12, VAR_16);
    return VAR_6;
}
