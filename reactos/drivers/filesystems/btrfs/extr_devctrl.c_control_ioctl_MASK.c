
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int IoControlCode; } ;
struct TYPE_13__ {int InputBufferLength; int OutputBufferLength; } ;
struct TYPE_14__ {TYPE_1__ DeviceIoControl; TYPE_2__ FileSystemControl; } ;
struct TYPE_17__ {TYPE_3__ Parameters; } ;
struct TYPE_15__ {int SystemBuffer; } ;
struct TYPE_16__ {int RequestorMode; TYPE_4__ AssociatedIrp; } ;
typedef TYPE_5__* PIRP ;
typedef TYPE_6__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;





 TYPE_6__* FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static NTSTATUS FUNC_6(PIRP VAR_2) {
    PIO_STACK_LOCATION VAR_3 = FUNC_0(VAR_2);
    NTSTATUS VAR_4;

    switch (VAR_3->Parameters.DeviceIoControl.IoControlCode) {
        case 129:
            VAR_4 = FUNC_5(FUNC_3(VAR_2, VAR_0), VAR_3->Parameters.FileSystemControl.OutputBufferLength);
            break;

        case 130:
            VAR_4 = FUNC_4(VAR_2->AssociatedIrp.SystemBuffer, VAR_3->Parameters.FileSystemControl.InputBufferLength, VAR_2->RequestorMode);
            break;

        case 128:
            VAR_4 = FUNC_2(VAR_2);
            break;

        default:
            FUNC_1("unhandled ioctl %x\n", VAR_3->Parameters.DeviceIoControl.IoControlCode);
            VAR_4 = VAR_1;
            break;
    }

    return VAR_4;
}
