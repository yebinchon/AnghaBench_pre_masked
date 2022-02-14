
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_SIZE ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (
    char *VAR_0,
    ACPI_SIZE VAR_1)
{

    while (VAR_1 && *VAR_0)
    {
        if (!FUNC_0 ((int) *VAR_0))
        {
            *VAR_0 = '?';
        }

        VAR_0++;
        VAR_1--;
    }
}
