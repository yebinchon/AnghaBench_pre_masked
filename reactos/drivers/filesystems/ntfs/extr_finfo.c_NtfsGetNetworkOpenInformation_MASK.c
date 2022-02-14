
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_20__ {int FileAttributes; int ChangeTime; int LastWriteTime; int LastAccessTime; int CreationTime; } ;
struct TYPE_16__ {int QuadPart; } ;
struct TYPE_15__ {int QuadPart; } ;
struct TYPE_14__ {int QuadPart; } ;
struct TYPE_13__ {int QuadPart; } ;
struct TYPE_19__ {int FileAttributes; int AllocationSize; int EndOfFile; TYPE_4__ ChangeTime; TYPE_3__ LastWriteTime; TYPE_2__ LastAccessTime; TYPE_1__ CreationTime; } ;
struct TYPE_17__ {int AllocationSize; int FileSize; } ;
struct TYPE_18__ {TYPE_5__ RFCB; TYPE_8__ Entry; } ;
typedef int* PULONG ;
typedef TYPE_6__* PNTFS_FCB ;
typedef TYPE_7__* PFILE_NETWORK_OPEN_INFORMATION ;
typedef TYPE_8__* PFILENAME_ATTRIBUTE ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FILE_NETWORK_OPEN_INFORMATION ;


 int FUNC_0 (char*,TYPE_6__*,int ,TYPE_7__*,int*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
NTSTATUS
FUNC_2(PNTFS_FCB VAR_2,
                              PDEVICE_EXTENSION VAR_3,
                              PFILE_NETWORK_OPEN_INFORMATION VAR_4,
                              PULONG VAR_5)
{
    PFILENAME_ATTRIBUTE VAR_6 = &VAR_2->Entry;

    FUNC_0("NtfsGetNetworkOpenInformation(%p, %p, %p, %p)\n", VAR_2, VAR_3, VAR_4, VAR_5);

    if (*VAR_5 < sizeof(FILE_NETWORK_OPEN_INFORMATION))
        return VAR_0;

    VAR_4->CreationTime.QuadPart = VAR_6->CreationTime;
    VAR_4->LastAccessTime.QuadPart = VAR_6->LastAccessTime;
    VAR_4->LastWriteTime.QuadPart = VAR_6->LastWriteTime;
    VAR_4->ChangeTime.QuadPart = VAR_6->ChangeTime;

    VAR_4->EndOfFile = VAR_2->RFCB.FileSize;
    VAR_4->AllocationSize = VAR_2->RFCB.AllocationSize;

    FUNC_1(VAR_6->FileAttributes, &VAR_4->FileAttributes);

    *VAR_5 -= sizeof(FILE_NETWORK_OPEN_INFORMATION);
    return VAR_1;
}
