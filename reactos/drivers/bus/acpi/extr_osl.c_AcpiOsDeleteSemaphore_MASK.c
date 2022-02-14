
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;
typedef int ACPI_SEMAPHORE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char) ;

ACPI_STATUS
FUNC_2(
    ACPI_SEMAPHORE VAR_2)
{
    if (!VAR_2)
    {
        FUNC_0("Bad parameter\n");
        return VAR_0;
    }

    FUNC_1(VAR_2, 'LpcA');

    return VAR_1;
}
