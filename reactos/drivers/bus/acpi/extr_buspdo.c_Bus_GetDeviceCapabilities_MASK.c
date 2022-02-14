
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ Status; } ;
struct TYPE_16__ {TYPE_5__* Capabilities; } ;
struct TYPE_17__ {TYPE_2__ DeviceCapabilities; } ;
struct TYPE_19__ {int Size; int Version; int Address; int UINumber; TYPE_3__ Parameters; int MinorFunction; int MajorFunction; } ;
struct TYPE_15__ {int Status; } ;
struct TYPE_18__ {TYPE_1__ IoStatus; } ;
typedef TYPE_4__* PIRP ;
typedef TYPE_5__* PIO_STACK_LOCATION ;
typedef int PDEVICE_OBJECT ;
typedef TYPE_5__* PDEVICE_CAPABILITIES ;
typedef scalar_t__ NTSTATUS ;
typedef int KEVENT ;
typedef TYPE_7__ IO_STATUS_BLOCK ;
typedef int IO_STACK_LOCATION ;
typedef int DEVICE_CAPABILITIES ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (int ,int ,int *,int ,int *,int *,TYPE_7__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_5__*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

NTSTATUS
FUNC_9(
      PDEVICE_OBJECT VAR_9,
      PDEVICE_CAPABILITIES VAR_10
    )
{
    IO_STATUS_BLOCK VAR_11;
    KEVENT VAR_12;
    NTSTATUS VAR_13;
    PDEVICE_OBJECT VAR_14;
    PIO_STACK_LOCATION VAR_15;
    PIRP VAR_16;

    FUNC_7();




    FUNC_8( VAR_10, sizeof(DEVICE_CAPABILITIES) );
    VAR_10->Size = sizeof(DEVICE_CAPABILITIES);
    VAR_10->Version = 1;
    VAR_10->Address = -1;
    VAR_10->UINumber = -1;




    FUNC_4( &VAR_12, VAR_5, VAR_1 );

    VAR_14 = FUNC_2( VAR_9 );




    VAR_16 = FUNC_0(
        VAR_2,
        VAR_14,
        ((void*)0),
        0,
        ((void*)0),
        &VAR_12,
        &VAR_11
        );
    if (VAR_16 == ((void*)0)) {

        VAR_13 = VAR_6;
        goto GetDeviceCapabilitiesExit;

    }




    VAR_16->IoStatus.Status = VAR_7;




    VAR_15 = FUNC_3( VAR_16 );




    FUNC_8( VAR_15, sizeof(IO_STACK_LOCATION ) );
    VAR_15->MajorFunction = VAR_2;
    VAR_15->MinorFunction = VAR_3;
    VAR_15->Parameters.DeviceCapabilities.Capabilities = VAR_10;




    VAR_13 = FUNC_1( VAR_14, VAR_16 );
    if (VAR_13 == VAR_8) {
        FUNC_5(
            &VAR_12,
            VAR_0,
            VAR_4,
            VAR_1,
            ((void*)0)
            );
        VAR_13 = VAR_11.Status;

    }

GetDeviceCapabilitiesExit:



    FUNC_6( VAR_14 );




    return VAR_13;

}
