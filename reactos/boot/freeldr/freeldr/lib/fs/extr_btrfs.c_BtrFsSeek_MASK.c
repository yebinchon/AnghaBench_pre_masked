
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* pbtrfs_file_info ;
typedef int ULONG ;
struct TYPE_8__ {scalar_t__ QuadPart; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_7__ {scalar_t__ position; TYPE_1__ inode; } ;
typedef int SEEKMODE ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int ARC_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ) ;



ARC_STATUS FUNC_2(ULONG VAR_3, LARGE_INTEGER *VAR_4, SEEKMODE VAR_5)
{
    pbtrfs_file_info VAR_6 = FUNC_1(VAR_3);
    LARGE_INTEGER VAR_7 = *VAR_4;

    switch (VAR_5)
    {
        case 129:
            break;
        case 128:
            VAR_7.QuadPart += VAR_6->position;
            break;
        default:
            FUNC_0(VAR_2);
            return VAR_0;
    }

    if (VAR_7.QuadPart >= VAR_6->inode.size)
        return VAR_0;

    VAR_6->position = VAR_7.QuadPart;
    return VAR_1;
}
