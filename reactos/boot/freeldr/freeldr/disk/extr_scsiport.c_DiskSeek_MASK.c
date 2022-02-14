
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int SectorNumber; int SectorSize; int SectorCount; } ;
struct TYPE_5__ {int QuadPart; } ;
typedef int SEEKMODE ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef TYPE_2__ DISKCONTEXT ;
typedef int ARC_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ) ;



__attribute__((used)) static ARC_STATUS FUNC_2(ULONG VAR_3, LARGE_INTEGER* VAR_4, SEEKMODE VAR_5)
{
    DISKCONTEXT* VAR_6 = FUNC_1(VAR_3);
    LARGE_INTEGER VAR_7 = *VAR_4;

    switch (VAR_5)
    {
        case 129:
            break;
        case 128:
            VAR_7.QuadPart += (VAR_6->SectorNumber * VAR_6->SectorSize);
            break;
        default:
            FUNC_0(VAR_2);
            return VAR_0;
    }

    if (VAR_7.QuadPart & (VAR_6->SectorSize - 1))
        return VAR_0;


    VAR_7.QuadPart /= VAR_6->SectorSize;
    if (VAR_7.QuadPart >= VAR_6->SectorCount)
        return VAR_0;

    VAR_6->SectorNumber = VAR_7.QuadPart;
    return VAR_1;
}
