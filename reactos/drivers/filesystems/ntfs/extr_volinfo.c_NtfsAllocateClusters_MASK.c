
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_13__ {int ClusterCount; int BytesPerSector; int SectorsPerCluster; } ;
struct TYPE_15__ {int FileRecLookasideList; TYPE_1__ NtfsInfo; } ;
struct TYPE_14__ {int pRecord; } ;
typedef int RTL_BITMAP ;
typedef int* PULONG ;
typedef int * PUCHAR ;
typedef TYPE_2__* PNTFS_ATTR_CONTEXT ;
typedef int * PFILE_RECORD_HEADER ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int PCHAR ;
typedef int NTSTATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_3__*,int *,int ,char*,int ,TYPE_2__**,int *) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*,int ,int ,int) ;
 int FUNC_11 (TYPE_3__*,int ,int *) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *,int,int) ;
 int FUNC_14 (int *,int*) ;
 int FUNC_15 (int *,int,int*) ;
 int FUNC_16 (int *,int*,int) ;
 int FUNC_17 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_18 (TYPE_3__*,TYPE_2__*,int ,int *,int,int*,int *) ;
 int FUNC_19 (int,int) ;

NTSTATUS
FUNC_20(PDEVICE_EXTENSION VAR_6,
                     ULONG VAR_7,
                     ULONG VAR_8,
                     PULONG VAR_9,
                     PULONG VAR_10)
{
    NTSTATUS VAR_11;
    PFILE_RECORD_HEADER VAR_12;
    PNTFS_ATTR_CONTEXT VAR_13;
    ULONGLONG VAR_14;
    PUCHAR VAR_15;
    ULONGLONG VAR_16 = 0;
    RTL_BITMAP VAR_17;
    ULONG VAR_18;
    ULONG VAR_19;

    FUNC_2("NtfsAllocateClusters(%p, %lu, %lu, %p, %p)\n", VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

    VAR_12 = FUNC_3(&VAR_6->FileRecLookasideList);
    if (VAR_12 == ((void*)0))
    {
        return VAR_4;
    }

    VAR_11 = FUNC_11(VAR_6, VAR_1, VAR_12);
    if (!FUNC_8(VAR_11))
    {
        FUNC_6(&VAR_6->FileRecLookasideList, VAR_12);
        return VAR_11;
    }

    VAR_11 = FUNC_7(VAR_6, VAR_12, VAR_0, L"", 0, &VAR_13, ((void*)0));
    if (!FUNC_8(VAR_11))
    {
        FUNC_6(&VAR_6->FileRecLookasideList, VAR_12);
        return VAR_11;
    }

    VAR_14 = FUNC_1(VAR_13->pRecord);
    VAR_14 = FUNC_19(VAR_14, 0xffffffff);
    FUNC_0((VAR_14 * 8) >= VAR_6->NtfsInfo.ClusterCount);
    VAR_15 = FUNC_4(VAR_2, FUNC_9(VAR_14, VAR_6->NtfsInfo.BytesPerSector), VAR_5);
    if (VAR_15 == ((void*)0))
    {
        FUNC_12(VAR_13);
        FUNC_6(&VAR_6->FileRecLookasideList, VAR_12);
        return VAR_4;
    }

    FUNC_2("Total clusters: %I64x\n", VAR_6->NtfsInfo.ClusterCount);
    FUNC_2("Total clusters in bitmap: %I64x\n", VAR_14 * 8);
    FUNC_2("Diff in size: %I64d B\n", ((VAR_14 * 8) - VAR_6->NtfsInfo.ClusterCount) * VAR_6->NtfsInfo.SectorsPerCluster * VAR_6->NtfsInfo.BytesPerSector);

    FUNC_10(VAR_6, VAR_13, 0, (PCHAR)VAR_15, (ULONG)VAR_14);

    FUNC_16(&VAR_17, (PULONG)VAR_15, VAR_6->NtfsInfo.ClusterCount);
    VAR_16 = FUNC_17(&VAR_17);

    if (VAR_16 < VAR_8)
    {
        FUNC_12(VAR_13);

        FUNC_5(VAR_15, VAR_5);
        FUNC_6(&VAR_6->FileRecLookasideList, VAR_12);
        return VAR_3;
    }




    VAR_18 = FUNC_13(&VAR_17, VAR_8, VAR_7);

    if (VAR_18 != 0xFFFFFFFF)
    {
        *VAR_9 = VAR_18;
        *VAR_10 = VAR_8;
    }
    else
    {

        *VAR_10 = FUNC_15(&VAR_17, VAR_7, VAR_9);

        if (*VAR_10 == 0)
        {

            *VAR_10 = FUNC_14(&VAR_17, VAR_9);
        }

    }

    VAR_11 = FUNC_18(VAR_6, VAR_13, 0, VAR_15, (ULONG)VAR_14, &VAR_19, VAR_12);

    FUNC_12(VAR_13);

    FUNC_5(VAR_15, VAR_5);
    FUNC_6(&VAR_6->FileRecLookasideList, VAR_12);

    return VAR_11;
}
