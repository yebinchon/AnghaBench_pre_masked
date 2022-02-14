
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int pdo_device_extension ;
struct TYPE_16__ {int * DeviceExtension; } ;
struct TYPE_15__ {int MinorFunction; } ;
struct TYPE_13__ {int Status; } ;
struct TYPE_14__ {TYPE_1__ IoStatus; } ;
typedef TYPE_2__* PIRP ;
typedef TYPE_3__* PIO_STACK_LOCATION ;
typedef TYPE_4__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;

__attribute__((used)) static NTSTATUS FUNC_4(PDEVICE_OBJECT VAR_2, PIRP VAR_3) {
    PIO_STACK_LOCATION VAR_4 = FUNC_0(VAR_3);
    pdo_device_extension* VAR_5 = VAR_2->DeviceExtension;

    switch (VAR_4->MinorFunction) {
        case 132:
            return FUNC_3(VAR_5, VAR_3);

        case 129:
        case 135:
        case 128:
        case 130:
            return VAR_0;

        case 131:
            return VAR_1;

        case 134:
            return FUNC_1(VAR_5, VAR_3);

        case 133:
            return FUNC_2(VAR_2, VAR_3);
    }

    return VAR_3->IoStatus.Status;
}
