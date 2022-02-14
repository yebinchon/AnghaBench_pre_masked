
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKSPIN_LOCK ;
typedef scalar_t__ KIRQL ;
typedef scalar_t__ ACPI_SPINLOCK ;
typedef int ACPI_CPU_FLAGS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;

void
FUNC_2(
    ACPI_SPINLOCK VAR_1,
    ACPI_CPU_FLAGS VAR_2)
{
    KIRQL VAR_3 = (KIRQL)VAR_2;

    if (VAR_3 >= VAR_0)
    {
        FUNC_1((PKSPIN_LOCK)VAR_1);
    }
    else
    {
        FUNC_0((PKSPIN_LOCK)VAR_1, VAR_3);
    }
}
