
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


typedef int WCHAR ;
typedef int ULONG_PTR ;
struct TYPE_11__ {int DeviceTextType; } ;
struct TYPE_12__ {TYPE_1__ QueryDeviceText; } ;
struct TYPE_16__ {TYPE_2__ Parameters; } ;
struct TYPE_13__ {int Information; int Status; } ;
struct TYPE_15__ {TYPE_3__ IoStatus; } ;
struct TYPE_14__ {int AcpiHandle; int HardwareIDs; } ;
typedef char* PWCHAR ;
typedef TYPE_4__* PPDO_DEVICE_DATA ;
typedef TYPE_5__* PIRP ;
typedef TYPE_6__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,char*) ;

 char* FUNC_1 (int ,int,char) ;
 TYPE_6__* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*) ;

NTSTATUS
FUNC_7(
     PPDO_DEVICE_DATA VAR_4,
      PIRP VAR_5 )
{
    PWCHAR VAR_6, VAR_7;
    PIO_STACK_LOCATION VAR_8;
    NTSTATUS VAR_9 = VAR_5->IoStatus.Status;
    FUNC_3 ();

    VAR_8 = FUNC_2 (VAR_5);

    switch (VAR_8->Parameters.QueryDeviceText.DeviceTextType) {

    case 128:

        if (!VAR_5->IoStatus.Information) {
            if (FUNC_6 (VAR_4->HardwareIDs, L"PNP000") != 0)
                VAR_7 = L"Programmable interrupt controller";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP010") != 0)
                VAR_7 = L"System timer";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP020") != 0)
                VAR_7 = L"DMA controller";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP03") != 0)
                VAR_7 = L"Keyboard";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP040") != 0)
                VAR_7 = L"Parallel port";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP05") != 0)
                VAR_7 = L"Serial port";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP06") != 0)
                VAR_7 = L"Disk controller";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP07") != 0)
                VAR_7 = L"Disk controller";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP09") != 0)
                VAR_7 = L"Display adapter";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP0A0") != 0)
                VAR_7 = L"Bus controller";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP0E0") != 0)
                VAR_7 = L"PCMCIA controller";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP0F") != 0)
                VAR_7 = L"Mouse device";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP8") != 0)
                VAR_7 = L"Network adapter";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNPA0") != 0)
                VAR_7 = L"SCSI controller";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNPB0") != 0)
                VAR_7 = L"Multimedia device";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNPC00") != 0)
                VAR_7 = L"Modem";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP0C0C") != 0)
                VAR_7 = L"Power Button";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP0C0E") != 0)
                VAR_7 = L"Sleep Button";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP0C0D") != 0)
                VAR_7 = L"Lid Switch";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP0C09") != 0)
                VAR_7 = L"ACPI Embedded Controller";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP0C0B") != 0)
                VAR_7 = L"ACPI Fan";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP0A03") != 0 ||
                     FUNC_6(VAR_4->HardwareIDs, L"PNP0A08") != 0)
                VAR_7 = L"PCI Root Bridge";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP0C0A") != 0)
                VAR_7 = L"ACPI Battery";
            else if (FUNC_6(VAR_4->HardwareIDs, L"PNP0C0F") != 0)
                VAR_7 = L"PCI Interrupt Link";
            else if (FUNC_6(VAR_4->HardwareIDs, L"ACPI_PWR") != 0)
                VAR_7 = L"ACPI Power Resource";
            else if (FUNC_6(VAR_4->HardwareIDs, L"Processor") != 0)
            {
                if (VAR_1 != ((void*)0))
                    VAR_7 = VAR_1;
                else
                    VAR_7 = L"Processor";
            }
            else if (FUNC_6(VAR_4->HardwareIDs, L"ThermalZone") != 0)
                VAR_7 = L"ACPI Thermal Zone";
            else if (FUNC_6(VAR_4->HardwareIDs, L"ACPI0002") != 0)
                VAR_7 = L"Smart Battery";
            else if (FUNC_6(VAR_4->HardwareIDs, L"ACPI0003") != 0)
                VAR_7 = L"AC Adapter";



            else if (!VAR_4->AcpiHandle)
                VAR_7 = L"ACPI Fixed Feature Button";
            else
                VAR_7 = L"Other ACPI device";

            VAR_6 = FUNC_1(VAR_0, (FUNC_5(VAR_7) + 1) * sizeof(WCHAR), 'IpcA');

            if (!VAR_6) {
                VAR_9 = VAR_2;
                break;
            }

            FUNC_4 (VAR_6, VAR_7, (FUNC_5(VAR_7) + 1) * sizeof(WCHAR));

            FUNC_0("\tDeviceTextDescription :%ws\n", VAR_6);

            VAR_5->IoStatus.Information = (ULONG_PTR) VAR_6;
            VAR_9 = VAR_3;
        }
        break;

    default:
        break;
    }

    return VAR_9;

}
