
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* RepairFunction ) (int *,int **) ;} ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_REPAIR_INFO ;
typedef int ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;
typedef int ACPI_EVALUATE_INFO ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;

ACPI_STATUS
FUNC_2 (
    ACPI_EVALUATE_INFO *VAR_0,
    ACPI_NAMESPACE_NODE *VAR_1,
    ACPI_STATUS VAR_2,
    ACPI_OPERAND_OBJECT **VAR_3)
{
    const ACPI_REPAIR_INFO *VAR_4;
    ACPI_STATUS VAR_5;




    VAR_4 = FUNC_0 (VAR_1);
    if (!VAR_4)
    {
        return (VAR_2);
    }

    VAR_5 = VAR_4->RepairFunction (VAR_0, VAR_3);
    return (VAR_5);
}
