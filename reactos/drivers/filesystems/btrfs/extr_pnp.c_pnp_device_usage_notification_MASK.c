
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* Vpb; int page_file_count; } ;
typedef TYPE_4__ device_extension ;
struct TYPE_14__ {TYPE_4__* DeviceExtension; } ;
struct TYPE_10__ {int Type; scalar_t__ InPath; } ;
struct TYPE_11__ {TYPE_2__ UsageNotification; } ;
struct TYPE_13__ {TYPE_3__ Parameters; } ;
struct TYPE_9__ {int RealDevice; } ;
typedef int PIRP ;
typedef TYPE_5__* PIO_STACK_LOCATION ;
typedef TYPE_6__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;





 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static NTSTATUS FUNC_4(PDEVICE_OBJECT VAR_0, PIRP VAR_1) {
    PIO_STACK_LOCATION VAR_2 = FUNC_2(VAR_1);
    device_extension* VAR_3 = VAR_0->DeviceExtension;

    if (VAR_2->Parameters.UsageNotification.InPath) {
        switch (VAR_2->Parameters.UsageNotification.Type) {
            case 128:
            case 129:
            case 130:
                FUNC_0(&VAR_3->page_file_count, VAR_2->Parameters.UsageNotification.InPath);
                break;

            default:
                break;
        }
    }

    FUNC_3(VAR_1);
    return FUNC_1(VAR_3->Vpb->RealDevice, VAR_1);
}
