
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ GptAttributes; } ;
typedef TYPE_5__ VOLUME_GET_GPT_ATTRIBUTES_INFORMATION ;
struct TYPE_11__ {int OutputBufferLength; } ;
struct TYPE_12__ {TYPE_1__ DeviceIoControl; } ;
struct TYPE_17__ {TYPE_2__ Parameters; } ;
struct TYPE_14__ {int Information; } ;
struct TYPE_13__ {scalar_t__ SystemBuffer; } ;
struct TYPE_16__ {TYPE_4__ IoStatus; TYPE_3__ AssociatedIrp; } ;
typedef TYPE_6__* PIRP ;
typedef TYPE_7__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;


 TYPE_7__* FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static NTSTATUS FUNC_1(PIRP VAR_2) {
    PIO_STACK_LOCATION VAR_3 = FUNC_0(VAR_2);
    VOLUME_GET_GPT_ATTRIBUTES_INFORMATION* VAR_4;

    if (VAR_3->Parameters.DeviceIoControl.OutputBufferLength < sizeof(VOLUME_GET_GPT_ATTRIBUTES_INFORMATION))
        return VAR_0;

    VAR_4 = (VOLUME_GET_GPT_ATTRIBUTES_INFORMATION*)VAR_2->AssociatedIrp.SystemBuffer;

    VAR_4->GptAttributes = 0;

    VAR_2->IoStatus.Information = sizeof(VOLUME_GET_GPT_ATTRIBUTES_INFORMATION);

    return VAR_1;
}
