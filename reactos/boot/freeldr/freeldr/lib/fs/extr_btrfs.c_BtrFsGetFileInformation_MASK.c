
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_4__* pbtrfs_file_info ;
typedef int ULONG ;
struct TYPE_11__ {int QuadPart; } ;
struct TYPE_10__ {int QuadPart; } ;
struct TYPE_13__ {TYPE_3__ CurrentAddress; TYPE_2__ EndingAddress; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_12__ {int position; TYPE_1__ inode; } ;
typedef TYPE_5__ FILEINFORMATION ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (char*,int ,int ,int ) ;

ARC_STATUS FUNC_3(ULONG VAR_1, FILEINFORMATION *VAR_2)
{
    pbtrfs_file_info VAR_3 = FUNC_0(VAR_1);

    FUNC_1(VAR_2, sizeof(*VAR_2));
    VAR_2->EndingAddress.QuadPart = VAR_3->inode.size;
    VAR_2->CurrentAddress.QuadPart = VAR_3->position;

    FUNC_2("BtrFsGetFileInformation(%lu) -> FileSize = %llu, FilePointer = 0x%llx\n",
          VAR_1, VAR_2->EndingAddress.QuadPart, VAR_2->CurrentAddress.QuadPart);

    return VAR_0;
}
