
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_25__ {int Length; int MaximumLength; int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_32__ {scalar_t__ QuadPart; } ;
struct TYPE_31__ {int FileRecLookasideList; } ;
struct TYPE_30__ {int DirectoryFileReferenceNumber; int NameLength; int Name; } ;
struct TYPE_29__ {int SectionObjectPointer; } ;
struct TYPE_28__ {scalar_t__ QuadPart; } ;
struct TYPE_27__ {int pRecord; } ;
struct TYPE_26__ {int Flags; int Vcb; int Stream; int ObjectName; int MFTIndex; } ;
typedef TYPE_2__* PNTFS_FCB ;
typedef TYPE_3__* PNTFS_ATTR_CONTEXT ;
typedef TYPE_4__* PLARGE_INTEGER ;
typedef int * PFILE_RECORD_HEADER ;
typedef TYPE_5__* PFILE_OBJECT ;
typedef TYPE_6__* PFILENAME_ATTRIBUTE ;
typedef TYPE_7__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef TYPE_8__ LARGE_INTEGER ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_7__*,int *,int ,int ,int ,TYPE_3__**,int*) ;
 TYPE_6__* FUNC_7 (int ,int *) ;
 int VAR_3 ;
 int FUNC_8 (int ,TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_7__*,int *,char*,int ,int *) ;
 int FUNC_11 (TYPE_7__*,int ,int *) ;
 int FUNC_12 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (TYPE_5__*,TYPE_2__*,TYPE_3__*,int,int *,TYPE_4__*) ;
 int FUNC_14 (int ,int,TYPE_1__*,int ,scalar_t__,int,int ) ;
 int FUNC_15 (int ) ;

NTSTATUS
FUNC_16(PNTFS_FCB VAR_10,
                 PFILE_OBJECT VAR_11,
                 PDEVICE_EXTENSION VAR_12,
                 ULONG VAR_13,
                 BOOLEAN VAR_14,
                 PLARGE_INTEGER VAR_15)
{
    LARGE_INTEGER VAR_16;
    PFILE_RECORD_HEADER VAR_17;
    PNTFS_ATTR_CONTEXT VAR_18;
    ULONG VAR_19;
    NTSTATUS VAR_20 = VAR_8;
    ULONGLONG VAR_21;
    PFILENAME_ATTRIBUTE VAR_22;
    ULONGLONG VAR_23;
    UNICODE_STRING VAR_24;



    VAR_17 = FUNC_4(&VAR_12->FileRecLookasideList);
    if (VAR_17 == ((void*)0))
    {
        FUNC_3("Couldn't allocate memory for file record!");
        return VAR_6;
    }


    FUNC_2("Reading file record...\n");
    VAR_20 = FUNC_11(VAR_12, VAR_10->MFTIndex, VAR_17);
    if (!FUNC_9(VAR_20))
    {

        FUNC_3("Can't find record for %wS!\n", VAR_10->ObjectName);
        FUNC_5(&VAR_12->FileRecLookasideList, VAR_17);
        return VAR_20;
    }

    FUNC_2("Found record for %wS\n", VAR_10->ObjectName);

    VAR_16.QuadPart = FUNC_10(VAR_12, VAR_17, L"", 0, ((void*)0));


    if (VAR_15->QuadPart < VAR_16.QuadPart)
    {

        if (!FUNC_8(VAR_11->SectionObjectPointer,
                                  VAR_15))
        {
            FUNC_3("Couldn't decrease file size!\n");
            FUNC_5(&VAR_12->FileRecLookasideList, VAR_17);
            return VAR_9;
        }
    }


    FUNC_2("Finding Data Attribute...\n");
    VAR_20 = FUNC_6(VAR_12,
                           VAR_17,
                           VAR_0,
                           VAR_10->Stream,
                           FUNC_15(VAR_10->Stream),
                           &VAR_18,
                           &VAR_19);


    if (!FUNC_9(VAR_20))
    {
        FUNC_3("No '%S' data stream associated with file!\n", VAR_10->Stream);
        FUNC_5(&VAR_12->FileRecLookasideList, VAR_17);
        return VAR_20;
    }


    VAR_16.QuadPart = FUNC_1(VAR_18->pRecord);


    if (VAR_15->QuadPart > VAR_16.QuadPart)
    {

        if ((VAR_10->Flags & VAR_2) ||
            (VAR_13 & VAR_3))
        {

            FUNC_12(VAR_18);
            FUNC_5(&VAR_12->FileRecLookasideList, VAR_17);
            return VAR_5;
        }
    }


    VAR_20 = FUNC_13(VAR_11, VAR_10, VAR_18, VAR_19, VAR_17, VAR_15);
    if (!FUNC_9(VAR_20))
    {
        FUNC_12(VAR_18);
        FUNC_5(&VAR_12->FileRecLookasideList, VAR_17);
        return VAR_20;
    }



    VAR_22 = FUNC_7(VAR_10->Vcb, VAR_17);
    if (VAR_22 == ((void*)0))
    {
        FUNC_3("Unable to find FileName attribute associated with file!\n");
        FUNC_12(VAR_18);
        FUNC_5(&VAR_12->FileRecLookasideList, VAR_17);
        return VAR_7;
    }

    VAR_23 = VAR_22->DirectoryFileReferenceNumber & VAR_4;

    VAR_24.Buffer = VAR_22->Name;
    VAR_24.Length = VAR_22->NameLength * sizeof(WCHAR);
    VAR_24.MaximumLength = VAR_24.Length;

    VAR_21 = FUNC_0(VAR_18->pRecord);

    VAR_20 = FUNC_14(VAR_10->Vcb,
                                  VAR_23,
                                  &VAR_24,
                                  VAR_1,
                                  VAR_15->QuadPart,
                                  VAR_21,
                                  VAR_14);

    FUNC_12(VAR_18);
    FUNC_5(&VAR_12->FileRecLookasideList, VAR_17);

    return VAR_20;
}
