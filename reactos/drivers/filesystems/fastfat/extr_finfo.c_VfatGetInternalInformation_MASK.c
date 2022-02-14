
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int BytesPerCluster; } ;
struct TYPE_14__ {TYPE_2__ FatInfo; } ;
struct TYPE_11__ {int QuadPart; } ;
struct TYPE_13__ {int entry; TYPE_1__ IndexNumber; } ;
typedef TYPE_3__* PVFATFCB ;
typedef int* PULONG ;
typedef TYPE_3__* PFILE_INTERNAL_INFORMATION ;
typedef TYPE_5__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int LONGLONG ;
typedef int FILE_INTERNAL_INFORMATION ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_5__*,int *) ;

__attribute__((used)) static
NTSTATUS
FUNC_2(
    PVFATFCB VAR_2,
    PDEVICE_EXTENSION VAR_3,
    PFILE_INTERNAL_INFORMATION VAR_4,
    PULONG VAR_5)
{
    FUNC_0(VAR_4);
    FUNC_0(VAR_2);

    if (*VAR_5 < sizeof(FILE_INTERNAL_INFORMATION))
        return VAR_0;

    VAR_4->IndexNumber.QuadPart = (LONGLONG)FUNC_1(VAR_3, &VAR_2->entry) * VAR_3->FatInfo.BytesPerCluster;

    *VAR_5 -= sizeof(FILE_INTERNAL_INFORMATION);
    return VAR_1;
}
