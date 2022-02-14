
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKSPIN_LOCK ;
typedef int KIRQL ;
typedef scalar_t__ ACPI_SPINLOCK ;
typedef int ACPI_CPU_FLAGS ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

ACPI_CPU_FLAGS
FUNC_3(
    ACPI_SPINLOCK VAR_1)
{
    KIRQL VAR_2;

    if ((VAR_2 = FUNC_2()) >= VAR_0)
    {
        FUNC_1((PKSPIN_LOCK)VAR_1);
    }
    else
    {
        FUNC_0((PKSPIN_LOCK)VAR_1, &VAR_2);
    }

    return (ACPI_CPU_FLAGS)VAR_2;
}
