
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
struct TYPE_26__ {int* Buffer; int Length; int MaximumLength; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef scalar_t__ ULONG ;
struct TYPE_29__ {int Flags; } ;
struct TYPE_28__ {int entry; int PathNameU; scalar_t__ dirIndex; scalar_t__ startIndex; int ShortNameU; int LongNameU; } ;
struct TYPE_27__ {scalar_t__ DirIndex; TYPE_1__ LongNameU; int DirEntry; TYPE_1__ ShortNameU; scalar_t__ StartIndex; } ;
typedef int* PWCHAR ;
typedef int * PVOID ;
typedef TYPE_2__* PVFAT_DIRENTRY_CONTEXT ;
typedef TYPE_3__* PVFATFCB ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef int PDEVICE_EXTENSION ;
typedef scalar_t__ NTSTATUS ;
typedef int DIR_ENTRY ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 int* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*,scalar_t__,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,TYPE_1__*,scalar_t__,int *) ;
 int VAR_1 ;
 int FUNC_10 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*,TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_16 (int ,int **,int **,TYPE_3__*,TYPE_2__*,scalar_t__) ;
 TYPE_9__* VAR_10 ;
 int FUNC_17 (TYPE_3__*) ;
 TYPE_3__* FUNC_18 (int ,TYPE_1__*) ;
 int FUNC_19 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_20 (int ) ;

NTSTATUS
FUNC_21(
    PDEVICE_EXTENSION VAR_11,
    PVFATFCB VAR_12,
    PUNICODE_STRING VAR_13,
    PVFAT_DIRENTRY_CONTEXT VAR_14,
    BOOLEAN VAR_15)
{
    PWCHAR VAR_16;
    USHORT VAR_17;
    NTSTATUS VAR_18;
    PVOID VAR_19 = ((void*)0);
    PVOID VAR_20;
    PVFATFCB VAR_21;
    BOOLEAN VAR_22;
    UNICODE_STRING VAR_23;
    UNICODE_STRING VAR_24;
    BOOLEAN VAR_25;
    BOOLEAN VAR_26 = FUNC_20(VAR_11);

    FUNC_2("FindFile(Parent %p, FileToFind '%wZ', DirIndex: %u)\n",
           VAR_12, VAR_13, VAR_14->DirIndex);
    FUNC_2("FindFile: Path %wZ\n",&VAR_12->PathNameU);

    VAR_17 = VAR_1 * sizeof(WCHAR);
    VAR_16 = FUNC_5(VAR_2, VAR_17 + sizeof(WCHAR), VAR_7);
    if (!VAR_16)
    {
        return VAR_3;
    }

    VAR_23.Buffer = VAR_16;
    VAR_23.Length = 0;
    VAR_23.MaximumLength = VAR_17;

    VAR_14->LongNameU.Length = 0;
    VAR_14->ShortNameU.Length = 0;

    VAR_25 = FUNC_8(VAR_13);

    if (VAR_25 == VAR_0)
    {

        FUNC_13(&VAR_23, &VAR_12->PathNameU);
        if (!FUNC_17(VAR_12))
        {
            VAR_23.Buffer[VAR_23.Length / sizeof(WCHAR)] = L'\\';
            VAR_23.Length += sizeof(WCHAR);
        }
        FUNC_11(&VAR_23, VAR_13);
        VAR_23.Buffer[VAR_23.Length / sizeof(WCHAR)] = 0;
        VAR_21 = FUNC_18(VAR_11, &VAR_23);
        if (VAR_21)
        {
            ULONG VAR_27 = VAR_21->startIndex;
            if (VAR_26 && !FUNC_17(VAR_12))
            {
                VAR_27 += 2;
            }
            if(VAR_27 >= VAR_14->DirIndex)
            {
                FUNC_13(&VAR_14->LongNameU, &VAR_21->LongNameU);
                FUNC_13(&VAR_14->ShortNameU, &VAR_21->ShortNameU);
                FUNC_12(&VAR_14->DirEntry, &VAR_21->entry, sizeof(DIR_ENTRY));
                VAR_14->StartIndex = VAR_21->startIndex;
                VAR_14->DirIndex = VAR_21->dirIndex;
                FUNC_2("FindFile: new Name %wZ, DirIndex %u (%u)\n",
                    &VAR_14->LongNameU, VAR_14->DirIndex, VAR_14->StartIndex);
                VAR_18 = VAR_5;
            }
            else
            {
                FUNC_2("FCB not found for %wZ\n", &VAR_23);
                VAR_18 = VAR_6;
            }
            FUNC_19(VAR_11, VAR_21);
            FUNC_6(VAR_16, VAR_7);
            return VAR_18;
        }
    }



    VAR_18 = FUNC_15(&VAR_24, VAR_13, VAR_8);
    if (!FUNC_10(VAR_18))
    {
        FUNC_6(VAR_16, VAR_7);
        return VAR_18;
    }

    while (VAR_8)
    {
        VAR_18 = FUNC_16(VAR_11, &VAR_19, &VAR_20, VAR_12, VAR_14, VAR_15);
        VAR_15 = VAR_0;
        if (VAR_18 == VAR_4)
        {
            break;
        }
        if (FUNC_4(VAR_26, &VAR_14->DirEntry))
        {
            VAR_14->DirIndex++;
            continue;
        }
        if (VAR_14->LongNameU.Length == 0 ||
            VAR_14->ShortNameU.Length == 0)
        {
            FUNC_3("WARNING: File system corruption detected. You may need to run a disk repair utility.\n");
            if (VAR_10->Flags & VAR_9)
            {
                FUNC_0(VAR_14->LongNameU.Length != 0 &&
                       VAR_14->ShortNameU.Length != 0);
            }
            VAR_14->DirIndex++;
            continue;
        }
        if (VAR_25)
        {
            VAR_22 = FUNC_9(&VAR_24, &VAR_14->LongNameU, VAR_8, ((void*)0)) ||
                FUNC_9(&VAR_24, &VAR_14->ShortNameU, VAR_8, ((void*)0));
        }
        else
        {
            VAR_22 = FUNC_7(&VAR_14->LongNameU, VAR_13, VAR_8, ((void*)0)) ||
                FUNC_7(&VAR_14->ShortNameU, VAR_13, VAR_8, ((void*)0));
        }

        if (VAR_22)
        {
            if (VAR_25)
            {
                FUNC_13(&VAR_23, &VAR_12->PathNameU);
                if (!FUNC_17(VAR_12))
                {
                    VAR_23.Buffer[VAR_23.Length / sizeof(WCHAR)] = L'\\';
                    VAR_23.Length += sizeof(WCHAR);
                }
                FUNC_11(&VAR_23, &VAR_14->LongNameU);
                VAR_23.Buffer[VAR_23.Length / sizeof(WCHAR)] = 0;
                VAR_21 = FUNC_18(VAR_11, &VAR_23);
                if (VAR_21 != ((void*)0))
                {
                    FUNC_12(&VAR_14->DirEntry, &VAR_21->entry, sizeof(DIR_ENTRY));
                    FUNC_19(VAR_11, VAR_21);
                }
            }
            FUNC_2("%u\n", VAR_14->LongNameU.Length);
            FUNC_2("FindFile: new Name %wZ, DirIndex %u\n",
                &VAR_14->LongNameU, VAR_14->DirIndex);

            if (VAR_19)
            {
                FUNC_1(VAR_19);
            }
            FUNC_14(&VAR_24);
            FUNC_6(VAR_16, VAR_7);
            return VAR_5;
        }
        VAR_14->DirIndex++;
    }

    if (VAR_19)
    {
        FUNC_1(VAR_19);
    }

    FUNC_14(&VAR_24);
    FUNC_6(VAR_16, VAR_7);
    return VAR_18;
}
