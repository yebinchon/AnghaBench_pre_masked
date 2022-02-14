
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_SIZE ;


 scalar_t__ FUNC_0 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;

char *
FUNC_2 (
    char *VAR_0,
    char *VAR_1)
{
    ACPI_SIZE VAR_2;


    VAR_2 = FUNC_1 (VAR_1);
    if (!VAR_2)
    {
        return (VAR_0);
    }

    while (FUNC_1 (VAR_0) >= VAR_2)
    {
        if (FUNC_0 (VAR_0, VAR_1, VAR_2) == 0)
        {
            return (VAR_0);
        }
        VAR_0++;
    }

    return (((void*)0));
}
