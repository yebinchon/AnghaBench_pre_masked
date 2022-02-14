
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {int attached_device; } ;
typedef TYPE_5__ bus_device_extension ;
struct TYPE_19__ {int IdType; } ;
struct TYPE_18__ {int Type; } ;
struct TYPE_20__ {TYPE_2__ QueryId; TYPE_1__ QueryDeviceRelations; } ;
struct TYPE_24__ {int MinorFunction; TYPE_3__ Parameters; } ;
struct TYPE_21__ {void* Status; } ;
struct TYPE_23__ {TYPE_4__ IoStatus; } ;
typedef TYPE_6__* PIRP ;
typedef TYPE_7__* PIO_STACK_LOCATION ;
typedef void* NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 void* FUNC_0 (int ,TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 TYPE_7__* FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (TYPE_6__*) ;
 void* FUNC_6 (TYPE_6__*) ;
 void* FUNC_7 (TYPE_6__*) ;
 int VAR_3 ;

__attribute__((used)) static NTSTATUS FUNC_8(bus_device_extension* VAR_4, PIRP VAR_5) {
    NTSTATUS VAR_6 = VAR_5->IoStatus.Status;
    PIO_STACK_LOCATION VAR_7 = FUNC_2(VAR_5);
    bool VAR_8 = 0;

    switch (VAR_7->MinorFunction) {
        case 130:
            VAR_6 = FUNC_5(VAR_5);
            VAR_8 = 1;
            break;

        case 129:
            if (VAR_7->Parameters.QueryDeviceRelations.Type != VAR_1 || VAR_3)
                break;

            VAR_6 = FUNC_6(VAR_5);
            VAR_8 = 1;
            break;

        case 128:
            if (VAR_7->Parameters.QueryId.IdType != VAR_0)
                break;

            VAR_6 = FUNC_7(VAR_5);
            VAR_8 = 1;
            break;
    }

    if (!FUNC_4(VAR_6) && VAR_8) {
        VAR_5->IoStatus.Status = VAR_6;
        FUNC_1(VAR_5, VAR_2);

        return VAR_6;
    }

    VAR_5->IoStatus.Status = VAR_6;

    FUNC_3(VAR_5);
    return FUNC_0(VAR_4->attached_device, VAR_5);
}
