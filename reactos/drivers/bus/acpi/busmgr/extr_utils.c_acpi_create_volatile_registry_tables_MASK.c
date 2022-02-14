
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int UINT32 ;
struct TYPE_7__ {int Revision; scalar_t__ RsdtPhysicalAddress; scalar_t__ XsdtPhysicalAddress; } ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int * HANDLE ;
typedef TYPE_1__ ACPI_TABLE_RSDP ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_PHYSICAL_ADDRESS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,TYPE_1__**) ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,int *,int,int *,int *) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *,int ,int *,int ,int *) ;
 int FUNC_11 (int *,TYPE_1__*,char*) ;

NTSTATUS
FUNC_12(void)
{
    OBJECT_ATTRIBUTES VAR_12;
    UNICODE_STRING VAR_13 = FUNC_8(L"\\Registry\\Machine\\HARDWARE\\ACPI");
    HANDLE VAR_14 = ((void*)0);
    NTSTATUS VAR_15;
    ACPI_STATUS VAR_16;
    ACPI_TABLE_HEADER *VAR_17;
    ACPI_PHYSICAL_ADDRESS VAR_18;
    ACPI_TABLE_RSDP *VAR_19;
    ACPI_PHYSICAL_ADDRESS VAR_20;
    UINT32 VAR_21;


    FUNC_6(&VAR_12,
                               &VAR_13,
                               VAR_7 | VAR_8,
                               ((void*)0),
                               ((void*)0));
    VAR_15 = FUNC_10(&VAR_14,
                         VAR_6,
                         &VAR_12,
                         0,
                         ((void*)0),
                         VAR_9,
                         ((void*)0));
    if (!FUNC_7(VAR_15))
    {
        FUNC_5("ZwCreateKey() for ACPI failed (Status 0x%08lx)\n", VAR_15);
        return VAR_15;
    }

    VAR_16 = FUNC_1(VAR_1, 0, &VAR_17);
    if (FUNC_0(VAR_16))
    {
        FUNC_5("AcpiGetTable() for DSDT failed (Status 0x%08lx)\n", VAR_16);
        VAR_15 = VAR_11;
        goto done;
    }

    VAR_15 = FUNC_11(VAR_14, VAR_17, L"DSDT");
    if (!FUNC_7(VAR_15))
    {
        FUNC_5("acpi_dump_table_to_registry() for DSDT failed (Status 0x%08lx)\n", VAR_15);
        goto done;
    }

    VAR_16 = FUNC_1(VAR_2, 0, &VAR_17);
    if (FUNC_0(VAR_16))
    {
        FUNC_5("AcpiGetTable() for FACS failed (Status 0x%08lx)\n", VAR_16);
        VAR_15 = VAR_11;
        goto done;
    }

    VAR_15 = FUNC_11(VAR_14, VAR_17, L"FACS");
    if (!FUNC_7(VAR_15))
    {
        FUNC_5("acpi_dump_table_to_registry() for FACS failed (Status 0x%08lx)\n", VAR_15);
        goto done;
    }

    VAR_16 = FUNC_1(VAR_3, 0, &VAR_17);
    if (FUNC_0(VAR_16))
    {
        FUNC_5("AcpiGetTable() for FADT failed (Status 0x%08lx)\n", VAR_16);
        VAR_15 = VAR_11;
        goto done;
    }

    VAR_15 = FUNC_11(VAR_14, VAR_17, L"FADT");
    if (!FUNC_7(VAR_15))
    {
        FUNC_5("acpi_dump_table_to_registry() for FADT failed (Status 0x%08lx)\n", VAR_15);
        goto done;
    }

    VAR_18 = FUNC_2();

    VAR_19 = FUNC_3(VAR_18, sizeof(ACPI_TABLE_RSDP));
    if (!VAR_19)
    {
        FUNC_5("AcpiOsMapMemory() failed\n");
        VAR_15 = VAR_10;
        goto done;
    }

    if ((VAR_19->Revision > 1) &&
        VAR_19->XsdtPhysicalAddress &&
        !VAR_5)
    {





        VAR_20 = (ACPI_PHYSICAL_ADDRESS)VAR_19->XsdtPhysicalAddress;
        VAR_21 = VAR_4;
    }
    else
    {

        VAR_20 = (ACPI_PHYSICAL_ADDRESS)VAR_19->RsdtPhysicalAddress;
        VAR_21 = VAR_0;
    }




    FUNC_4(VAR_19, sizeof(ACPI_TABLE_RSDP));
    VAR_17 = FUNC_3(VAR_20, VAR_21);
    if (!VAR_17)
    {
        FUNC_5("AcpiOsMapMemory() failed\n");
        VAR_15 = VAR_10;
        goto done;
    }

    VAR_15 = FUNC_11(VAR_14, VAR_17, L"RSDT");
    FUNC_4(VAR_17, VAR_21);
    if (!FUNC_7(VAR_15))
    {
        FUNC_5("acpi_dump_table_to_registry() for RSDT failed (Status 0x%08lx)\n", VAR_15);
    }

done:
    FUNC_9(VAR_14);
    return VAR_15;
}
