
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


typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ OutputBufferLength; } ;
struct TYPE_11__ {TYPE_1__ DeviceIoControl; } ;
struct TYPE_15__ {TYPE_2__ Parameters; } ;
struct TYPE_13__ {int Information; } ;
struct TYPE_12__ {scalar_t__ SystemBuffer; } ;
struct TYPE_14__ {TYPE_4__ IoStatus; TYPE_3__ AssociatedIrp; } ;
typedef TYPE_5__* PIRP ;
typedef TYPE_6__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;


 TYPE_6__* FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static NTSTATUS FUNC_1(PIRP VAR_2) {
    PIO_STACK_LOCATION VAR_3 = FUNC_0(VAR_2);
    uint8_t* VAR_4;

    if (VAR_3->Parameters.DeviceIoControl.OutputBufferLength == 0 || !VAR_2->AssociatedIrp.SystemBuffer)
        return VAR_0;

    VAR_4 = (uint8_t*)VAR_2->AssociatedIrp.SystemBuffer;

    *VAR_4 = 1;

    VAR_2->IoStatus.Information = 1;

    return VAR_1;
}
