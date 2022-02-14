
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int pdo_device_extension ;
struct TYPE_11__ {int IdType; } ;
struct TYPE_12__ {TYPE_1__ QueryId; } ;
struct TYPE_15__ {TYPE_2__ Parameters; } ;
struct TYPE_13__ {int Status; } ;
struct TYPE_14__ {TYPE_3__ IoStatus; } ;
typedef TYPE_4__* PIRP ;
typedef TYPE_5__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;




 TYPE_5__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static NTSTATUS FUNC_4(pdo_device_extension* VAR_0, PIRP VAR_1) {
    PIO_STACK_LOCATION VAR_2 = FUNC_0(VAR_1);

    switch (VAR_2->Parameters.QueryId.IdType) {
        case 129:
            FUNC_1("BusQueryDeviceID\n");
            return FUNC_2(VAR_0, VAR_1);

        case 128:
            FUNC_1("BusQueryHardwareIDs\n");
            return FUNC_3(VAR_1);

        default:
            break;
    }

    return VAR_1->IoStatus.Status;
}
