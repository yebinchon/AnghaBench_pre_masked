
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_10__ {int OutputBufferLength; } ;
struct TYPE_11__ {TYPE_1__ FileSystemControl; } ;
struct TYPE_15__ {TYPE_2__ Parameters; } ;
struct TYPE_12__ {int Information; } ;
struct TYPE_13__ {int * SystemBuffer; } ;
struct TYPE_14__ {TYPE_3__ IoStatus; int * MdlAddress; TYPE_4__ AssociatedIrp; } ;
typedef TYPE_5__* PIRP ;
typedef TYPE_6__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static NTSTATUS FUNC_3(PIRP VAR_6) {
    PIO_STACK_LOCATION VAR_7 = FUNC_0(VAR_6);
    USHORT* VAR_8;

    FUNC_2("FSCTL_GET_COMPRESSION\n");

    if (VAR_6->AssociatedIrp.SystemBuffer) {
        VAR_8 = VAR_6->AssociatedIrp.SystemBuffer;
    } else if (VAR_6->MdlAddress != ((void*)0)) {
        VAR_8 = FUNC_1(VAR_6->MdlAddress, VAR_1);

        if (!VAR_8)
            return VAR_2;
    } else
        return VAR_4;

    if (VAR_7->Parameters.FileSystemControl.OutputBufferLength < sizeof(USHORT))
        return VAR_3;

    *VAR_8 = VAR_0;

    VAR_6->IoStatus.Information = sizeof(USHORT);

    return VAR_5;
}
