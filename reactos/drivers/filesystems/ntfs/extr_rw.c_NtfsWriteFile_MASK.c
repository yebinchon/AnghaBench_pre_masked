
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_28__ {int Length; int MaximumLength; scalar_t__ Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_33__ {scalar_t__ QuadPart; } ;
struct TYPE_32__ {scalar_t__ FsContext; } ;
struct TYPE_31__ {int pRecord; } ;
struct TYPE_30__ {scalar_t__ Type; int NameLength; scalar_t__ NameOffset; } ;
struct TYPE_29__ {int Flags; scalar_t__ DirectoryFileReferenceNumber; int NameLength; int FileRecLookasideList; int Vcb; scalar_t__ Name; int Stream; int ObjectName; int MFTIndex; int PathName; } ;
typedef scalar_t__ PWCHAR ;
typedef scalar_t__* PULONG ;
typedef int * PUCHAR ;
typedef TYPE_2__* PNTFS_FCB ;
typedef TYPE_3__* PNTFS_ATTR_RECORD ;
typedef TYPE_4__* PNTFS_ATTR_CONTEXT ;
typedef int * PFILE_RECORD_HEADER ;
typedef TYPE_5__* PFILE_OBJECT ;
typedef TYPE_2__* PFILENAME_ATTRIBUTE ;
typedef TYPE_2__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef TYPE_8__ LARGE_INTEGER ;
typedef int FIND_ATTR_CONTXT ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__*,int *,scalar_t__,int ,int ,TYPE_4__**,scalar_t__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_2__*,int *,int ,TYPE_3__**) ;
 int FUNC_10 (int *,TYPE_3__**) ;
 TYPE_2__* FUNC_11 (int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int ,int *) ;
 int FUNC_15 (TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_16 (TYPE_5__*,TYPE_2__*,TYPE_4__*,scalar_t__,int *,TYPE_8__*) ;
 int VAR_11 ;
 int FUNC_17 (int ,scalar_t__,TYPE_1__*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_18 (TYPE_2__*,TYPE_4__*,scalar_t__,int * const,scalar_t__,scalar_t__*,int *) ;
 int FUNC_19 (int ) ;

NTSTATUS FUNC_20(PDEVICE_EXTENSION VAR_12,
                       PFILE_OBJECT VAR_13,
                       const PUCHAR VAR_14,
                       ULONG VAR_15,
                       ULONG VAR_16,
                       ULONG VAR_17,
                       BOOLEAN VAR_18,
                       PULONG VAR_19)
{
    NTSTATUS VAR_20 = VAR_8;
    PNTFS_FCB VAR_21;
    PFILE_RECORD_HEADER VAR_22;
    PNTFS_ATTR_CONTEXT VAR_23;
    ULONG VAR_24;
    ULONGLONG VAR_25;

    FUNC_3("NtfsWriteFile(%p, %p, %p, %lu, %lu, %x, %s, %p)\n",
           VAR_12,
           VAR_13,
           VAR_14,
           VAR_15,
           VAR_16,
           VAR_17,
           (VAR_18 ? "TRUE" : "FALSE"),
           VAR_19);

    *VAR_19 = 0;

    FUNC_0(VAR_12);

    if (VAR_15 == 0)
    {
        if (VAR_14 == ((void*)0))
            return VAR_9;
        else
            return VAR_7;
    }


    VAR_21 = (PNTFS_FCB)VAR_13->FsContext;
    FUNC_0(VAR_21);

    FUNC_3("Fcb->PathName: %wS\n", VAR_21->PathName);
    FUNC_3("Fcb->ObjectName: %wS\n", VAR_21->ObjectName);


    if (FUNC_13(VAR_21))
    {
        FUNC_3("Compressed file!\n");
        VAR_11;
        return VAR_8;
    }


    VAR_22 = FUNC_5(&VAR_12->FileRecLookasideList);
    if (VAR_22 == ((void*)0))
    {
        FUNC_4("Not enough memory! Can't write %wS!\n", VAR_21->PathName);
        return VAR_6;
    }


    FUNC_3("Reading file record...\n");
    VAR_20 = FUNC_14(VAR_12, VAR_21->MFTIndex, VAR_22);
    if (!FUNC_12(VAR_20))
    {

        FUNC_4("Can't find record for %wS!\n", VAR_21->ObjectName);
        FUNC_6(&VAR_12->FileRecLookasideList, VAR_22);
        return VAR_20;
    }

    FUNC_3("Found record for %wS\n", VAR_21->ObjectName);


    FUNC_3("Finding Data Attribute...\n");
    VAR_20 = FUNC_7(VAR_12, VAR_22, VAR_0, VAR_21->Stream, FUNC_19(VAR_21->Stream), &VAR_23,
                           &VAR_24);


    if (!FUNC_12(VAR_20))
    {
        NTSTATUS VAR_26;
        FIND_ATTR_CONTXT VAR_27;
        PNTFS_ATTR_RECORD VAR_28;

        FUNC_4("No '%S' data stream associated with file!\n", VAR_21->Stream);


        VAR_26 = FUNC_9(&VAR_27, VAR_12, VAR_22, VAR_1, &VAR_28);
        while (FUNC_12(VAR_26))
        {
            if (VAR_28->Type == VAR_0)
            {
                UNICODE_STRING VAR_29;

                VAR_29.Length = VAR_28->NameLength * sizeof(WCHAR);
                VAR_29.MaximumLength = VAR_29.Length;
                VAR_29.Buffer = (PWCHAR)((ULONG_PTR)VAR_28 + VAR_28->NameOffset);
                FUNC_4("Data stream: '%wZ' available\n", &VAR_29);
            }

            VAR_26 = FUNC_10(&VAR_27, &VAR_28);
        }
        FUNC_8(&VAR_27);

        FUNC_15(VAR_23);
        FUNC_6(&VAR_12->FileRecLookasideList, VAR_22);
        return VAR_20;
    }


    VAR_25 = FUNC_2(VAR_23->pRecord);

    FUNC_3("WriteOffset: %lu\tStreamSize: %I64u\n", VAR_16, VAR_25);


    if (VAR_16 + VAR_15 > VAR_25)
    {

        if (!(VAR_21->Flags & VAR_2) &&
            !(VAR_17 & VAR_3))
        {
            LARGE_INTEGER VAR_30;
            ULONGLONG VAR_31;
            PFILENAME_ATTRIBUTE VAR_32;
            ULONGLONG VAR_33;
            UNICODE_STRING VAR_34;

            VAR_30.QuadPart = VAR_16 + VAR_15;


            VAR_20 = FUNC_16(VAR_13, VAR_21, VAR_23, VAR_24, VAR_22, &VAR_30);
            if (!FUNC_12(VAR_20))
            {
                FUNC_15(VAR_23);
                FUNC_6(&VAR_12->FileRecLookasideList, VAR_22);
                *VAR_19 = 0;
                return VAR_20;
            }

            VAR_31 = FUNC_1(VAR_23->pRecord);




            VAR_32 = FUNC_11(VAR_21->Vcb, VAR_22);
            FUNC_0(VAR_32);

            VAR_33 = VAR_32->DirectoryFileReferenceNumber & VAR_4;

            VAR_34.Buffer = VAR_32->Name;
            VAR_34.Length = VAR_32->NameLength * sizeof(WCHAR);
            VAR_34.MaximumLength = VAR_34.Length;

            VAR_20 = FUNC_17(VAR_21->Vcb,
                                          VAR_33,
                                          &VAR_34,
                                          VAR_1,
                                          VAR_30.QuadPart,
                                          VAR_31,
                                          VAR_18);

        }
        else
        {

            FUNC_15(VAR_23);
            FUNC_6(&VAR_12->FileRecLookasideList, VAR_22);
            *VAR_19 = 0;
            return VAR_5;
        }
    }

    FUNC_3("Length: %lu\tWriteOffset: %lu\tStreamSize: %I64u\n", VAR_15, VAR_16, VAR_25);


    VAR_20 = FUNC_18(VAR_12, VAR_23, VAR_16, VAR_14, VAR_15, VAR_19, VAR_22);


    if (!FUNC_12(VAR_20))
    {
        FUNC_4("Write failure!\n");
        FUNC_15(VAR_23);
        FUNC_6(&VAR_12->FileRecLookasideList, VAR_22);

        return VAR_20;
    }


    if (*VAR_19 != VAR_15)
    {
        FUNC_4("\a\tNTFS DRIVER ERROR: length written (%lu) differs from requested (%lu), but no error was indicated!\n",
            *VAR_19, VAR_15);
        VAR_20 = VAR_10;
    }

    FUNC_15(VAR_23);
    FUNC_6(&VAR_12->FileRecLookasideList, VAR_22);

    return VAR_20;
}
