
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_SIZE ;


 scalar_t__ VAR_0 ;

int
FUNC_0 (
    void *VAR_1,
    void *VAR_2,
    ACPI_SIZE VAR_3)
{
    char *VAR_4 = (char *) VAR_1;
    char *VAR_5 = (char *) VAR_2;


    for ( ; VAR_3-- && (*VAR_4 == *VAR_5); VAR_4++, VAR_5++)
    {
    }

    return ((VAR_3 == VAR_0) ? 0 : ((unsigned char) *VAR_4 -
        (unsigned char) *VAR_5));
}
