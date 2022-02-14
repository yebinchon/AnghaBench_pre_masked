
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_SIZE ;


 scalar_t__ VAR_0 ;

int
FUNC_0 (
    const char *VAR_1,
    const char *VAR_2,
    ACPI_SIZE VAR_3)
{


    for ( ; VAR_3-- && (*VAR_1 == *VAR_2); VAR_2++)
    {
        if (!*VAR_1++)
        {
            return (0);
        }
    }

    return ((VAR_3 == VAR_0) ? 0 : ((unsigned char) *VAR_1 -
        (unsigned char) *VAR_2));
}
