
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_SIZE ;



void *
FUNC_0 (
    void *VAR_0,
    int VAR_1,
    ACPI_SIZE VAR_2)
{
    char *VAR_3 = (char *) VAR_0;


    while (VAR_2)
    {
        *VAR_3 = (char) VAR_1;
        VAR_3++;
        VAR_2--;
    }

    return (VAR_0);
}
