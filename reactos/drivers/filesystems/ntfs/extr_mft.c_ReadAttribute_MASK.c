
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_9__ {scalar_t__ BytesPerCluster; int BytesPerSector; int BytesPerFileRecord; } ;
struct TYPE_12__ {TYPE_2__ NtfsInfo; int StorageDevice; } ;
struct TYPE_11__ {scalar_t__* CacheRun; scalar_t__ CacheRunLastLCN; int CacheRunStartLCN; scalar_t__ CacheRunLength; scalar_t__ CacheRunCurrentOffset; scalar_t__ CacheRunOffset; TYPE_3__* pRecord; int DataRunsMCB; } ;
struct TYPE_8__ {scalar_t__ ValueLength; scalar_t__ ValueOffset; } ;
struct TYPE_10__ {scalar_t__ IsNonResident; TYPE_1__ Resident; } ;
typedef int PVOID ;
typedef scalar_t__* PUCHAR ;
typedef TYPE_4__* PNTFS_ATTR_CONTEXT ;
typedef TYPE_5__* PDEVICE_EXTENSION ;
typedef scalar_t__ PCHAR ;
typedef int NTSTATUS ;
typedef int LONGLONG ;


 int FUNC_0 (int *,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__* FUNC_1 (scalar_t__*,int*,scalar_t__*) ;
 scalar_t__* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int,scalar_t__,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

ULONG
FUNC_9(PDEVICE_EXTENSION VAR_5,
              PNTFS_ATTR_CONTEXT VAR_6,
              ULONGLONG VAR_7,
              PCHAR VAR_8,
              ULONG VAR_9)
{
    ULONGLONG VAR_10;
    PUCHAR VAR_11;
    LONGLONG VAR_12;
    ULONGLONG VAR_13;
    LONGLONG VAR_14;
    ULONGLONG VAR_15;
    ULONG VAR_16;
    ULONG VAR_17;
    NTSTATUS VAR_18;


    PUCHAR VAR_19;

    if (!VAR_6->pRecord->IsNonResident)
    {


        ULONG VAR_20 = (ULONG)VAR_7;


        if (VAR_7 > VAR_6->pRecord->Resident.ValueLength)
            return 0;
        if (VAR_7 + VAR_9 > VAR_6->pRecord->Resident.ValueLength)
            VAR_9 = (ULONG)(VAR_6->pRecord->Resident.ValueLength - VAR_7);

        FUNC_6(VAR_8, (PVOID)((ULONG_PTR)VAR_6->pRecord + VAR_6->pRecord->Resident.ValueOffset + VAR_20), VAR_9);
        return VAR_9;
    }
    VAR_17 = 0;



    if (0)
    {
        VAR_11 = VAR_6->CacheRun;
        VAR_10 = VAR_6->CacheRunLastLCN;
        VAR_14 = VAR_6->CacheRunStartLCN;
        VAR_13 = VAR_6->CacheRunLength;
        VAR_15 = VAR_6->CacheRunCurrentOffset;
    }
    else
    {

        ULONG VAR_21;
        VAR_19 = FUNC_2(VAR_1, VAR_5->NtfsInfo.BytesPerFileRecord, VAR_4);
        if (VAR_19 == ((void*)0))
        {
            return VAR_2;
        }

        VAR_10 = 0;
        VAR_15 = 0;


        FUNC_0(&VAR_6->DataRunsMCB,
                                  VAR_19,
                                  VAR_5->NtfsInfo.BytesPerFileRecord,
                                  &VAR_21);

        VAR_11 = VAR_19;

        while (1)
        {
            VAR_11 = FUNC_1(VAR_11, &VAR_12, &VAR_13);
            if (VAR_12 != -1)
            {

                VAR_14 = VAR_10 + VAR_12;
                VAR_10 = VAR_14;
            }
            else
            {

                VAR_14 = -1;
            }

            if (VAR_7 >= VAR_15 &&
                VAR_7 < VAR_15 + (VAR_13 * VAR_5->NtfsInfo.BytesPerCluster))
            {
                break;
            }

            if (*VAR_11 == 0)
            {
                FUNC_3(VAR_19, VAR_4);
                return VAR_17;
            }

            VAR_15 += VAR_13 * VAR_5->NtfsInfo.BytesPerCluster;
        }
    }





    VAR_16 = (ULONG)FUNC_8(VAR_13 * VAR_5->NtfsInfo.BytesPerCluster - (VAR_7 - VAR_15), VAR_9);
    if (VAR_14 == -1)
    {
        FUNC_7(VAR_8, VAR_16);
        VAR_18 = VAR_3;
    }
    else
    {
        VAR_18 = FUNC_5(VAR_5->StorageDevice,
                              VAR_14 * VAR_5->NtfsInfo.BytesPerCluster + VAR_7 - VAR_15,
                              VAR_16,
                              VAR_5->NtfsInfo.BytesPerSector,
                              (PVOID)VAR_8,
                              VAR_0);
    }
    if (FUNC_4(VAR_18))
    {
        VAR_9 -= VAR_16;
        VAR_8 += VAR_16;
        VAR_17 += VAR_16;

        if (VAR_16 == VAR_13 * VAR_5->NtfsInfo.BytesPerCluster - (VAR_7 - VAR_15))
        {
            VAR_15 += VAR_13 * VAR_5->NtfsInfo.BytesPerCluster;
            VAR_11 = FUNC_1(VAR_11, &VAR_12, &VAR_13);
            if (VAR_12 != (ULONGLONG)-1)
            {
                VAR_14 = VAR_10 + VAR_12;
                VAR_10 = VAR_14;
            }
            else
                VAR_14 = -1;
        }

        while (VAR_9 > 0)
        {
            VAR_16 = (ULONG)FUNC_8(VAR_13 * VAR_5->NtfsInfo.BytesPerCluster, VAR_9);
            if (VAR_14 == -1)
                FUNC_7(VAR_8, VAR_16);
            else
            {
                VAR_18 = FUNC_5(VAR_5->StorageDevice,
                                      VAR_14 * VAR_5->NtfsInfo.BytesPerCluster,
                                      VAR_16,
                                      VAR_5->NtfsInfo.BytesPerSector,
                                      (PVOID)VAR_8,
                                      VAR_0);
                if (!FUNC_4(VAR_18))
                    break;
            }

            VAR_9 -= VAR_16;
            VAR_8 += VAR_16;
            VAR_17 += VAR_16;


            if (VAR_9 == 0 && VAR_16 != VAR_13 * VAR_5->NtfsInfo.BytesPerCluster)
                break;





            if (*VAR_11 == 0)
                break;
            VAR_15 += VAR_13 * VAR_5->NtfsInfo.BytesPerCluster;
            VAR_11 = FUNC_1(VAR_11, &VAR_12, &VAR_13);
            if (VAR_12 != -1)
            {

                VAR_14 = VAR_10 + VAR_12;
                VAR_10 = VAR_14;
            }
            else
            {

                VAR_14 = -1;
            }
        }

    }


    if (VAR_6->pRecord->IsNonResident)
        FUNC_3(VAR_19, VAR_4);

    VAR_6->CacheRun = VAR_11;
    VAR_6->CacheRunOffset = VAR_7 + VAR_17;
    VAR_6->CacheRunStartLCN = VAR_14;
    VAR_6->CacheRunLength = VAR_13;
    VAR_6->CacheRunLastLCN = VAR_10;
    VAR_6->CacheRunCurrentOffset = VAR_15;

    return VAR_17;
}
