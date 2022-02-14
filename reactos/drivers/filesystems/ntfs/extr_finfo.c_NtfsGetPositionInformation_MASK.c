
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int QuadPart; } ;
struct TYPE_12__ {TYPE_1__ CurrentByteOffset; } ;
struct TYPE_10__ {int QuadPart; } ;
struct TYPE_11__ {TYPE_2__ CurrentByteOffset; } ;
typedef int* PULONG ;
typedef TYPE_3__* PFILE_POSITION_INFORMATION ;
typedef TYPE_4__* PFILE_OBJECT ;
typedef int NTSTATUS ;
typedef int FILE_POSITION_INFORMATION ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,TYPE_4__*,TYPE_3__*,int*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
NTSTATUS
FUNC_2(PFILE_OBJECT VAR_2,
                           PFILE_POSITION_INFORMATION VAR_3,
                           PULONG VAR_4)
{
    FUNC_1("NtfsGetPositionInformation(%p, %p, %p)\n", VAR_2, VAR_3, VAR_4);

    if (*VAR_4 < sizeof(FILE_POSITION_INFORMATION))
        return VAR_0;

    VAR_3->CurrentByteOffset.QuadPart = VAR_2->CurrentByteOffset.QuadPart;

    FUNC_0("Getting position %I64x\n",
           VAR_3->CurrentByteOffset.QuadPart);

    *VAR_4 -= sizeof(FILE_POSITION_INFORMATION);

    return VAR_1;
}
