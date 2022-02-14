
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {scalar_t__ QuadPart; } ;
typedef void* PVOID ;
typedef TYPE_1__ PHYSICAL_ADDRESS ;
typedef int ACPI_SIZE ;
typedef scalar_t__ ACPI_PHYSICAL_ADDRESS ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (TYPE_1__,int ,int ) ;
 int VAR_0 ;

void *
FUNC_3 (
    ACPI_PHYSICAL_ADDRESS VAR_1,
    ACPI_SIZE VAR_2)
{
    PHYSICAL_ADDRESS VAR_3;
    PVOID VAR_4;

    FUNC_0("AcpiOsMapMemory(phys 0x%p  size 0x%X)\n", VAR_1, VAR_2);

    VAR_3.QuadPart = (ULONG)VAR_1;
    VAR_4 = FUNC_2(VAR_3, VAR_2, VAR_0);
    if (!VAR_4)
    {
        FUNC_1("Mapping failed\n");
    }

    return VAR_4;
}
