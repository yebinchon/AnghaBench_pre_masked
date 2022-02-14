
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int) ;

ACPI_STATUS
FUNC_2 (
    char *VAR_2,
    UINT8 *VAR_3)
{



    if (!FUNC_1 ((int) VAR_2[0]) ||
        !FUNC_1 ((int) VAR_2[1]))
    {
        return (VAR_0);
    }

    *VAR_3 =
        FUNC_0 (VAR_2[1]) |
        (FUNC_0 (VAR_2[0]) << 4);

    return (VAR_1);
}
