
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_24__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ ULONG ;
struct TYPE_28__ {int FixedMedia; } ;
struct TYPE_33__ {int StorageDevice; TYPE_2__ FatInfo; } ;
struct TYPE_32__ {TYPE_1__* RelatedFileObject; } ;
struct TYPE_29__ {int Length; int* Buffer; } ;
struct TYPE_31__ {scalar_t__ Flags; int PathNameU; TYPE_4__* CloseContext; TYPE_3__ LongNameU; } ;
struct TYPE_30__ {int CloseListEntry; } ;
struct TYPE_27__ {int CloseContextLookasideList; int CloseMutex; int CloseCount; } ;
struct TYPE_26__ {TYPE_5__* FsContext; int FileName; } ;
typedef TYPE_4__* PVFAT_CLOSE_CONTEXT ;
typedef TYPE_5__* PVFATFCB ;
typedef int PUNICODE_STRING ;
typedef TYPE_6__* PFILE_OBJECT ;
typedef TYPE_7__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int ,int ,int *,int ,int *,int ,int ) ;
 TYPE_24__* VAR_14 ;
 int FUNC_10 (TYPE_7__*,TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;
 scalar_t__ FUNC_12 (TYPE_5__*) ;
 scalar_t__ FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_7__*,TYPE_5__**,TYPE_5__**,int ) ;
 int FUNC_15 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_16 (TYPE_7__*,TYPE_5__*) ;

__attribute__((used)) static
NTSTATUS
FUNC_17(
    PDEVICE_EXTENSION VAR_15,
    PUNICODE_STRING VAR_16,
    PFILE_OBJECT VAR_17,
    ULONG VAR_18,
    ULONG VAR_19,
    PVFATFCB *VAR_20)
{
    PVFATFCB VAR_21;
    NTSTATUS VAR_22;

    FUNC_2("VfatOpenFile(%p, '%wZ', %p, %p)\n", VAR_15, VAR_16, VAR_17, VAR_20);

    if (VAR_17->RelatedFileObject)
    {
        FUNC_2("'%wZ'\n", &VAR_17->RelatedFileObject->FileName);

        *VAR_20 = VAR_17->RelatedFileObject->FsContext;
    }
    else
    {
        *VAR_20 = ((void*)0);
    }

    if (!VAR_15->FatInfo.FixedMedia)
    {
        VAR_22 = FUNC_9(VAR_15->StorageDevice,
                                          VAR_8,
                                          ((void*)0),
                                          0,
                                          ((void*)0),
                                          0,
                                          VAR_0);
        if (!FUNC_7(VAR_22))
        {
            FUNC_2("Status %lx\n", VAR_22);
            *VAR_20 = ((void*)0);
            return VAR_22;
        }
    }

    if (*VAR_20)
    {
        FUNC_15(VAR_15, *VAR_20);
    }


    FUNC_2("Checking for existing FCB in memory\n");

    VAR_22 = FUNC_14(VAR_15, VAR_20, &VAR_21, VAR_16);
    if (!FUNC_7(VAR_22))
    {
        FUNC_2 ("Could not make a new FCB, status: %x\n", VAR_22);
        return VAR_22;
    }


    if ((!FUNC_0(VAR_19, VAR_4) && FUNC_11(VAR_21)) &&
        (VAR_18 == VAR_5 ||
         VAR_18 == VAR_6 ||
         VAR_18 == VAR_7))
    {
        FUNC_16(VAR_15, VAR_21);
        return VAR_12;
    }

    if (FUNC_0(VAR_21->Flags, VAR_2))
    {
        FUNC_16(VAR_15, VAR_21);
        return VAR_11;
    }


    if (FUNC_12(VAR_21) &&
        (VAR_18 == VAR_5 ||
         VAR_18 == VAR_6))
    {
        FUNC_16(VAR_15, VAR_21);
        return VAR_9;
    }

    if (FUNC_12(VAR_21) &&
        (VAR_19 & VAR_3))
    {
        FUNC_16(VAR_15, VAR_21);
        return VAR_10;
    }

    if ((FUNC_13(VAR_21) ||
         (VAR_21->LongNameU.Length == sizeof(WCHAR) && VAR_21->LongNameU.Buffer[0] == L'.') ||
         (VAR_21->LongNameU.Length == 2 * sizeof(WCHAR) && VAR_21->LongNameU.Buffer[0] == L'.' && VAR_21->LongNameU.Buffer[1] == L'.')) &&
        FUNC_0(VAR_19, VAR_3))
    {

        FUNC_16(VAR_15, VAR_21);
        return VAR_10;
    }


    if (FUNC_0(VAR_21->Flags, VAR_1))
    {
        BOOLEAN VAR_23;
        PVFAT_CLOSE_CONTEXT VAR_24;


        VAR_24 = VAR_21->CloseContext;

        if (VAR_24 != ((void*)0))
        {
            VAR_23 = VAR_0;

            FUNC_3(&VAR_14->CloseMutex);

            if (!FUNC_6(&VAR_24->CloseListEntry))
            {
                FUNC_8(&VAR_24->CloseListEntry);
                --VAR_14->CloseCount;
                VAR_23 = VAR_13;
            }
            FUNC_5(&VAR_14->CloseMutex);


            FUNC_1(VAR_21->Flags, VAR_1);

            FUNC_16(VAR_15, VAR_21);
            VAR_21->CloseContext = ((void*)0);

            if (!VAR_23)
            {
                FUNC_4(&VAR_14->CloseContextLookasideList, VAR_24);
            }
        }

        FUNC_2("Reusing delayed close FCB for %wZ\n", &VAR_21->PathNameU);
    }

    FUNC_2("Attaching FCB to fileObject\n");
    VAR_22 = FUNC_10(VAR_15, VAR_21, VAR_17);
    if (!FUNC_7(VAR_22))
    {
        FUNC_16(VAR_15, VAR_21);
    }
    return VAR_22;
}
