
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_6__ {scalar_t__ HighPart; scalar_t__ LowPart; int QuadPart; } ;
struct TYPE_5__ {scalar_t__ FilePointer; scalar_t__ FileSize; } ;
typedef int SEEKMODE ;
typedef TYPE_1__* PISO_FILE_INFO ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int ARC_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ) ;



ARC_STATUS FUNC_2(ULONG VAR_3, LARGE_INTEGER* VAR_4, SEEKMODE VAR_5)
{
    PISO_FILE_INFO VAR_6 = FUNC_1(VAR_3);
    LARGE_INTEGER VAR_7 = *VAR_4;

    switch (VAR_5)
    {
        case 129:
            break;
        case 128:
            VAR_7.QuadPart += (ULONGLONG)VAR_6->FilePointer;
            break;
        default:
            FUNC_0(VAR_2);
            return VAR_0;
    }

    if (VAR_7.HighPart != 0)
        return VAR_0;
    if (VAR_7.LowPart >= VAR_6->FileSize)
        return VAR_0;

    VAR_6->FilePointer = VAR_7.LowPart;
    return VAR_1;
}
