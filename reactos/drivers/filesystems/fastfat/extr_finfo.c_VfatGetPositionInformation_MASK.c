
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int QuadPart; } ;
struct TYPE_15__ {TYPE_2__ CurrentByteOffset; } ;
struct TYPE_12__ {int QuadPart; } ;
struct TYPE_14__ {TYPE_1__ CurrentByteOffset; } ;
typedef TYPE_3__* PVFATFCB ;
typedef int* PULONG ;
typedef TYPE_4__* PFILE_POSITION_INFORMATION ;
typedef TYPE_3__* PFILE_OBJECT ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FILE_POSITION_INFORMATION ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static
NTSTATUS
FUNC_2(
    PFILE_OBJECT VAR_2,
    PVFATFCB VAR_3,
    PDEVICE_EXTENSION VAR_4,
    PFILE_POSITION_INFORMATION VAR_5,
    PULONG VAR_6)
{
    FUNC_1(VAR_2);
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);

    FUNC_0("VfatGetPositionInformation()\n");

    if (*VAR_6 < sizeof(FILE_POSITION_INFORMATION))
        return VAR_0;

    VAR_5->CurrentByteOffset.QuadPart =
        VAR_2->CurrentByteOffset.QuadPart;

    FUNC_0("Getting position %I64x\n",
           VAR_5->CurrentByteOffset.QuadPart);

    *VAR_6 -= sizeof(FILE_POSITION_INFORMATION);
    return VAR_1;
}
