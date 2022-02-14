
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int uuid; } ;
struct TYPE_17__ {TYPE_3__ superblock; } ;
typedef TYPE_5__ device_extension ;
struct TYPE_20__ {int StableGuid; } ;
struct TYPE_13__ {int OutputBufferLength; } ;
struct TYPE_14__ {TYPE_1__ DeviceIoControl; } ;
struct TYPE_19__ {TYPE_2__ Parameters; } ;
struct TYPE_16__ {int Information; } ;
struct TYPE_18__ {TYPE_4__ IoStatus; TYPE_8__* UserBuffer; } ;
typedef TYPE_6__* PIRP ;
typedef TYPE_7__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;
typedef TYPE_8__ MOUNTDEV_STABLE_GUID ;
typedef int GUID ;


 TYPE_7__* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static NTSTATUS FUNC_3(device_extension* VAR_2, PIRP VAR_3) {
    MOUNTDEV_STABLE_GUID* VAR_4 = VAR_3->UserBuffer;
    PIO_STACK_LOCATION VAR_5 = FUNC_0(VAR_3);

    FUNC_2("IOCTL_MOUNTDEV_QUERY_STABLE_GUID\n");

    if (VAR_5->Parameters.DeviceIoControl.OutputBufferLength < sizeof(MOUNTDEV_STABLE_GUID))
        return VAR_0;

    FUNC_1(&VAR_4->StableGuid, &VAR_2->superblock.uuid, sizeof(GUID));

    VAR_3->IoStatus.Information = sizeof(MOUNTDEV_STABLE_GUID);

    return VAR_1;
}
