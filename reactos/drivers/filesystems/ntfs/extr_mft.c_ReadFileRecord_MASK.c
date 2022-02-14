
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_9__ {int BytesPerFileRecord; } ;
struct TYPE_11__ {TYPE_1__ NtfsInfo; int MFTContext; } ;
struct TYPE_10__ {int Ntfs; int SequenceNumber; } ;
typedef TYPE_2__* PFILE_RECORD_HEADER ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int PCHAR ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,TYPE_3__*,...) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int ,int,int ,int) ;
 int VAR_0 ;

NTSTATUS
FUNC_4(PDEVICE_EXTENSION VAR_1,
               ULONGLONG VAR_2,
               PFILE_RECORD_HEADER VAR_3)
{
    ULONGLONG VAR_4;

    FUNC_0("ReadFileRecord(%p, %I64x, %p)\n", VAR_1, VAR_2, VAR_3);

    VAR_4 = FUNC_3(VAR_1, VAR_1->MFTContext, VAR_2 * VAR_1->NtfsInfo.BytesPerFileRecord, (PCHAR)VAR_3, VAR_1->NtfsInfo.BytesPerFileRecord);
    if (VAR_4 != VAR_1->NtfsInfo.BytesPerFileRecord)
    {
        FUNC_1("ReadFileRecord failed: %I64u read, %lu expected\n", VAR_4, VAR_1->NtfsInfo.BytesPerFileRecord);
        return VAR_0;
    }


    FUNC_0("Sequence number: %u\n", VAR_3->SequenceNumber);
    return FUNC_2(VAR_1, &VAR_3->Ntfs);
}
