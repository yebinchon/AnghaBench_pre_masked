
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_16__ {int Count; int * Objects; } ;
struct TYPE_11__ {scalar_t__ Type; } ;
struct TYPE_12__ {TYPE_1__ QueryDeviceRelations; } ;
struct TYPE_15__ {TYPE_2__ Parameters; } ;
struct TYPE_13__ {scalar_t__ Information; int Status; } ;
struct TYPE_14__ {TYPE_3__ IoStatus; } ;
typedef TYPE_4__* PIRP ;
typedef TYPE_5__* PIO_STACK_LOCATION ;
typedef TYPE_6__* PDEVICE_RELATIONS ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int DEVICE_RELATIONS ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_6__* FUNC_1 (int ,int,int ) ;
 TYPE_5__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static NTSTATUS FUNC_4(PDEVICE_OBJECT VAR_5, PIRP VAR_6) {
    PIO_STACK_LOCATION VAR_7 = FUNC_2(VAR_6);
    PDEVICE_RELATIONS VAR_8;

    if (VAR_7->Parameters.QueryDeviceRelations.Type != VAR_4)
        return VAR_6->IoStatus.Status;

    VAR_8 = FUNC_1(VAR_1, sizeof(DEVICE_RELATIONS), VAR_0);
    if (!VAR_8) {
        FUNC_0("out of memory\n");
        return VAR_2;
    }

    VAR_8->Count = 1;
    VAR_8->Objects[0] = VAR_5;

    FUNC_3(VAR_5);

    VAR_6->IoStatus.Information = (ULONG_PTR)VAR_8;

    return VAR_3;
}
