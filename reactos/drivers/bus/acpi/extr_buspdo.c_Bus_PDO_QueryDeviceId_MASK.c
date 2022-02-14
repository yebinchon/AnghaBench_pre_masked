
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int temp ;
struct TYPE_24__ {char* hardware_id; char* unique_id; char* device_name; TYPE_2__* cid_list; } ;
struct TYPE_23__ {int compatible_ids; int hardware_id; int unique_id; } ;
struct acpi_device {TYPE_7__ pnp; TYPE_6__ flags; } ;
typedef char WCHAR ;
typedef void* ULONG_PTR ;
typedef int ULONG ;
struct TYPE_22__ {int Status; void* Information; } ;
struct TYPE_26__ {TYPE_5__ IoStatus; } ;
struct TYPE_25__ {int AcpiHandle; } ;
struct TYPE_20__ {int IdType; } ;
struct TYPE_21__ {TYPE_3__ QueryId; } ;
struct TYPE_19__ {int Count; TYPE_1__* Ids; } ;
struct TYPE_18__ {char* String; } ;
struct TYPE_17__ {int Length; char* Buffer; } ;
struct TYPE_16__ {TYPE_4__ Parameters; } ;
typedef char* PWCHAR ;
typedef TYPE_8__* PPDO_DEVICE_DATA ;
typedef TYPE_9__* PIRP ;
typedef TYPE_10__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;






 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (int ,int,char) ;
 TYPE_10__* FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_0 ;
 TYPE_11__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 int FUNC_6 (int ,struct acpi_device**) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*,...) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;

NTSTATUS
FUNC_11(
     PPDO_DEVICE_DATA VAR_7,
      PIRP VAR_8 )
{
    PIO_STACK_LOCATION VAR_9;
    PWCHAR VAR_10, VAR_11;
    WCHAR VAR_12[256];
    ULONG VAR_13, VAR_14;
    NTSTATUS VAR_15 = VAR_5;
    struct acpi_device *VAR_16;

    FUNC_4 ();

    VAR_9 = FUNC_2 (VAR_8);

    switch (VAR_9->Parameters.QueryId.IdType) {

    case 130:



        if (VAR_7->AcpiHandle)
        {
            FUNC_6(VAR_7->AcpiHandle, &VAR_16);

            if (FUNC_7(VAR_16->pnp.hardware_id, "Processor") == 0)
            {
                VAR_13 = FUNC_10(VAR_2);
                FUNC_9(VAR_12, VAR_2);
            }
            else
            {
                VAR_13 = FUNC_8(VAR_12,
                                  L"ACPI\\%hs",
                                  VAR_16->pnp.hardware_id);
            }
        }
        else
        {




            VAR_13 = FUNC_8(VAR_12,
                              L"ACPI\\FixedButton");
        }

        VAR_12[VAR_13++] = VAR_6;

        FUNC_3(VAR_13 * sizeof(WCHAR) <= sizeof(VAR_12));

        VAR_10 = FUNC_1(VAR_0, VAR_13 * sizeof(WCHAR), 'IpcA');

        if (!VAR_10) {
           VAR_15 = VAR_3;
           break;
        }

        FUNC_5 (VAR_10, VAR_12, VAR_13 * sizeof(WCHAR));
        VAR_8->IoStatus.Information = (ULONG_PTR) VAR_10;
        FUNC_0("BusQueryDeviceID: %ls\n",VAR_10);
        break;

    case 128:




        if(VAR_7->AcpiHandle)
        {
           FUNC_6(VAR_7->AcpiHandle, &VAR_16);

           if (VAR_16->flags.unique_id)
              VAR_13 = FUNC_8(VAR_12,
                                L"%hs",
                                VAR_16->pnp.unique_id);
           else

              VAR_13 = FUNC_8(VAR_12, L"%ls", L"0");
        }
        else
        {

           VAR_13 = FUNC_8(VAR_12, L"%ls", L"0");
        }

        VAR_12[VAR_13++] = VAR_6;

        FUNC_3(VAR_13 * sizeof(WCHAR) <= sizeof(VAR_12));

        VAR_10 = FUNC_1(VAR_0, VAR_13 * sizeof(WCHAR), 'IpcA');
        if (!VAR_10) {
           VAR_15 = VAR_3;
           break;
        }

        FUNC_5 (VAR_10, VAR_12, VAR_13 * sizeof (WCHAR));
        FUNC_0("BusQueryInstanceID: %ls\n",VAR_10);
        VAR_8->IoStatus.Information = (ULONG_PTR) VAR_10;
        break;

    case 129:


        VAR_13 = 0;
        VAR_15 = VAR_4;


        if (VAR_7->AcpiHandle)
        {
            FUNC_6(VAR_7->AcpiHandle, &VAR_16);

            if (!VAR_16->flags.hardware_id)
            {

                break;
            }

            FUNC_0("Device name: %s\n", VAR_16->pnp.device_name);
            FUNC_0("Hardware ID: %s\n", VAR_16->pnp.hardware_id);

            if (FUNC_7(VAR_16->pnp.hardware_id, "Processor") == 0)
            {
                VAR_13 = VAR_1.Length / sizeof(WCHAR);
                VAR_11 = VAR_1.Buffer;
            }
            else
            {
                VAR_13 += FUNC_8(&VAR_12[VAR_13],
                                   L"ACPI\\%hs",
                                   VAR_16->pnp.hardware_id);
                VAR_12[VAR_13++] = VAR_6;

                VAR_13 += FUNC_8(&VAR_12[VAR_13],
                                   L"*%hs",
                                   VAR_16->pnp.hardware_id);
                VAR_12[VAR_13++] = VAR_6;
                VAR_12[VAR_13++] = VAR_6;
                VAR_11 = VAR_12;
            }
        }
        else
        {
            VAR_13 += FUNC_8(&VAR_12[VAR_13],
                               L"ACPI\\FixedButton");
            VAR_12[VAR_13++] = VAR_6;

            VAR_13 += FUNC_8(&VAR_12[VAR_13],
                               L"*FixedButton");
            VAR_12[VAR_13++] = VAR_6;
            VAR_12[VAR_13++] = VAR_6;
            VAR_11 = VAR_12;
        }

        FUNC_3(VAR_13 * sizeof(WCHAR) <= sizeof(VAR_12));

        VAR_10 = FUNC_1(VAR_0, VAR_13 * sizeof(WCHAR), 'IpcA');

        if (!VAR_10) {
           VAR_15 = VAR_3;
           break;
        }

        FUNC_5 (VAR_10, VAR_11, VAR_13 * sizeof(WCHAR));
        VAR_8->IoStatus.Information = (ULONG_PTR) VAR_10;
        FUNC_0("BusQueryHardwareIDs: %ls\n",VAR_10);
        VAR_15 = VAR_5;
        break;

    case 131:


        VAR_13 = 0;
        VAR_15 = VAR_4;


        if (VAR_7->AcpiHandle)
        {
            FUNC_6(VAR_7->AcpiHandle, &VAR_16);

            if (!VAR_16->flags.hardware_id)
            {

                break;
            }

            FUNC_0("Device name: %s\n", VAR_16->pnp.device_name);
            FUNC_0("Hardware ID: %s\n", VAR_16->pnp.hardware_id);

            if (FUNC_7(VAR_16->pnp.hardware_id, "Processor") == 0)
            {
                VAR_13 += FUNC_8(&VAR_12[VAR_13],
                                   L"ACPI\\%hs",
                                   VAR_16->pnp.hardware_id);
                VAR_12[VAR_13++] = VAR_6;

                VAR_13 += FUNC_8(&VAR_12[VAR_13],
                                   L"*%hs",
                                   VAR_16->pnp.hardware_id);
                VAR_12[VAR_13++] = VAR_6;
                VAR_12[VAR_13++] = VAR_6;
            }
            else if (VAR_16->flags.compatible_ids)
            {
                for (VAR_14 = 0; VAR_14 < VAR_16->pnp.cid_list->Count; VAR_14++)
                {
                    VAR_13 += FUNC_8(&VAR_12[VAR_13],
                                   L"ACPI\\%hs",
                                   VAR_16->pnp.cid_list->Ids[VAR_14].String);
                    VAR_12[VAR_13++] = VAR_6;

                    VAR_13 += FUNC_8(&VAR_12[VAR_13],
                                   L"*%hs",
                                   VAR_16->pnp.cid_list->Ids[VAR_14].String);
                    VAR_12[VAR_13++] = VAR_6;
                }

                VAR_12[VAR_13++] = VAR_6;
            }
            else
            {

                break;
            }

            FUNC_3(VAR_13 * sizeof(WCHAR) <= sizeof(VAR_12));

            VAR_10 = FUNC_1(VAR_0, VAR_13 * sizeof(WCHAR), 'IpcA');
            if (!VAR_10)
            {
                VAR_15 = VAR_3;
                break;
            }

            FUNC_5 (VAR_10, VAR_12, VAR_13 * sizeof(WCHAR));
            VAR_8->IoStatus.Information = (ULONG_PTR) VAR_10;
            FUNC_0("BusQueryCompatibleIDs: %ls\n",VAR_10);
            VAR_15 = VAR_5;
        }
        break;

    default:
        VAR_15 = VAR_8->IoStatus.Status;
    }
    return VAR_15;
}
