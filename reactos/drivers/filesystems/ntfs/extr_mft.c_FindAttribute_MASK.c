
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int WCHAR ;
typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_32__ {int Offset; } ;
struct TYPE_31__ {int FileRecLookasideList; } ;
struct TYPE_30__ {int MFTRecordNumber; } ;
struct TYPE_29__ {scalar_t__ Type; scalar_t__ NameLength; int MFTIndex; scalar_t__ NameOffset; } ;
struct TYPE_28__ {int FileMFTIndex; } ;
struct TYPE_27__ {scalar_t__ Type; scalar_t__ NameLength; scalar_t__ NameOffset; } ;
typedef scalar_t__ PWCHAR ;
typedef int * PULONG ;
typedef TYPE_1__* PNTFS_ATTR_RECORD ;
typedef TYPE_2__* PNTFS_ATTR_CONTEXT ;
typedef TYPE_3__* PNTFS_ATTRIBUTE_LIST_ITEM ;
typedef TYPE_4__* PFILE_RECORD_HEADER ;
typedef TYPE_5__* PDEVICE_EXTENSION ;
typedef int PCWSTR ;
typedef scalar_t__ PCHAR ;
typedef int NTSTATUS ;
typedef TYPE_6__ FIND_ATTR_CONTXT ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*,TYPE_4__*,scalar_t__,TYPE_1__**) ;
 int FUNC_6 (TYPE_6__*,TYPE_3__**) ;
 int FUNC_7 (TYPE_6__*,TYPE_1__**) ;
 int FUNC_8 (TYPE_6__*,TYPE_3__**) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_5__*,int,TYPE_4__*) ;
 scalar_t__ FUNC_12 (scalar_t__,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

NTSTATUS
FUNC_13(PDEVICE_EXTENSION VAR_6,
              PFILE_RECORD_HEADER VAR_7,
              ULONG VAR_8,
              PCWSTR VAR_9,
              ULONG VAR_10,
              PNTFS_ATTR_CONTEXT * VAR_11,
              PULONG VAR_12)
{
    BOOLEAN VAR_13;
    NTSTATUS VAR_14;
    FIND_ATTR_CONTXT VAR_15;
    PNTFS_ATTR_RECORD VAR_16;
    PNTFS_ATTRIBUTE_LIST_ITEM VAR_17;

    FUNC_0("FindAttribute(%p, %p, 0x%x, %S, %lu, %p, %p)\n", VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);

    VAR_13 = VAR_0;
    VAR_14 = FUNC_5(&VAR_15, VAR_6, VAR_7, VAR_0, &VAR_16);
    while (FUNC_9(VAR_14))
    {
        if (VAR_16->Type == VAR_8 && VAR_16->NameLength == VAR_10)
        {
            if (VAR_10 != 0)
            {
                PWCHAR VAR_18;

                VAR_18 = (PWCHAR)((PCHAR)VAR_16 + VAR_16->NameOffset);
                FUNC_0("%.*S, %.*S\n", VAR_16->NameLength, VAR_18, VAR_10, VAR_9);
                if (FUNC_12(VAR_18, VAR_9, VAR_10 * sizeof(WCHAR)) == (VAR_10 * sizeof(WCHAR)))
                {
                    VAR_13 = VAR_5;
                }
            }
            else
            {
                VAR_13 = VAR_5;
            }

            if (VAR_13)
            {

                FUNC_0("Found context\n");
                *VAR_11 = FUNC_10(VAR_16);

                (*VAR_11)->FileMFTIndex = VAR_7->MFTRecordNumber;

                if (VAR_12 != ((void*)0))
                    *VAR_12 = VAR_15.Offset;

                FUNC_4(&VAR_15);
                return VAR_4;
            }
        }

        VAR_14 = FUNC_7(&VAR_15, &VAR_16);
    }


    VAR_14 = FUNC_6(&VAR_15, &VAR_17);
    while (FUNC_9(VAR_14))
    {
        if (VAR_17->Type == VAR_8 && VAR_17->NameLength == VAR_10)
        {
            if (VAR_10 != 0)
            {
                PWCHAR VAR_19;

                VAR_19 = (PWCHAR)((PCHAR)VAR_17 + VAR_17->NameOffset);
                FUNC_0("%.*S, %.*S\n", VAR_17->NameLength, VAR_19, VAR_10, VAR_9);
                if (FUNC_12(VAR_19, VAR_9, VAR_10 * sizeof(WCHAR)) == (VAR_10 * sizeof(WCHAR)))
                {
                    VAR_13 = VAR_5;
                }
            }
            else
            {
                VAR_13 = VAR_5;
            }

            if (VAR_13 == VAR_5)
            {

                ULONGLONG VAR_20;
                PFILE_RECORD_HEADER VAR_21;

                VAR_20 = VAR_17->MFTIndex & VAR_1;
                VAR_21 = FUNC_2(&VAR_6->FileRecLookasideList);

                if (VAR_21 == ((void*)0))
                {
                    FUNC_4(&VAR_15);
                    return VAR_2;
                }


                if (VAR_7->MFTRecordNumber == VAR_20)
                {
                    FUNC_1("Attribute list references missing attribute to this file entry !");
                    FUNC_3(&VAR_6->FileRecLookasideList, VAR_21);
                    FUNC_4(&VAR_15);
                    return VAR_3;
                }

                FUNC_11(VAR_6, VAR_20, VAR_21);
                VAR_14 = FUNC_13(VAR_6, VAR_21, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
                FUNC_3(&VAR_6->FileRecLookasideList, VAR_21);
                FUNC_4(&VAR_15);
                return VAR_14;
            }
        }
        VAR_14 = FUNC_8(&VAR_15, &VAR_17);
    }
    FUNC_4(&VAR_15);
    return VAR_3;
}
