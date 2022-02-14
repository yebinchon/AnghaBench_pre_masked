
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int QuadPart; } ;
struct TYPE_12__ {TYPE_2__ CurrentByteOffset; } ;
struct TYPE_8__ {TYPE_4__* LowPart; } ;
struct TYPE_10__ {int QuadPart; TYPE_1__ u; } ;
struct TYPE_11__ {TYPE_3__ CurrentByteOffset; } ;
typedef TYPE_4__* PFILE_POSITION_INFORMATION ;
typedef TYPE_5__* PFILE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static
NTSTATUS
FUNC_1(
    PFILE_OBJECT VAR_1,
    PFILE_POSITION_INFORMATION VAR_2)
{
    FUNC_0("FsdSetPositionInformation()\n");

    FUNC_0("PositionInfo %p\n", VAR_2);
    FUNC_0("Setting position %u\n", VAR_2->CurrentByteOffset.u.LowPart);

    VAR_1->CurrentByteOffset.QuadPart =
        VAR_2->CurrentByteOffset.QuadPart;

    return VAR_0;
}
