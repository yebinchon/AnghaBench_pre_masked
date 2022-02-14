
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int UniqueID; int SilentInstall; } ;
struct TYPE_6__ {TYPE_4__* Capabilities; } ;
struct TYPE_7__ {TYPE_1__ DeviceCapabilities; } ;
struct TYPE_8__ {TYPE_2__ Parameters; } ;
typedef int PIRP ;
typedef TYPE_3__* PIO_STACK_LOCATION ;
typedef TYPE_4__* PDEVICE_CAPABILITIES ;
typedef int NTSTATUS ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static NTSTATUS FUNC_1(PIRP VAR_1) {
    PIO_STACK_LOCATION VAR_2 = FUNC_0(VAR_1);
    PDEVICE_CAPABILITIES VAR_3 = VAR_2->Parameters.DeviceCapabilities.Capabilities;

    VAR_3->UniqueID = 1;
    VAR_3->SilentInstall = 1;

    return VAR_0;
}
