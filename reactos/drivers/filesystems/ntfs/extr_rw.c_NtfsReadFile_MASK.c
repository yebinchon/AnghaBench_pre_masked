
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_22__ {int Length; int MaximumLength; scalar_t__ Buffer; } ;
typedef TYPE_2__ UNICODE_STRING ;
typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_21__ {scalar_t__ BytesPerSector; } ;
struct TYPE_27__ {int FileRecLookasideList; TYPE_1__ NtfsInfo; } ;
struct TYPE_26__ {scalar_t__ FsContext; } ;
struct TYPE_25__ {int pRecord; } ;
struct TYPE_24__ {scalar_t__ Type; int NameLength; scalar_t__ NameOffset; } ;
struct TYPE_23__ {int Stream; int MFTIndex; } ;
typedef scalar_t__ PWCHAR ;
typedef scalar_t__* PULONG ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_3__* PNTFS_FCB ;
typedef TYPE_4__* PNTFS_ATTR_RECORD ;
typedef TYPE_5__* PNTFS_ATTR_CONTEXT ;
typedef int * PFILE_RECORD_HEADER ;
typedef TYPE_6__* PFILE_OBJECT ;
typedef TYPE_7__* PDEVICE_EXTENSION ;
typedef int * PCHAR ;
typedef int NTSTATUS ;
typedef int FIND_ATTR_CONTXT ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_7__*,...) ;
 int FUNC_3 (char*,...) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (TYPE_7__*,int *,scalar_t__,int ,int ,TYPE_5__**,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_7__*,int *,scalar_t__,TYPE_4__**) ;
 int FUNC_11 (int *,TYPE_4__**) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (TYPE_7__*,TYPE_5__*,scalar_t__,int *,scalar_t__) ;
 int FUNC_17 (TYPE_7__*,int ,int *) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (scalar_t__,int *,scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_21 (int ) ;

__attribute__((used)) static
NTSTATUS
FUNC_22(PDEVICE_EXTENSION VAR_10,
             PFILE_OBJECT VAR_11,
             PUCHAR VAR_12,
             ULONG VAR_13,
             ULONG VAR_14,
             ULONG VAR_15,
             PULONG VAR_16)
{
    NTSTATUS VAR_17 = VAR_6;
    PNTFS_FCB VAR_18;
    PFILE_RECORD_HEADER VAR_19;
    PNTFS_ATTR_CONTEXT VAR_20;
    ULONG VAR_21;
    ULONG VAR_22;
    ULONG VAR_23;
    ULONG VAR_24;
    BOOLEAN VAR_25 = VAR_1;
    PCHAR VAR_26 = (PCHAR)VAR_12;
    ULONGLONG VAR_27;

    FUNC_2("NtfsReadFile(%p, %p, %p, %lu, %lu, %lx, %p)\n", VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);

    *VAR_16 = 0;

    if (VAR_13 == 0)
    {
        FUNC_3("Null read!\n");
        return VAR_6;
    }

    VAR_18 = (PNTFS_FCB)VAR_11->FsContext;

    if (FUNC_13(VAR_18))
    {
        FUNC_3("Compressed file!\n");
        VAR_9;
        return VAR_5;
    }

    VAR_19 = FUNC_4(&VAR_10->FileRecLookasideList);
    if (VAR_19 == ((void*)0))
    {
        FUNC_3("Not enough memory!\n");
        return VAR_4;
    }

    VAR_17 = FUNC_17(VAR_10, VAR_18->MFTIndex, VAR_19);
    if (!FUNC_12(VAR_17))
    {
        FUNC_3("Can't find record!\n");
        FUNC_7(&VAR_10->FileRecLookasideList, VAR_19);
        return VAR_17;
    }


    VAR_17 = FUNC_8(VAR_10, VAR_19, VAR_0, VAR_18->Stream, FUNC_21(VAR_18->Stream), &VAR_20, ((void*)0));
    if (!FUNC_12(VAR_17))
    {
        NTSTATUS VAR_28;
        FIND_ATTR_CONTXT VAR_29;
        PNTFS_ATTR_RECORD VAR_30;

        FUNC_3("No '%S' data stream associated with file!\n", VAR_18->Stream);

        VAR_28 = FUNC_10(&VAR_29, VAR_10, VAR_19, VAR_1, &VAR_30);
        while (FUNC_12(VAR_28))
        {
            if (VAR_30->Type == VAR_0)
            {
                UNICODE_STRING VAR_31;

                VAR_31.Length = VAR_30->NameLength * sizeof(WCHAR);
                VAR_31.MaximumLength = VAR_31.Length;
                VAR_31.Buffer = (PWCHAR)((ULONG_PTR)VAR_30 + VAR_30->NameOffset);
                FUNC_3("Data stream: '%wZ' available\n", &VAR_31);
            }

            VAR_28 = FUNC_11(&VAR_29, &VAR_30);
        }
        FUNC_9(&VAR_29);

        FUNC_18(VAR_20);
        FUNC_7(&VAR_10->FileRecLookasideList, VAR_19);
        return VAR_17;
    }

    VAR_27 = FUNC_1(VAR_20->pRecord);
    if (VAR_14 >= VAR_27)
    {
        FUNC_3("Reading beyond stream end!\n");
        FUNC_18(VAR_20);
        FUNC_7(&VAR_10->FileRecLookasideList, VAR_19);
        return VAR_3;
    }

    VAR_24 = VAR_13;
    if (VAR_14 + VAR_13 > VAR_27)
        VAR_24 = VAR_27 - VAR_14;

    VAR_22 = VAR_14;
    VAR_21 = VAR_24;

    if ((VAR_14 % VAR_10->NtfsInfo.BytesPerSector) != 0 || (VAR_24 % VAR_10->NtfsInfo.BytesPerSector) != 0)
    {
        VAR_22 = FUNC_14(VAR_14, VAR_10->NtfsInfo.BytesPerSector);
        VAR_21 = FUNC_15(VAR_24, VAR_10->NtfsInfo.BytesPerSector);

        if (VAR_21 + VAR_22 < VAR_14 + VAR_13)
        {
            if (VAR_22 + VAR_21 + VAR_10->NtfsInfo.BytesPerSector <= FUNC_0(VAR_20->pRecord))
                VAR_21 += VAR_10->NtfsInfo.BytesPerSector;
        }


        VAR_26 = FUNC_5(VAR_2, VAR_21, VAR_7);
        if (VAR_26 == ((void*)0))
        {
            FUNC_3("Not enough memory!\n");
            FUNC_18(VAR_20);
            FUNC_7(&VAR_10->FileRecLookasideList, VAR_19);
            return VAR_4;
        }
        VAR_25 = VAR_8;
    }

    FUNC_2("Effective read: %lu at %lu for stream '%S'\n", VAR_21, VAR_22, VAR_18->Stream);
    VAR_23 = FUNC_16(VAR_10, VAR_20, VAR_22, (PCHAR)VAR_26, VAR_21);
    if (VAR_23 == 0)
    {
        FUNC_3("Read failure!\n");
        FUNC_18(VAR_20);
        FUNC_7(&VAR_10->FileRecLookasideList, VAR_19);
        if (VAR_25)
        {
            FUNC_6(VAR_26, VAR_7);
        }
        return VAR_17;
    }

    FUNC_18(VAR_20);
    FUNC_7(&VAR_10->FileRecLookasideList, VAR_19);

    *VAR_16 = VAR_24;

    FUNC_2("%lu got read\n", *VAR_16);

    if (VAR_25)
    {
        FUNC_19(VAR_12, VAR_26 + (VAR_14 - VAR_22), VAR_24);
    }

    if (VAR_24 != VAR_13)
    {
        FUNC_20(VAR_12 + VAR_24, VAR_13 - VAR_24);
    }

    if (VAR_25)
    {
        FUNC_6(VAR_26, VAR_7);
    }

    return VAR_6;
}
