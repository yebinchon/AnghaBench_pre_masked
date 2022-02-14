
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PKSPIN_LOCK ;
typedef int KSPIN_LOCK ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_SPINLOCK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int,char) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;

ACPI_STATUS
FUNC_3(
    ACPI_SPINLOCK *VAR_4)
{
    PKSPIN_LOCK VAR_5;

    if (!VAR_4)
    {
        FUNC_0("Bad parameter\n");
        return VAR_0;
    }

    VAR_5 = FUNC_1(VAR_3, sizeof(KSPIN_LOCK), 'LpcA');
    if (!VAR_5) return VAR_1;

    FUNC_2(VAR_5);

    *VAR_4 = (ACPI_SPINLOCK)VAR_5;

    return VAR_2;
}
