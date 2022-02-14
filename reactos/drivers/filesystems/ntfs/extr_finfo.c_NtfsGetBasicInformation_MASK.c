
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int FileAttributes; int ChangeTime; int LastWriteTime; int LastAccessTime; int CreationTime; } ;
struct TYPE_15__ {int QuadPart; } ;
struct TYPE_14__ {int QuadPart; } ;
struct TYPE_13__ {int QuadPart; } ;
struct TYPE_12__ {int QuadPart; } ;
struct TYPE_17__ {int FileAttributes; TYPE_4__ ChangeTime; TYPE_3__ LastWriteTime; TYPE_2__ LastAccessTime; TYPE_1__ CreationTime; } ;
struct TYPE_16__ {TYPE_7__ Entry; } ;
typedef int* PULONG ;
typedef TYPE_5__* PNTFS_FCB ;
typedef int PFILE_OBJECT ;
typedef TYPE_6__* PFILE_BASIC_INFORMATION ;
typedef TYPE_7__* PFILENAME_ATTRIBUTE ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int FILE_BASIC_INFORMATION ;


 int FUNC_0 (char*,int ,TYPE_5__*,int ,TYPE_6__*,int*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
NTSTATUS
FUNC_2(PFILE_OBJECT VAR_2,
                        PNTFS_FCB VAR_3,
                        PDEVICE_OBJECT VAR_4,
                        PFILE_BASIC_INFORMATION VAR_5,
                        PULONG VAR_6)
{
    PFILENAME_ATTRIBUTE VAR_7 = &VAR_3->Entry;

    FUNC_0("NtfsGetBasicInformation(%p, %p, %p, %p, %p)\n", VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

    if (*VAR_6 < sizeof(FILE_BASIC_INFORMATION))
        return VAR_0;

    VAR_5->CreationTime.QuadPart = VAR_7->CreationTime;
    VAR_5->LastAccessTime.QuadPart = VAR_7->LastAccessTime;
    VAR_5->LastWriteTime.QuadPart = VAR_7->LastWriteTime;
    VAR_5->ChangeTime.QuadPart = VAR_7->ChangeTime;

    FUNC_1(VAR_7->FileAttributes, &VAR_5->FileAttributes);

    *VAR_6 -= sizeof(FILE_BASIC_INFORMATION);

    return VAR_1;
}
