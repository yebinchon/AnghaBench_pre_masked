
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef int WCHAR ;
typedef void* ULONGLONG ;
struct TYPE_38__ {int NameLength; int NameType; int Name; } ;
struct TYPE_37__ {int LinkCount; } ;
struct TYPE_29__ {int FileAttributes; int NameType; } ;
struct TYPE_32__ {void* QuadPart; } ;
struct TYPE_31__ {void* QuadPart; } ;
struct TYPE_30__ {void* QuadPart; } ;
struct TYPE_33__ {TYPE_3__ AllocationSize; TYPE_2__ ValidDataLength; TYPE_1__ FileSize; } ;
struct TYPE_36__ {char* PathName; int RefCount; int LinkCount; void* MFTIndex; TYPE_10__ Entry; TYPE_4__ RFCB; } ;
struct TYPE_35__ {int FileAttribute; } ;
struct TYPE_34__ {scalar_t__* Buffer; int Length; } ;
typedef TYPE_5__* PUNICODE_STRING ;
typedef TYPE_6__* PSTANDARD_INFORMATION ;
typedef int PNTFS_VCB ;
typedef TYPE_7__* PNTFS_FCB ;
typedef TYPE_8__* PFILE_RECORD_HEADER ;
typedef TYPE_9__* PFILENAME_ATTRIBUTE ;
typedef char* PCWSTR ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ,TYPE_7__*,TYPE_5__*,char*,TYPE_8__*,TYPE_7__**) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 TYPE_9__* FUNC_2 (int ,TYPE_8__*) ;
 TYPE_6__* FUNC_3 (int ,TYPE_8__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,TYPE_7__*) ;
 TYPE_7__* FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int ,TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 void* FUNC_8 (int ,TYPE_8__*,char*,int,void**) ;
 int FUNC_9 (int *,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (TYPE_10__*,TYPE_9__*,int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (char*) ;

NTSTATUS
FUNC_14(PNTFS_VCB VAR_8,
                        PNTFS_FCB VAR_9,
                        PUNICODE_STRING VAR_10,
                        PCWSTR VAR_11,
                        PFILE_RECORD_HEADER VAR_12,
                        ULONGLONG VAR_13,
                        PNTFS_FCB * VAR_14)
{
    WCHAR VAR_15[VAR_1];
    PFILENAME_ATTRIBUTE VAR_16;
    PSTANDARD_INFORMATION VAR_17;
    PNTFS_FCB VAR_18;
    ULONGLONG VAR_19, VAR_20;

    FUNC_0("NtfsMakeFCBFromDirEntry(%p, %p, %wZ, %p, %p, %p)\n", VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_14);

    VAR_16 = FUNC_2(VAR_8, VAR_12);
    if (!VAR_16)
    {
        return VAR_5;
    }

    if (VAR_9 && VAR_10)
    {
        if (VAR_10->Buffer[0] != 0 && FUNC_13(VAR_9->PathName) +
            sizeof(WCHAR) + VAR_10->Length / sizeof(WCHAR) > VAR_1)
        {
            return VAR_4;
        }

        FUNC_12(VAR_15, VAR_9->PathName);
        if (!FUNC_7(VAR_9))
        {
            FUNC_11(VAR_15, L"\\");
        }
        FUNC_11(VAR_15, VAR_10->Buffer);
    }
    else
    {
        FUNC_9(VAR_15, VAR_16->Name, VAR_16->NameLength * sizeof (WCHAR));
        VAR_15[VAR_16->NameLength] = VAR_7;
    }

    VAR_19 = FUNC_8(VAR_8, VAR_12, (VAR_11 ? VAR_11 : L""), (VAR_11 ? FUNC_13(VAR_11) : 0), &VAR_20);

    VAR_18 = FUNC_5(VAR_15, VAR_11, VAR_8);
    if (!VAR_18)
    {
        return VAR_3;
    }

    FUNC_10(&VAR_18->Entry, VAR_16, FUNC_1(VAR_0, VAR_2));
    VAR_18->Entry.NameType = VAR_16->NameType;
    VAR_18->RFCB.FileSize.QuadPart = VAR_19;
    VAR_18->RFCB.ValidDataLength.QuadPart = VAR_19;
    VAR_18->RFCB.AllocationSize.QuadPart = VAR_20;

    VAR_17 = FUNC_3(VAR_8, VAR_12);
    if (VAR_17 != ((void*)0))
    {
        VAR_18->Entry.FileAttributes |= VAR_17->FileAttribute;
    }

    FUNC_6(VAR_8, VAR_18);
    VAR_18->RefCount = 1;
    VAR_18->MFTIndex = VAR_13;
    VAR_18->LinkCount = VAR_12->LinkCount;
    FUNC_4(VAR_8, VAR_18);
    *VAR_14 = VAR_18;

    return VAR_6;
}
