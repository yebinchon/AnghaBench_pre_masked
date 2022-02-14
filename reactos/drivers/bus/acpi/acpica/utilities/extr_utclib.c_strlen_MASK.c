
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;
typedef scalar_t__ ACPI_SIZE ;



ACPI_SIZE
FUNC_0 (
    const char *VAR_0)
{
    UINT32 VAR_1 = 0;




    while (*VAR_0)
    {
        VAR_1++;
        VAR_0++;
    }

    return (VAR_1);
}
