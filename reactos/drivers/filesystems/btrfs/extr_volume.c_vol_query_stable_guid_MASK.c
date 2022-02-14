
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {TYPE_6__* pdode; int pdo; } ;
typedef TYPE_5__ volume_device_extension ;
struct TYPE_19__ {int uuid; } ;
typedef TYPE_6__ pdo_device_extension ;
struct TYPE_22__ {int StableGuid; } ;
struct TYPE_15__ {int OutputBufferLength; } ;
struct TYPE_16__ {TYPE_2__ DeviceIoControl; } ;
struct TYPE_21__ {TYPE_3__ Parameters; } ;
struct TYPE_17__ {int Information; } ;
struct TYPE_14__ {TYPE_9__* SystemBuffer; } ;
struct TYPE_20__ {TYPE_4__ IoStatus; TYPE_1__ AssociatedIrp; } ;
typedef TYPE_7__* PIRP ;
typedef TYPE_8__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;
typedef TYPE_9__ MOUNTDEV_STABLE_GUID ;
typedef int BTRFS_UUID ;


 TYPE_8__* FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static NTSTATUS FUNC_2(volume_device_extension* VAR_3, PIRP VAR_4) {
    PIO_STACK_LOCATION VAR_5 = FUNC_0(VAR_4);
    MOUNTDEV_STABLE_GUID* VAR_6;
    pdo_device_extension* VAR_7;

    if (VAR_5->Parameters.DeviceIoControl.OutputBufferLength < sizeof(MOUNTDEV_STABLE_GUID)) {
        VAR_4->IoStatus.Information = sizeof(MOUNTDEV_STABLE_GUID);
        return VAR_0;
    }

    VAR_6 = VAR_4->AssociatedIrp.SystemBuffer;

    if (!VAR_3->pdo)
        return VAR_1;

    VAR_7 = VAR_3->pdode;

    FUNC_1(&VAR_6->StableGuid, &VAR_7->uuid, sizeof(BTRFS_UUID));

    VAR_4->IoStatus.Information = sizeof(MOUNTDEV_STABLE_GUID);

    return VAR_2;
}
