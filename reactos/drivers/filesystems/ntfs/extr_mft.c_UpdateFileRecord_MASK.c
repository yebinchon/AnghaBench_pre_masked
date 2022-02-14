
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_12__ {int BytesPerFileRecord; } ;
struct TYPE_14__ {TYPE_1__ NtfsInfo; int MFTContext; } ;
struct TYPE_13__ {int Ntfs; } ;
typedef int PUCHAR ;
typedef TYPE_2__* PFILE_RECORD_HEADER ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (char*,TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_3__*,int ,int,int const,int,int *,TYPE_2__*) ;

NTSTATUS
FUNC_6(PDEVICE_EXTENSION VAR_1,
                 ULONGLONG VAR_2,
                 PFILE_RECORD_HEADER VAR_3)
{
    ULONG VAR_4;
    NTSTATUS VAR_5 = VAR_0;

    FUNC_1("UpdateFileRecord(%p, 0x%I64x, %p)\n", VAR_1, VAR_2, VAR_3);


    FUNC_0(VAR_1, &VAR_3->Ntfs);


    VAR_5 = FUNC_5(VAR_1,
                            VAR_1->MFTContext,
                            VAR_2 * VAR_1->NtfsInfo.BytesPerFileRecord,
                            (const PUCHAR)VAR_3,
                            VAR_1->NtfsInfo.BytesPerFileRecord,
                            &VAR_4,
                            VAR_3);

    if (!FUNC_4(VAR_5))
    {
        FUNC_2("UpdateFileRecord failed: %lu written, %lu expected\n", VAR_4, VAR_1->NtfsInfo.BytesPerFileRecord);
    }


    FUNC_3(VAR_1, &VAR_3->Ntfs);

    return VAR_5;
}
