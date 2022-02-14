
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_26__ {int FileMFTIndex; TYPE_19__* pRecord; int DataRunsMCB; } ;
struct TYPE_23__ {int HighestVCN; scalar_t__ MappingPairsOffset; } ;
struct TYPE_25__ {scalar_t__ Type; scalar_t__ Length; TYPE_3__ NonResident; } ;
struct TYPE_21__ {int ClusterCount; int BytesPerCluster; int BytesPerFileRecord; int BytesPerSector; } ;
struct TYPE_24__ {TYPE_1__ NtfsInfo; int FileRecLookasideList; } ;
struct TYPE_22__ {int HighestVCN; scalar_t__ MappingPairsOffset; } ;
struct TYPE_20__ {scalar_t__ Length; TYPE_2__ NonResident; int IsNonResident; } ;
typedef int RTL_BITMAP ;
typedef int PVOID ;
typedef int PULONG ;
typedef int * PUCHAR ;
typedef TYPE_4__* PNTFS_VCB ;
typedef TYPE_5__* PNTFS_ATTR_RECORD ;
typedef TYPE_6__* PNTFS_ATTR_CONTEXT ;
typedef int * PFILE_RECORD_HEADER ;
typedef int PCHAR ;
typedef int NTSTATUS ;
typedef int LONGLONG ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_19__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int *,int ,scalar_t__*) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int VAR_3 ;
 int FUNC_9 (TYPE_4__*,int *,int ,char*,int ,TYPE_6__**,int *) ;
 int FUNC_10 (int *,int*,int*) ;
 int FUNC_11 (int *,int) ;
 int VAR_4 ;
 int FUNC_12 (int ) ;
 int VAR_5 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (TYPE_4__*,TYPE_6__*,int ,int ,scalar_t__) ;
 int FUNC_16 (TYPE_4__*,int ,int *) ;
 int FUNC_17 (TYPE_6__*) ;
 int FUNC_18 (int *,int,int) ;
 int FUNC_19 (int ,int *,scalar_t__) ;
 int FUNC_20 (int *,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_21 (int *,TYPE_5__*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_22 (TYPE_4__*,int ,int *) ;
 int FUNC_23 (TYPE_4__*,TYPE_6__*,int ,int *,scalar_t__,scalar_t__*,int *) ;
 void* FUNC_24 (int,int) ;

NTSTATUS
FUNC_25(PNTFS_VCB VAR_12,
             PNTFS_ATTR_CONTEXT VAR_13,
             ULONG VAR_14,
             PFILE_RECORD_HEADER VAR_15,
             ULONG VAR_16)
{
    NTSTATUS VAR_17 = VAR_9;
    ULONG VAR_18 = VAR_16;

    PNTFS_ATTR_RECORD VAR_19 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_15 + VAR_14);
    ULONG VAR_20 = VAR_14 + VAR_13->pRecord->Length;
    PNTFS_ATTR_RECORD VAR_21 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_15 + VAR_20);

    PUCHAR VAR_22;
    ULONG VAR_23 = 0;

    PFILE_RECORD_HEADER VAR_24;
    PNTFS_ATTR_CONTEXT VAR_25;
    ULONGLONG VAR_26;
    PUCHAR VAR_27;
    RTL_BITMAP VAR_28;
    ULONG VAR_29;

    if (!VAR_13->pRecord->IsNonResident)
    {
        return VAR_7;
    }


    VAR_24 = FUNC_5(&VAR_12->FileRecLookasideList);
    if (VAR_24 == ((void*)0))
    {
        FUNC_4("Error: Unable to allocate memory for bitmap file record!\n");
        return VAR_8;
    }

    VAR_17 = FUNC_16(VAR_12, VAR_4, VAR_24);
    if (!FUNC_12(VAR_17))
    {
        FUNC_4("Error: Unable to read file record for bitmap!\n");
        FUNC_8(&VAR_12->FileRecLookasideList, VAR_24);
        return 0;
    }

    VAR_17 = FUNC_9(VAR_12, VAR_24, VAR_1, L"", 0, &VAR_25, ((void*)0));
    if (!FUNC_12(VAR_17))
    {
        FUNC_4("Error: Unable to find data attribute for bitmap file!\n");
        FUNC_8(&VAR_12->FileRecLookasideList, VAR_24);
        return 0;
    }

    VAR_26 = FUNC_2(VAR_25->pRecord);
    VAR_26 = FUNC_24(VAR_26, VAR_11);
    FUNC_1((VAR_26 * 8) >= VAR_12->NtfsInfo.ClusterCount);
    VAR_27 = FUNC_6(VAR_5, FUNC_14(VAR_26, VAR_12->NtfsInfo.BytesPerSector), VAR_10);
    if (VAR_27 == ((void*)0))
    {
        FUNC_4("Error: Unable to allocate memory for bitmap file data!\n");
        FUNC_17(VAR_25);
        FUNC_8(&VAR_12->FileRecLookasideList, VAR_24);
        return 0;
    }

    FUNC_15(VAR_12, VAR_25, 0, (PCHAR)VAR_27, (ULONG)VAR_26);

    FUNC_20(&VAR_28, (PULONG)VAR_27, VAR_12->NtfsInfo.ClusterCount);


    while (VAR_18 > 0)
    {
        LONGLONG VAR_30, VAR_31;

        if (!FUNC_10(&VAR_13->DataRunsMCB, &VAR_30, &VAR_31))
        {
            VAR_17 = VAR_7;
            FUNC_4("DRIVER ERROR: FreeClusters called to free %lu clusters, which is %lu more clusters than are assigned to attribute!",
                    VAR_16,
                    VAR_18);
            break;
        }

        if (VAR_31 != -1)
        {

            FUNC_18(&VAR_28, VAR_31, 1);
        }
        FUNC_11(&VAR_13->DataRunsMCB, VAR_13->pRecord->NonResident.HighestVCN);


        VAR_13->pRecord->NonResident.HighestVCN = FUNC_24(VAR_13->pRecord->NonResident.HighestVCN, VAR_13->pRecord->NonResident.HighestVCN - 1);
        VAR_18--;
    }


    VAR_17 = FUNC_23(VAR_12, VAR_25, 0, VAR_27, (ULONG)VAR_26, &VAR_29, VAR_15);
    if (!FUNC_12(VAR_17))
    {
        FUNC_17(VAR_25);
        FUNC_7(VAR_27, VAR_10);
        FUNC_8(&VAR_12->FileRecLookasideList, VAR_24);
        return VAR_17;
    }

    FUNC_17(VAR_25);
    FUNC_7(VAR_27, VAR_10);
    FUNC_8(&VAR_12->FileRecLookasideList, VAR_24);




    VAR_22 = FUNC_6(VAR_5, VAR_12->NtfsInfo.BytesPerFileRecord, VAR_10);
    if (!VAR_22)
    {
        FUNC_4("ERROR: Couldn't allocate memory for data runs!\n");
        return VAR_6;
    }


    FUNC_3(&VAR_13->DataRunsMCB, VAR_22, VAR_12->NtfsInfo.BytesPerCluster, &VAR_23);


    VAR_19->NonResident.HighestVCN = VAR_13->pRecord->NonResident.HighestVCN;


    FUNC_19((PVOID)((ULONG_PTR)VAR_19 + VAR_19->NonResident.MappingPairsOffset),
                  VAR_22,
                  VAR_23);


    if (VAR_21->Type == VAR_2)
    {

        VAR_19->Length = FUNC_0(VAR_13->pRecord->NonResident.MappingPairsOffset + VAR_23,
                                                 VAR_0);

        FUNC_1(VAR_19->Length <= VAR_13->pRecord->Length);

        VAR_13->pRecord->Length = VAR_19->Length;


        VAR_21 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_19 + VAR_19->Length);
        FUNC_21(VAR_15, VAR_21, VAR_3);
    }


    VAR_17 = FUNC_22(VAR_12, VAR_13->FileMFTIndex, VAR_15);

    FUNC_7(VAR_22, VAR_10);

    FUNC_13((PUCHAR)((ULONG_PTR)VAR_19 + VAR_19->NonResident.MappingPairsOffset), 0);

    return VAR_17;
}
