
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {scalar_t__ QuadPart; } ;
struct TYPE_7__ {scalar_t__ Offset; TYPE_1__* DataContext; } ;
struct TYPE_6__ {int Record; } ;
typedef int SEEKMODE ;
typedef TYPE_2__* PNTFS_FILE_HANDLE ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int ARC_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;



ARC_STATUS FUNC_3(ULONG VAR_3, LARGE_INTEGER* VAR_4, SEEKMODE VAR_5)
{
    PNTFS_FILE_HANDLE VAR_6 = FUNC_1(VAR_3);
    LARGE_INTEGER VAR_7 = *VAR_4;

    switch (VAR_5)
    {
        case 129:
            break;
        case 128:
            VAR_7.QuadPart += VAR_6->Offset;
            break;
        default:
            FUNC_0(VAR_2);
            return VAR_0;
    }

    if (VAR_7.QuadPart >= FUNC_2(&VAR_6->DataContext->Record))
        return VAR_0;

    VAR_6->Offset = VAR_7.QuadPart;
    return VAR_1;
}
