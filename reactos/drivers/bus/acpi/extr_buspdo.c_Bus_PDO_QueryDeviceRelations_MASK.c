
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_21__ {int Count; int * Objects; } ;
struct TYPE_14__ {int Type; } ;
struct TYPE_15__ {TYPE_1__ QueryDeviceRelations; } ;
struct TYPE_20__ {TYPE_2__ Parameters; } ;
struct TYPE_17__ {int Status; int Information; } ;
struct TYPE_19__ {TYPE_4__ IoStatus; } ;
struct TYPE_16__ {int Self; } ;
struct TYPE_18__ {TYPE_3__ Common; } ;
typedef TYPE_5__* PPDO_DEVICE_DATA ;
typedef TYPE_6__* PIRP ;
typedef TYPE_7__* PIO_STACK_LOCATION ;
typedef TYPE_8__* PDEVICE_RELATIONS ;
typedef int NTSTATUS ;
typedef int DEVICE_RELATIONS ;


 int FUNC_0 (char*,int) ;


 TYPE_8__* FUNC_1 (int ,int,char) ;
 TYPE_7__* FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


NTSTATUS
FUNC_5(
     PPDO_DEVICE_DATA VAR_3,
      PIRP VAR_4 )
{

    PIO_STACK_LOCATION VAR_5;
    PDEVICE_RELATIONS VAR_6;
    NTSTATUS VAR_7;

    FUNC_4 ();

    VAR_5 = FUNC_2 (VAR_4);

    switch (VAR_5->Parameters.QueryDeviceRelations.Type) {

    case 128:

        VAR_6 = (PDEVICE_RELATIONS) VAR_4->IoStatus.Information;
        if (VAR_6) {




            FUNC_0("Someone above is handling TargetDeviceRelation\n", !VAR_6);
        }

        VAR_6 = FUNC_1(VAR_0,
                                                sizeof(DEVICE_RELATIONS),
                                                'IpcA');
        if (!VAR_6) {
                VAR_7 = VAR_1;
                break;
        }
        VAR_6->Count = 1;
        VAR_6->Objects[0] = VAR_3->Common.Self;
        FUNC_3(VAR_3->Common.Self);

        VAR_7 = VAR_2;
        VAR_4->IoStatus.Information = (ULONG_PTR) VAR_6;
        break;

    case 131:
    case 130:
    case 129:
    default:
        VAR_7 = VAR_4->IoStatus.Status;
    }

    return VAR_7;
}
