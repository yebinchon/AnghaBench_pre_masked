
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_18__ {scalar_t__ Length; } ;
struct TYPE_17__ {int HasValidVCN; scalar_t__ KeyCount; TYPE_4__* FirstKey; int VCN; } ;
struct TYPE_16__ {struct TYPE_16__* NextKey; TYPE_8__* IndexEntry; } ;
struct TYPE_12__ {int UsaOffset; int UsaCount; int Type; } ;
struct TYPE_13__ {int FirstEntryOffset; int TotalSizeOfEntries; int Flags; scalar_t__ AllocatedSize; } ;
struct TYPE_15__ {TYPE_11__ Ntfs; TYPE_1__ Header; int VCN; } ;
struct TYPE_14__ {scalar_t__ Length; int KeyLength; } ;
typedef TYPE_2__* PINDEX_ENTRY_ATTRIBUTE ;
typedef TYPE_3__* PINDEX_BUFFER ;
typedef int PDEVICE_EXTENSION ;
typedef TYPE_4__* PB_TREE_KEY ;
typedef TYPE_5__* PB_TREE_FILENAME_NODE ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_11__*) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*,TYPE_8__*,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,scalar_t__) ;
 int VAR_4 ;

NTSTATUS
FUNC_7(PDEVICE_EXTENSION VAR_5,
                               PB_TREE_FILENAME_NODE VAR_6,
                               ULONG VAR_7,
                               BOOLEAN VAR_8,
                               PINDEX_BUFFER VAR_9)
{
    ULONG VAR_10;
    PB_TREE_KEY VAR_11;
    PINDEX_ENTRY_ATTRIBUTE VAR_12;
    NTSTATUS VAR_13;


    FUNC_6(VAR_9, VAR_7);
    VAR_9->Ntfs.Type = VAR_3;
    VAR_9->Ntfs.UsaOffset = 0x28;
    VAR_9->Ntfs.UsaCount = 9;


    FUNC_0(VAR_6->HasValidVCN);
    VAR_9->VCN = VAR_6->VCN;



    VAR_9->Header.FirstEntryOffset = 0x28;
    VAR_9->Header.AllocatedSize = VAR_7 - FUNC_4(VAR_1, VAR_0);


    VAR_9->Header.TotalSizeOfEntries = VAR_9->Header.FirstEntryOffset;

    VAR_11 = VAR_6->FirstKey;
    VAR_12 = (PINDEX_ENTRY_ATTRIBUTE)((ULONG_PTR)&(VAR_9->Header)
                                                + VAR_9->Header.FirstEntryOffset);
    for (VAR_10 = 0; VAR_10 < VAR_6->KeyCount; VAR_10++)
    {

        ULONG VAR_14 = FUNC_4(VAR_1, VAR_0)
            + VAR_9->Header.TotalSizeOfEntries
            + VAR_12->Length;
        if (VAR_14 > VAR_7)
        {
            FUNC_3("TODO: Adding file would require creating a new node!\n");
            return VAR_4;
        }

        FUNC_0(VAR_11->IndexEntry->Length != 0);


        FUNC_5(VAR_12, VAR_11->IndexEntry, VAR_11->IndexEntry->Length);

        FUNC_2("Index Node Entry Stream Length: %u\nIndex Node Entry Length: %u\n",
               VAR_12->KeyLength,
               VAR_12->Length);


        VAR_9->Header.TotalSizeOfEntries += VAR_12->Length;


        if (VAR_8)
            VAR_9->Header.Flags = VAR_2;


        VAR_12 = (PINDEX_ENTRY_ATTRIBUTE)((ULONG_PTR)VAR_12 + VAR_12->Length);
        VAR_11 = VAR_11->NextKey;
    }

    VAR_13 = FUNC_1(VAR_5, &VAR_9->Ntfs);

    return VAR_13;
}
