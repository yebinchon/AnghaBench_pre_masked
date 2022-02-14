
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_16__ {scalar_t__ BytesPerCluster; } ;
struct TYPE_21__ {TYPE_1__ FatInfo; } ;
struct TYPE_20__ {int DeleteFile; } ;
struct TYPE_19__ {void* DeletePending; int SectionObjectPointer; } ;
struct TYPE_17__ {int Length; int* Buffer; } ;
struct TYPE_18__ {int Flags; TYPE_2__ LongNameU; int PathNameU; } ;
typedef TYPE_3__* PVFATFCB ;
typedef TYPE_4__* PFILE_OBJECT ;
typedef TYPE_5__* PFILE_DISPOSITION_INFORMATION ;
typedef TYPE_6__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_4 (TYPE_6__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static
NTSTATUS
FUNC_8(
    PFILE_OBJECT VAR_8,
    PVFATFCB VAR_9,
    PDEVICE_EXTENSION VAR_10,
    PFILE_DISPOSITION_INFORMATION VAR_11)
{
    FUNC_2("FsdSetDispositionInformation(<%wZ>, Delete %u)\n", &VAR_9->PathNameU, VAR_11->DeleteFile);

    FUNC_0(VAR_10 != ((void*)0));
    FUNC_0(VAR_10->FatInfo.BytesPerCluster != 0);
    FUNC_0(VAR_9 != ((void*)0));

    if (!VAR_11->DeleteFile)
    {

        VAR_9->Flags &= ~VAR_1;
        VAR_8->DeletePending = VAR_0;
        return VAR_6;
    }

    if (FUNC_1(VAR_9->Flags, VAR_1))
    {

        VAR_8->DeletePending = VAR_7;
        return VAR_6;
    }

    if (FUNC_6(VAR_9))
    {
        return VAR_4;
    }

    if (FUNC_7(VAR_9) ||
        (VAR_9->LongNameU.Length == sizeof(WCHAR) && VAR_9->LongNameU.Buffer[0] == L'.') ||
        (VAR_9->LongNameU.Length == 2 * sizeof(WCHAR) && VAR_9->LongNameU.Buffer[0] == L'.' && VAR_9->LongNameU.Buffer[1] == L'.'))
    {

        return VAR_3;
    }

    if (!FUNC_3 (VAR_8->SectionObjectPointer, VAR_2))
    {


        FUNC_2("MmFlushImageSection returned FALSE\n");
        return VAR_4;
    }

    if (FUNC_5(VAR_9) && !FUNC_4(VAR_10, VAR_9))
    {


        return VAR_5;
    }


    VAR_9->Flags |= VAR_1;
    VAR_8->DeletePending = VAR_7;

    return VAR_6;
}
