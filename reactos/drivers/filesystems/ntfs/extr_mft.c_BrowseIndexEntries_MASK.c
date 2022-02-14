
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_22__ {int IndexedFile; } ;
struct TYPE_23__ {TYPE_3__ Directory; } ;
struct TYPE_21__ {scalar_t__ NameType; } ;
struct TYPE_26__ {int Flags; int Length; TYPE_4__ Data; TYPE_2__ FileName; } ;
struct TYPE_20__ {int Flags; } ;
struct TYPE_25__ {TYPE_1__ Header; } ;
struct TYPE_24__ {int pRecord; } ;
typedef int RTL_BITMAP ;
typedef int PUNICODE_STRING ;
typedef scalar_t__* PULONG ;
typedef TYPE_5__* PNTFS_ATTR_CONTEXT ;
typedef TYPE_6__* PINDEX_ROOT_ATTRIBUTE ;
typedef TYPE_7__* PINDEX_ENTRY_ATTRIBUTE ;
typedef int PFILE_RECORD_HEADER ;
typedef int PDEVICE_EXTENSION ;
typedef scalar_t__ PCHAR ;
typedef int NTSTATUS ;
typedef int INDEX_ENTRY_ATTRIBUTE ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,scalar_t__,int ,TYPE_5__*,int *,int ,scalar_t__*,scalar_t__*,int ,int ,int*) ;
 scalar_t__ FUNC_4 (int ,TYPE_7__*,int ,int ) ;
 int FUNC_5 (char*,int ,int ,TYPE_6__*,scalar_t__,TYPE_7__*,TYPE_7__*,int ,scalar_t__,scalar_t__,char*,char*,int*) ;
 int FUNC_6 (char*) ;
 scalar_t__* FUNC_7 (int ,int,int ) ;
 int FUNC_8 (scalar_t__*,int ) ;
 int FUNC_9 (int ,int ,int ,char*,int,TYPE_5__**,int *) ;
 int FUNC_10 (TYPE_7__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_8 ;
 int FUNC_12 (int ,TYPE_5__*,int ,scalar_t__,int) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (int *,scalar_t__*,int) ;
 int FUNC_15 (scalar_t__*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

NTSTATUS
FUNC_16(PDEVICE_EXTENSION VAR_13,
                   PFILE_RECORD_HEADER VAR_14,
                   PINDEX_ROOT_ATTRIBUTE VAR_15,
                   ULONG VAR_16,
                   PINDEX_ENTRY_ATTRIBUTE VAR_17,
                   PINDEX_ENTRY_ATTRIBUTE VAR_18,
                   PUNICODE_STRING VAR_19,
                   PULONG VAR_20,
                   PULONG VAR_21,
                   BOOLEAN VAR_22,
                   BOOLEAN VAR_23,
                   ULONGLONG *VAR_24)
{
    NTSTATUS VAR_25;
    PINDEX_ENTRY_ATTRIBUTE VAR_26;
    PNTFS_ATTR_CONTEXT VAR_27;
    PNTFS_ATTR_CONTEXT VAR_28;
    PCHAR *VAR_29;
    ULONG *VAR_30;
    RTL_BITMAP VAR_31;

    FUNC_5("BrowseIndexEntries(%p, %p, %p, %lu, %p, %p, %wZ, %lu, %lu, %s, %s, %p)\n",
           VAR_13,
           VAR_14,
           VAR_15,
           VAR_16,
           VAR_17,
           VAR_18,
           VAR_19,
           *VAR_20,
           *VAR_21,
           VAR_22 ? "TRUE" : "FALSE",
           VAR_23 ? "TRUE" : "FALSE",
           VAR_24);


    VAR_25 = FUNC_9(VAR_13, VAR_14, VAR_1, L"$I30", 4, &VAR_27, ((void*)0));
    if (FUNC_11(VAR_25))
    {
        ULONGLONG VAR_32;

        VAR_25 = FUNC_9(VAR_13, VAR_14, VAR_0, L"$I30", 4, &VAR_28, ((void*)0));
        if (!FUNC_11(VAR_25))
        {
            FUNC_6("Potential file system corruption detected!\n");
            FUNC_13(VAR_27);
            return VAR_25;
        }


        VAR_32 = FUNC_2(VAR_28->pRecord);



        VAR_29 = FUNC_7(VAR_8, VAR_32 + sizeof(ULONG), VAR_12);
        if (!VAR_29)
        {
            FUNC_6("Error: failed to allocate bitmap!");
            FUNC_13(VAR_28);
            FUNC_13(VAR_27);
            return VAR_9;
        }

        FUNC_15(VAR_29, VAR_32 + sizeof(ULONG));


        VAR_30 = (PULONG)FUNC_0((ULONG_PTR)VAR_29, sizeof(ULONG));


        VAR_25 = FUNC_12(VAR_13, VAR_28, 0, (PCHAR)VAR_30, VAR_32);
        if (!FUNC_11(VAR_25))
        {
            FUNC_6("ERROR: Failed to read bitmap attribute!\n");
            FUNC_8(VAR_29, VAR_12);
            FUNC_13(VAR_28);
            FUNC_13(VAR_27);
            return VAR_25;
        }


        FUNC_14(&VAR_31, VAR_30, VAR_32 * 8);
    }
    else
    {

        VAR_27 = ((void*)0);
    }



    VAR_26 = VAR_17;
    while (VAR_26 <= VAR_18)
    {

        if (VAR_26->Flags & VAR_6)
        {
            if (!(VAR_15->Header.Flags & VAR_2) || !VAR_27)
            {
                FUNC_6("Filesystem corruption detected!\n");
            }
            else
            {
                VAR_25 = FUNC_3(VAR_13,
                                                   VAR_14,
                                                   VAR_16,
                                                   VAR_19,
                                                   VAR_27,
                                                   &VAR_31,
                                                   FUNC_10(VAR_26),
                                                   VAR_20,
                                                   VAR_21,
                                                   VAR_22,
                                                   VAR_23,
                                                   VAR_24);
                if (FUNC_11(VAR_25))
                {
                    FUNC_8(VAR_29, VAR_12);
                    FUNC_13(VAR_28);
                    FUNC_13(VAR_27);
                    return VAR_25;
                }
            }
        }


        if (VAR_26->Flags & VAR_5)
            break;


        if ((VAR_26->Data.Directory.IndexedFile & VAR_7) >= VAR_3 &&
            *VAR_21 >= *VAR_20 &&
            VAR_26->FileName.NameType != VAR_4 &&
            FUNC_4(VAR_19, VAR_26, VAR_22, VAR_23))
        {
            *VAR_20 = *VAR_21;
            *VAR_24 = (VAR_26->Data.Directory.IndexedFile & VAR_7);
            if (VAR_27)
            {
                FUNC_8(VAR_29, VAR_12);
                FUNC_13(VAR_28);
                FUNC_13(VAR_27);
            }
            return VAR_11;
        }


        (*VAR_21) += 1;
        FUNC_1(VAR_26->Length >= sizeof(INDEX_ENTRY_ATTRIBUTE));
        VAR_26 = (PINDEX_ENTRY_ATTRIBUTE)((PCHAR)VAR_26 + VAR_26->Length);
    }

    if (VAR_27)
    {
        FUNC_8(VAR_29, VAR_12);
        FUNC_13(VAR_28);
        FUNC_13(VAR_27);
    }

    return VAR_10;
}
