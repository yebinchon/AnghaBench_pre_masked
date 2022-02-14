
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_SIZE ;



void *
FUNC_0 (
    void *VAR_0,
    const void *VAR_1,
    ACPI_SIZE VAR_2)
{
    char *VAR_3 = (char *) VAR_0;
    char *VAR_4 = (char *) VAR_1;


    if (VAR_4 > VAR_3)
    {


        while (VAR_2)
        {
            *VAR_3 = *VAR_4;
            VAR_3++;
            VAR_4++;
            VAR_2--;
        }
    }
    else if (VAR_4 < VAR_3)
    {


        VAR_3 = VAR_3 + VAR_2 - 1;
        VAR_4 = VAR_4 + VAR_2 - 1;
        while (VAR_2)
        {
            *VAR_3 = *VAR_4;
            VAR_3--;
            VAR_4--;
            VAR_2--;
        }
    }

    return (VAR_0);
}
