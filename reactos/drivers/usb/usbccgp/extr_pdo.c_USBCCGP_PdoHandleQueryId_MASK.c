
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int WCHAR ;
typedef void* ULONG_PTR ;
struct TYPE_23__ {scalar_t__ DeviceExtension; } ;
struct TYPE_15__ {scalar_t__ IdType; } ;
struct TYPE_16__ {TYPE_1__ QueryId; } ;
struct TYPE_22__ {TYPE_2__ Parameters; } ;
struct TYPE_18__ {void* Information; int Status; } ;
struct TYPE_21__ {TYPE_4__ IoStatus; } ;
struct TYPE_20__ {TYPE_3__* FunctionDescriptor; int NextDeviceObject; } ;
struct TYPE_19__ {int Length; int Buffer; } ;
struct TYPE_17__ {char* FunctionNumber; TYPE_5__ CompatibleId; TYPE_5__ HardwareId; } ;
typedef int PVOID ;
typedef TYPE_5__* PUNICODE_STRING ;
typedef TYPE_6__* PPDO_DEVICE_EXTENSION ;
typedef TYPE_7__* PIRP ;
typedef TYPE_8__* PIO_STACK_LOCATION ;
typedef TYPE_9__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef char* LPWSTR ;


 int FUNC_0 (void*) ;
 char* FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 TYPE_8__* FUNC_4 (TYPE_7__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (char*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 int FUNC_7 (int ,TYPE_7__*) ;
 int FUNC_8 (char*,char*,char*,...) ;
 int FUNC_9 (char*) ;

NTSTATUS
FUNC_10(
    PDEVICE_OBJECT VAR_8,
    PIRP VAR_9)
{
    PIO_STACK_LOCATION VAR_10;
    PUNICODE_STRING VAR_11 = ((void*)0);
    PPDO_DEVICE_EXTENSION VAR_12;
    NTSTATUS VAR_13;
    LPWSTR VAR_14;




    VAR_10 = FUNC_4(VAR_9);




    VAR_12 = (PPDO_DEVICE_EXTENSION)VAR_8->DeviceExtension;


    if (VAR_10->Parameters.QueryId.IdType == VAR_1)
    {



        VAR_13 = FUNC_7(VAR_12->NextDeviceObject, VAR_9);
        if (FUNC_5(VAR_13))
        {



            VAR_14 = FUNC_1(VAR_4, (FUNC_9((LPWSTR)VAR_9->IoStatus.Information) + 7) * sizeof(WCHAR));
            if (VAR_14)
            {



                FUNC_0(VAR_9->IoStatus.Information);
                FUNC_8(VAR_14, L"%s&MI_%02x", (LPWSTR)VAR_9->IoStatus.Information, VAR_12->FunctionDescriptor->FunctionNumber);
                FUNC_2("BusQueryDeviceID %S\n", VAR_14);

                FUNC_3((PVOID)VAR_9->IoStatus.Information);
                VAR_9->IoStatus.Information = (ULONG_PTR)VAR_14;
            }
            else
            {



                VAR_13 = VAR_5;
            }
        }
        return VAR_13;
    }
    else if (VAR_10->Parameters.QueryId.IdType == VAR_2)
    {



        VAR_11 = &VAR_12->FunctionDescriptor->HardwareId;
    }
    else if (VAR_10->Parameters.QueryId.IdType == VAR_3)
    {



        VAR_14 = FUNC_1(VAR_4, 5 * sizeof(WCHAR));
        if (!VAR_14)
        {



            return VAR_5;
        }




        FUNC_8(VAR_14, L"%04x", VAR_12->FunctionDescriptor->FunctionNumber);
        VAR_9->IoStatus.Information = (ULONG_PTR)VAR_14;
        return VAR_6;
    }
    else if (VAR_10->Parameters.QueryId.IdType == VAR_0)
    {



        VAR_11 = &VAR_12->FunctionDescriptor->CompatibleId;
    }
    else
    {



        return VAR_9->IoStatus.Status;
    }




    FUNC_0(VAR_11 != ((void*)0));




    VAR_14 = FUNC_1(VAR_4, VAR_11->Length + sizeof(WCHAR));
    if (!VAR_14)
    {



        return VAR_5;
    }




    FUNC_6(VAR_14, VAR_11->Buffer, VAR_11->Length);
    VAR_14[VAR_11->Length / sizeof(WCHAR)] = VAR_7;
    VAR_9->IoStatus.Information = (ULONG_PTR)VAR_14;

    return VAR_6;
}
