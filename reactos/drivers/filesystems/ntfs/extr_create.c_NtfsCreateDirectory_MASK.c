
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_26__ {scalar_t__ BytesPerFileRecord; } ;
struct TYPE_29__ {int FileRecLookasideList; TYPE_2__ NtfsInfo; } ;
struct TYPE_28__ {scalar_t__ SequenceNumber; scalar_t__ AttributeOffset; int Flags; } ;
struct TYPE_25__ {scalar_t__ ValueOffset; } ;
struct TYPE_27__ {scalar_t__ Length; TYPE_1__ Resident; } ;
typedef TYPE_3__* PNTFS_ATTR_RECORD ;
typedef int PINDEX_ROOT_ATTRIBUTE ;
typedef TYPE_4__* PFILE_RECORD_HEADER ;
typedef int PFILE_OBJECT ;
typedef scalar_t__ PFILENAME_ATTRIBUTE ;
typedef TYPE_5__* PDEVICE_EXTENSION ;
typedef int PB_TREE ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*,TYPE_5__*,int ,int ,scalar_t__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,TYPE_3__*,int ,scalar_t__,char*,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,scalar_t__*,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*,int ,scalar_t__,int *,scalar_t__*) ;
 int FUNC_6 (char*,TYPE_5__*,int ,char*,char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (TYPE_5__*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 TYPE_4__* FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*,TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

NTSTATUS
FUNC_15(PDEVICE_EXTENSION VAR_5,
                    PFILE_OBJECT VAR_6,
                    BOOLEAN VAR_7,
                    BOOLEAN VAR_8)
{

    NTSTATUS VAR_9 = VAR_3;
    PFILE_RECORD_HEADER VAR_10;
    PNTFS_ATTR_RECORD VAR_11;
    PFILENAME_ATTRIBUTE VAR_12;
    ULONGLONG VAR_13;
    ULONGLONG VAR_14;
    PB_TREE VAR_15;
    PINDEX_ROOT_ATTRIBUTE VAR_16;
    ULONG VAR_17;
    ULONG VAR_18;

    FUNC_6("NtfsCreateFileRecord(%p, %p, %s, %s)\n",
            VAR_5,
            VAR_6,
            VAR_7 ? "TRUE" : "FALSE",
            VAR_8 ? "TRUE" : "FALSE");


    VAR_10 = FUNC_13(VAR_5);
    if (!VAR_10)
    {
        FUNC_7("ERROR: Unable to allocate memory for file record!\n");
        return VAR_2;
    }


    VAR_10->Flags |= VAR_0;


    VAR_11 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_10 + VAR_10->AttributeOffset);


    FUNC_3(VAR_10, VAR_11);


    VAR_11 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_11 + (ULONG_PTR)VAR_11->Length);


    FUNC_0(VAR_10, VAR_11, VAR_5, VAR_6, VAR_7, &VAR_13);


    VAR_12 = (PFILENAME_ATTRIBUTE)((ULONG_PTR)VAR_11 + VAR_11->Resident.ValueOffset);


    VAR_11 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_11 + (ULONG_PTR)VAR_11->Length);


    VAR_9 = FUNC_4(&VAR_15);
    if (!FUNC_11(VAR_9))
    {
        FUNC_7("ERROR: Failed to create empty B-Tree!\n");
        FUNC_10(&VAR_5->FileRecLookasideList, VAR_10);
        return VAR_9;
    }


    VAR_17 = VAR_5->NtfsInfo.BytesPerFileRecord
                       - ((ULONG_PTR)VAR_11 - (ULONG_PTR)VAR_10)
                       - sizeof(ULONG) * 2;


    VAR_9 = FUNC_5(VAR_5,
                                      VAR_15,
                                      VAR_17,
                                      &VAR_16,
                                      &VAR_18);
    if (!FUNC_11(VAR_9))
    {
        FUNC_7("ERROR: Unable to create empty index root!\n");
        FUNC_8(VAR_15);
        FUNC_10(&VAR_5->FileRecLookasideList, VAR_10);
        return VAR_9;
    }


    FUNC_8(VAR_15);


    VAR_9 = FUNC_1(VAR_5, VAR_10, VAR_11, VAR_16, VAR_18, L"$I30", 4);
    if (!FUNC_11(VAR_9))
    {
        FUNC_7("ERROR: Failed to add index root to new file record!\n");
        FUNC_9(VAR_16, VAR_4);
        FUNC_10(&VAR_5->FileRecLookasideList, VAR_10);
        return VAR_9;
    }



    FUNC_14(VAR_5, VAR_10);



    VAR_9 = FUNC_2(VAR_10, VAR_5, &VAR_14, VAR_8);
    if (FUNC_11(VAR_9))
    {

        if (VAR_14 == VAR_1)
            VAR_14 = VAR_14 + ((ULONGLONG)VAR_1 << 48);
        else
            VAR_14 = VAR_14 + ((ULONGLONG)VAR_10->SequenceNumber << 48);

        FUNC_7("New File Reference: 0x%016I64x\n", VAR_14);


        VAR_9 = FUNC_12(VAR_5,
                                            VAR_13,
                                            VAR_14,
                                            VAR_12,
                                            VAR_7);
    }

    FUNC_9(VAR_16, VAR_4);
    FUNC_10(&VAR_5->FileRecLookasideList, VAR_10);

    return VAR_9;
}
