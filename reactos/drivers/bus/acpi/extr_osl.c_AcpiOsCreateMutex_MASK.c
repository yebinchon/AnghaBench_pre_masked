
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFAST_MUTEX ;
typedef int FAST_MUTEX ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_MUTEX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int,char) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;

ACPI_STATUS
FUNC_3(
    ACPI_MUTEX *VAR_4)
{
    PFAST_MUTEX VAR_5;

    if (!VAR_4)
    {
        FUNC_0("Bad parameter\n");
        return VAR_0;
    }

    VAR_5 = FUNC_1(VAR_3, sizeof(FAST_MUTEX), 'LpcA');
    if (!VAR_5) return VAR_1;

    FUNC_2(VAR_5);

    *VAR_4 = (ACPI_MUTEX)VAR_5;

    return VAR_2;
}
