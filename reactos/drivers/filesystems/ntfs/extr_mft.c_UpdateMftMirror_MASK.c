
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_15__ {int pRecord; } ;
struct TYPE_13__ {int BytesPerFileRecord; } ;
struct TYPE_14__ {int FileRecLookasideList; TYPE_1__ NtfsInfo; int MasterFileTable; } ;
typedef int PUCHAR ;
typedef TYPE_2__* PNTFS_VCB ;
typedef TYPE_3__* PNTFS_ATTR_CONTEXT ;
typedef int PFILE_RECORD_HEADER ;
typedef scalar_t__ PCHAR ;
typedef int NTSTATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ,char*,int ,TYPE_3__**,int *) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_3__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_2__*,int ,int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (TYPE_2__*,TYPE_3__*,int ,int ,int,scalar_t__*,int ) ;

NTSTATUS
FUNC_13(PNTFS_VCB VAR_7)
{
    PFILE_RECORD_HEADER VAR_8;
    PNTFS_ATTR_CONTEXT VAR_9;
    PNTFS_ATTR_CONTEXT VAR_10;
    PCHAR VAR_11;
    ULONGLONG VAR_12;
    NTSTATUS VAR_13;
    ULONG VAR_14;
    ULONG VAR_15;


    VAR_8 = FUNC_3(&VAR_7->FileRecLookasideList);
    if (!VAR_8)
    {
        FUNC_2("Error: Failed to allocate memory for $MFTMirr!\n");
        return VAR_3;
    }


    VAR_13 = FUNC_10(VAR_7, VAR_1, VAR_8);
    if (!FUNC_8(VAR_13))
    {
        FUNC_2("ERROR: Failed to read $MFTMirr!\n");
        FUNC_6(&VAR_7->FileRecLookasideList, VAR_8);
        return VAR_13;
    }


    VAR_13 = FUNC_7(VAR_7, VAR_8, VAR_0, L"", 0, &VAR_9, ((void*)0));
    if (!FUNC_8(VAR_13))
    {
        FUNC_2("ERROR: Couldn't find $DATA attribute!\n");
        FUNC_6(&VAR_7->FileRecLookasideList, VAR_8);
        return VAR_13;
    }


    VAR_13 = FUNC_7(VAR_7, VAR_7->MasterFileTable, VAR_0, L"", 0, &VAR_10, ((void*)0));
    if (!FUNC_8(VAR_13))
    {
        FUNC_2("ERROR: Couldn't find $DATA attribute!\n");
        FUNC_11(VAR_9);
        FUNC_6(&VAR_7->FileRecLookasideList, VAR_8);
        return VAR_13;
    }


    VAR_12 = FUNC_1(VAR_9->pRecord);

    FUNC_0(VAR_12 % VAR_7->NtfsInfo.BytesPerFileRecord == 0);


    VAR_11 = FUNC_4(VAR_2, VAR_12, VAR_5);
    if (!VAR_11)
    {
        FUNC_2("Error: Couldn't allocate memory for $DATA buffer!\n");
        FUNC_11(VAR_10);
        FUNC_11(VAR_9);
        FUNC_6(&VAR_7->FileRecLookasideList, VAR_8);
        return VAR_3;
    }

    FUNC_0(VAR_12 < VAR_6);


    VAR_14 = FUNC_9(VAR_7, VAR_10, 0, VAR_11, (ULONG)VAR_12);
    if (VAR_14 != (ULONG)VAR_12)
    {
        FUNC_2("Error: Failed to read $DATA for $MFTMirr!\n");
        FUNC_11(VAR_10);
        FUNC_11(VAR_9);
        FUNC_5(VAR_11, VAR_5);
        FUNC_6(&VAR_7->FileRecLookasideList, VAR_8);
        return VAR_4;
    }


    VAR_13 = FUNC_12(VAR_7,
                             VAR_9,
                             0,
                             (PUCHAR)VAR_11,
                             VAR_12,
                             &VAR_15,
                             VAR_8);
    if (!FUNC_8(VAR_13))
    {
        FUNC_2("ERROR: Failed to write $DATA attribute of $MFTMirr!\n");
    }


    FUNC_11(VAR_10);
    FUNC_11(VAR_9);
    FUNC_5(VAR_11, VAR_5);
    FUNC_6(&VAR_7->FileRecLookasideList, VAR_8);

    return VAR_13;
}
