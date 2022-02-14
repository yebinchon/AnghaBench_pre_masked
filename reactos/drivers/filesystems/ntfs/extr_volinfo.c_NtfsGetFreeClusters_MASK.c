
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_12__ {int ClusterCount; int BytesPerSector; int SectorsPerCluster; } ;
struct TYPE_14__ {int FileRecLookasideList; TYPE_1__ NtfsInfo; } ;
struct TYPE_13__ {int pRecord; } ;
typedef int RTL_BITMAP ;
typedef int PULONG ;
typedef TYPE_2__* PNTFS_ATTR_CONTEXT ;
typedef int * PFILE_RECORD_HEADER ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int * PCHAR ;
typedef int NTSTATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_3__*) ;
 int FUNC_3 (char*,int) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_3__*,int *,int ,char*,int ,TYPE_2__**,int *) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (TYPE_3__*,TYPE_2__*,int,int *,int) ;
 int FUNC_12 (TYPE_3__*,int ,int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (int *) ;
 int VAR_3 ;

ULONGLONG
FUNC_16(PDEVICE_EXTENSION VAR_4)
{
    NTSTATUS VAR_5;
    PFILE_RECORD_HEADER VAR_6;
    PNTFS_ATTR_CONTEXT VAR_7;
    ULONGLONG VAR_8;
    PCHAR VAR_9;
    ULONGLONG VAR_10 = 0;
    ULONG VAR_11 = 0;
    RTL_BITMAP VAR_12;

    FUNC_2("NtfsGetFreeClusters(%p)\n", VAR_4);

    VAR_6 = FUNC_4(&VAR_4->FileRecLookasideList);
    if (VAR_6 == ((void*)0))
    {
        return 0;
    }

    VAR_5 = FUNC_12(VAR_4, VAR_1, VAR_6);
    if (!FUNC_9(VAR_5))
    {
        FUNC_7(&VAR_4->FileRecLookasideList, VAR_6);
        return 0;
    }

    VAR_5 = FUNC_8(VAR_4, VAR_6, VAR_0, L"", 0, &VAR_7, ((void*)0));
    if (!FUNC_9(VAR_5))
    {
        FUNC_7(&VAR_4->FileRecLookasideList, VAR_6);
        return 0;
    }

    VAR_8 = FUNC_1(VAR_7->pRecord);
    FUNC_0((VAR_8 * 8) >= VAR_4->NtfsInfo.ClusterCount);
    VAR_9 = FUNC_5(VAR_2, FUNC_10(VAR_8, VAR_4->NtfsInfo.BytesPerSector), VAR_3);
    if (VAR_9 == ((void*)0))
    {
        FUNC_13(VAR_7);
        FUNC_7(&VAR_4->FileRecLookasideList, VAR_6);
        return 0;
    }


    for (; VAR_11 < VAR_8; VAR_11 += VAR_4->NtfsInfo.BytesPerSector)
    {
        FUNC_11(VAR_4, VAR_7, VAR_11, (PCHAR)((ULONG_PTR)VAR_9 + VAR_11), VAR_4->NtfsInfo.BytesPerSector);
    }
    FUNC_13(VAR_7);

    FUNC_3("Total clusters: %I64x\n", VAR_4->NtfsInfo.ClusterCount);
    FUNC_3("Total clusters in bitmap: %I64x\n", VAR_8 * 8);
    FUNC_3("Diff in size: %I64d B\n", ((VAR_8 * 8) - VAR_4->NtfsInfo.ClusterCount) * VAR_4->NtfsInfo.SectorsPerCluster * VAR_4->NtfsInfo.BytesPerSector);

    FUNC_14(&VAR_12, (PULONG)VAR_9, VAR_4->NtfsInfo.ClusterCount);
    VAR_10 = FUNC_15(&VAR_12);

    FUNC_6(VAR_9, VAR_3);
    FUNC_7(&VAR_4->FileRecLookasideList, VAR_6);

    return VAR_10;
}
