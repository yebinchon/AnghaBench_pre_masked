
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef TYPE_2__* pbtrfs_file_info ;
typedef int VOID ;
typedef scalar_t__ ULONG ;
struct TYPE_7__ {int FsRoot; } ;
struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_6__ {int position; int inr; TYPE_1__ inode; } ;
typedef int ARC_STATUS ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_2 (int *,int ,int ,scalar_t__,int *) ;

ARC_STATUS FUNC_3(ULONG VAR_4, VOID *VAR_5, ULONG VAR_6, ULONG *VAR_7)
{
    pbtrfs_file_info VAR_8 = FUNC_0(VAR_4);
    u64 VAR_9;

    FUNC_1("BtrFsRead %lu, size=%lu \n", VAR_4, VAR_6);

    if (!VAR_6)
        VAR_6 = VAR_8->inode.size;

    if (VAR_6 > VAR_8->inode.size)
        VAR_6 = VAR_8->inode.size;

    VAR_9 = FUNC_2(&VAR_0->FsRoot, VAR_8->inr, VAR_8->position, VAR_6, VAR_5);
    if (VAR_9 == VAR_3)
    {
        FUNC_1("An error occured while reading file %lu\n", VAR_4);
        return VAR_1;
    }

    VAR_8->position += VAR_9;
    *VAR_7 = VAR_9;
    return VAR_2;
}
