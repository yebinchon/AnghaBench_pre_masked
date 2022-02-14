
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;
typedef int ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_PHYSICAL_ADDRESS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

ACPI_STATUS
FUNC_1(
    ACPI_TABLE_HEADER *VAR_2,
    ACPI_PHYSICAL_ADDRESS *VAR_3,
    UINT32 *VAR_4)
{
    if (!VAR_2 || !VAR_3 || !VAR_4)
    {
        FUNC_0("Invalid parameter\n");
        return VAR_0;
    }


    *VAR_3 = 0;
    *VAR_4 = 0;

    return VAR_1;
}
