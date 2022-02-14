
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONGLONG ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_3__ {int SectorSize; scalar_t__ SectorOffset; scalar_t__ SectorNumber; int DriveNumber; } ;
typedef TYPE_1__ DISKCONTEXT ;
typedef int BOOLEAN ;
typedef int ARC_STATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static ARC_STATUS
FUNC_4(ULONG VAR_5, VOID* VAR_6, ULONG VAR_7, ULONG* VAR_8)
{
    DISKCONTEXT* VAR_9 = FUNC_1(VAR_5);
    UCHAR* VAR_10 = (UCHAR*)VAR_6;
    ULONG VAR_11, VAR_12, VAR_13, VAR_14;
    ULONGLONG VAR_15;
    BOOLEAN VAR_16;

    FUNC_0(VAR_1 > 0);

    VAR_12 = (VAR_7 + VAR_9->SectorSize - 1) / VAR_9->SectorSize;
    VAR_13 = VAR_1 / VAR_9->SectorSize;
    VAR_15 = VAR_9->SectorOffset + VAR_9->SectorNumber;



    FUNC_0(VAR_13 > 0);

    VAR_16 = VAR_4;

    while (VAR_12)
    {
        VAR_14 = VAR_12;
        if (VAR_14 > VAR_13)
            VAR_14 = VAR_13;

        VAR_16 = FUNC_2(VAR_9->DriveNumber,
                                         VAR_15,
                                         VAR_14,
                                         VAR_0);
        if (!VAR_16)
            break;

        VAR_11 = VAR_14 * VAR_9->SectorSize;
        if (VAR_11 > VAR_7)
            VAR_11 = VAR_7;

        FUNC_3(VAR_10, VAR_0, VAR_11);

        VAR_10 += VAR_11;
        VAR_7 -= VAR_11;
        VAR_15 += VAR_14;
        VAR_12 -= VAR_14;
    }

    *VAR_8 = (ULONG)((ULONG_PTR)VAR_10 - (ULONG_PTR)VAR_6);
    VAR_9->SectorNumber = VAR_15 - VAR_9->SectorOffset;

    return (!VAR_16) ? VAR_2 : VAR_3;
}
