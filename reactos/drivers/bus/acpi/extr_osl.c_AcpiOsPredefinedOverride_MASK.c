
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * ACPI_STRING ;
typedef int ACPI_STATUS ;
typedef int ACPI_PREDEFINED_NAMES ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

ACPI_STATUS
FUNC_1(
    const ACPI_PREDEFINED_NAMES *VAR_2,
    ACPI_STRING *VAR_3)
{
    if (!VAR_2 || !VAR_3)
    {
        FUNC_0("Invalid parameter\n");
        return VAR_0;
    }


    *VAR_3 = ((void*)0);

    return VAR_1;
}
