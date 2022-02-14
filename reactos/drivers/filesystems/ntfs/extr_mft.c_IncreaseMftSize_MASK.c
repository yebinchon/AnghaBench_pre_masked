
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_33__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;


typedef scalar_t__ ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_40__ {int QuadPart; scalar_t__ LowPart; } ;
struct TYPE_34__ {scalar_t__ BytesPerFileRecord; } ;
struct TYPE_39__ {scalar_t__ MftDataOffset; int DirResource; int FileRecLookasideList; TYPE_4__* MasterFileTable; TYPE_2__* VolumeFcb; TYPE_3__* MFTContext; TYPE_1__ NtfsInfo; } ;
struct TYPE_38__ {scalar_t__ Flags; } ;
struct TYPE_37__ {TYPE_33__* pRecord; } ;
struct TYPE_36__ {scalar_t__ IsNonResident; } ;
struct TYPE_35__ {scalar_t__ MFTIndex; } ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_3__* PNTFS_ATTR_CONTEXT ;
typedef TYPE_4__* PFILE_RECORD_HEADER ;
typedef TYPE_5__* PDEVICE_EXTENSION ;
typedef int PCHAR ;
typedef int NTSTATUS ;
typedef scalar_t__ LONGLONG ;
typedef TYPE_6__ LARGE_INTEGER ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_33__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *,TYPE_4__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*,int ,char*,int ,TYPE_3__**,scalar_t__*) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 TYPE_4__* FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_12 (TYPE_5__*,TYPE_3__*,int ,int ,scalar_t__) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (TYPE_5__*,TYPE_3__*,scalar_t__,TYPE_4__*,TYPE_6__*) ;
 int FUNC_16 (TYPE_5__*,TYPE_3__*,scalar_t__,TYPE_4__*,TYPE_6__*) ;
 int VAR_6 ;
 int FUNC_17 (TYPE_5__*,scalar_t__,TYPE_4__*) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_5__*,TYPE_3__*,int ,scalar_t__,scalar_t__,scalar_t__*,TYPE_4__*) ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__) ;

NTSTATUS
FUNC_21(PDEVICE_EXTENSION VAR_7, BOOLEAN VAR_8)
{
    PNTFS_ATTR_CONTEXT VAR_9;
    LARGE_INTEGER VAR_10;
    LARGE_INTEGER VAR_11;
    LONGLONG VAR_12;
    ULONG VAR_13 = VAR_0 * 8;
    ULONG VAR_14 = VAR_7->NtfsInfo.BytesPerFileRecord * VAR_13;
    ULONG VAR_15;
    PUCHAR VAR_16;
    ULONGLONG VAR_17;
    ULONGLONG VAR_18;
    ULONGLONG VAR_19;
    ULONG VAR_20;
    ULONG VAR_21;
    PFILE_RECORD_HEADER VAR_22;
    ULONG VAR_23;
    NTSTATUS VAR_24;

    FUNC_2("IncreaseMftSize(%p, %s)\n", VAR_7, VAR_8 ? "TRUE" : "FALSE");


    if (!FUNC_3(&(VAR_7->DirResource), VAR_8))
    {
        return VAR_3;
    }


    VAR_22 = FUNC_10(VAR_7);
    if (!VAR_22)
    {
        FUNC_2("Error: Unable to create empty file record!\n");
        return VAR_4;
    }


    VAR_22->Flags = 0;


    VAR_24 = FUNC_8(VAR_7, VAR_7->MasterFileTable, VAR_1, L"", 0, &VAR_9, ((void*)0));
    if (!FUNC_9(VAR_24))
    {
        FUNC_2("ERROR: Couldn't find $BITMAP attribute of Mft!\n");
        FUNC_6(&VAR_7->FileRecLookasideList, VAR_22);
        FUNC_7(&(VAR_7->DirResource));
        return VAR_24;
    }


    VAR_10.QuadPart = FUNC_1(VAR_9->pRecord);


    VAR_11.QuadPart = FUNC_1(VAR_7->MFTContext->pRecord) + VAR_14;


    VAR_19 = FUNC_1(VAR_7->MFTContext->pRecord) / VAR_7->NtfsInfo.BytesPerFileRecord;


    VAR_17 = VAR_11.QuadPart / VAR_7->NtfsInfo.BytesPerFileRecord / 8;
    if ((VAR_11.QuadPart / VAR_7->NtfsInfo.BytesPerFileRecord) % 8 != 0)
        VAR_17++;


    VAR_17 = FUNC_0(VAR_17, VAR_0);


    VAR_12 = VAR_17 - VAR_10.QuadPart;
    VAR_18 = FUNC_20(VAR_10.QuadPart + VAR_12, VAR_10.QuadPart);


    VAR_16 = FUNC_4(VAR_2, VAR_18, VAR_6);
    if (!VAR_16)
    {
        FUNC_2("ERROR: Unable to allocate memory for bitmap attribute!\n");
        FUNC_6(&VAR_7->FileRecLookasideList, VAR_22);
        FUNC_7(&(VAR_7->DirResource));
        FUNC_13(VAR_9);
        return VAR_4;
    }


    FUNC_14(VAR_16, VAR_18);


    VAR_20 = FUNC_12(VAR_7,
                              VAR_9,
                              0,
                              (PCHAR)VAR_16,
                              VAR_10.LowPart);
    if (VAR_20 != VAR_10.LowPart)
    {
        FUNC_2("ERROR: Bytes read != Bitmap size!\n");
        FUNC_6(&VAR_7->FileRecLookasideList, VAR_22);
        FUNC_7(&(VAR_7->DirResource));
        FUNC_5(VAR_16, VAR_6);
        FUNC_13(VAR_9);
        return VAR_5;
    }


    VAR_24 = FUNC_15(VAR_7, VAR_7->MFTContext, VAR_7->MftDataOffset, VAR_7->MasterFileTable, &VAR_11);
    if (!FUNC_9(VAR_24))
    {
        FUNC_2("ERROR: Failed to set size of $MFT data attribute!\n");
        FUNC_6(&VAR_7->FileRecLookasideList, VAR_22);
        FUNC_7(&(VAR_7->DirResource));
        FUNC_5(VAR_16, VAR_6);
        FUNC_13(VAR_9);
        return VAR_24;
    }


    FUNC_13(VAR_9);
    VAR_24 = FUNC_8(VAR_7, VAR_7->MasterFileTable, VAR_1, L"", 0, &VAR_9, &VAR_15);
    if (!FUNC_9(VAR_24))
    {
        FUNC_2("ERROR: Couldn't find $BITMAP attribute of Mft!\n");
        FUNC_6(&VAR_7->FileRecLookasideList, VAR_22);
        FUNC_7(&(VAR_7->DirResource));
        return VAR_24;
    }


    if (VAR_12 > 0)
    {

        VAR_10.QuadPart = VAR_18;
        if (VAR_9->pRecord->IsNonResident)
            VAR_24 = FUNC_15(VAR_7, VAR_9, VAR_15, VAR_7->MasterFileTable, &VAR_10);
        else
            VAR_24 = FUNC_16(VAR_7, VAR_9, VAR_15, VAR_7->MasterFileTable, &VAR_10);

        if (!FUNC_9(VAR_24))
        {
            FUNC_2("ERROR: Failed to set size of bitmap attribute!\n");
            FUNC_6(&VAR_7->FileRecLookasideList, VAR_22);
            FUNC_7(&(VAR_7->DirResource));
            FUNC_5(VAR_16, VAR_6);
            FUNC_13(VAR_9);
            return VAR_24;
        }
    }

    FUNC_11(VAR_7, VAR_7->MasterFileTable);


    VAR_24 = FUNC_17(VAR_7, VAR_7->VolumeFcb->MFTIndex, VAR_7->MasterFileTable);
    if (!FUNC_9(VAR_24))
    {
        FUNC_2("ERROR: Failed to update $MFT file record!\n");
        FUNC_6(&VAR_7->FileRecLookasideList, VAR_22);
        FUNC_7(&(VAR_7->DirResource));
        FUNC_5(VAR_16, VAR_6);
        FUNC_13(VAR_9);
        return VAR_24;
    }


    VAR_24 = FUNC_19(VAR_7, VAR_9, 0, VAR_16, VAR_18, &VAR_21, VAR_7->MasterFileTable);
    if (!FUNC_9(VAR_24))
    {
        FUNC_6(&VAR_7->FileRecLookasideList, VAR_22);
        FUNC_7(&(VAR_7->DirResource));
        FUNC_5(VAR_16, VAR_6);
        FUNC_13(VAR_9);
        FUNC_2("ERROR: Couldn't write to bitmap attribute of $MFT!\n");
        return VAR_24;
    }


    for (VAR_23 = 0; VAR_23 < VAR_13; VAR_23++)
    {
        VAR_24 = FUNC_17(VAR_7, VAR_19 + VAR_23, VAR_22);
        if (!FUNC_9(VAR_24))
        {
            FUNC_2("ERROR: Failed to write blank file record!\n");
            FUNC_6(&VAR_7->FileRecLookasideList, VAR_22);
            FUNC_7(&(VAR_7->DirResource));
            FUNC_5(VAR_16, VAR_6);
            FUNC_13(VAR_9);
            return VAR_24;
        }
    }


    VAR_24 = FUNC_18(VAR_7);


    FUNC_6(&VAR_7->FileRecLookasideList, VAR_22);
    FUNC_7(&(VAR_7->DirResource));
    FUNC_5(VAR_16, VAR_6);
    FUNC_13(VAR_9);

    return VAR_24;
}
