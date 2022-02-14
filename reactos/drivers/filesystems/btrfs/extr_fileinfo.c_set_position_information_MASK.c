
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int QuadPart; } ;
struct TYPE_13__ {TYPE_2__ CurrentByteOffset; } ;
struct TYPE_12__ {TYPE_2__ CurrentByteOffset; } ;
struct TYPE_9__ {scalar_t__ SystemBuffer; } ;
struct TYPE_11__ {TYPE_1__ AssociatedIrp; } ;
typedef TYPE_3__* PIRP ;
typedef TYPE_4__* PFILE_OBJECT ;
typedef int NTSTATUS ;
typedef TYPE_5__ FILE_POSITION_INFORMATION ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_4__*,int ) ;

__attribute__((used)) static NTSTATUS FUNC_1(PFILE_OBJECT VAR_1, PIRP VAR_2) {
    FILE_POSITION_INFORMATION* VAR_3 = (FILE_POSITION_INFORMATION*)VAR_2->AssociatedIrp.SystemBuffer;

    FUNC_0("setting the position on %p to %I64x\n", VAR_1, VAR_3->CurrentByteOffset.QuadPart);



    VAR_1->CurrentByteOffset = VAR_3->CurrentByteOffset;

    return VAR_0;
}
