
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_SIZE ;



char *
FUNC_0 (
    char *VAR_0,
    const char *VAR_1,
    ACPI_SIZE VAR_2)
{
    char *VAR_3 = VAR_0;




    for (VAR_3 = VAR_0;
        VAR_2 && (VAR_2--, (*VAR_3++ = *VAR_1++)); )
    {;}



    while (VAR_2--)
    {
        *VAR_3 = 0;
        VAR_3++;
    }



    return (VAR_0);
}
