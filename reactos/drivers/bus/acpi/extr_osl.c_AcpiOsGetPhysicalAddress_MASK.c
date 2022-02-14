
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ PHYSICAL_ADDRESS ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_PHYSICAL_ADDRESS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__ FUNC_1 (void*) ;

ACPI_STATUS
FUNC_2(
    void *VAR_2,
    ACPI_PHYSICAL_ADDRESS *VAR_3)
{
    PHYSICAL_ADDRESS VAR_4;

    if (!VAR_2 || !VAR_3)
    {
        FUNC_0("Bad parameter\n");
        return VAR_0;
    }

    VAR_4 = FUNC_1(VAR_2);

    *VAR_3 = (ACPI_PHYSICAL_ADDRESS)VAR_4.QuadPart;

    return VAR_1;
}
