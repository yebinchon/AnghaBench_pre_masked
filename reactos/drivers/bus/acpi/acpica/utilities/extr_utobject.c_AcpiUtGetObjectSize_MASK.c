
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ Type; } ;
struct TYPE_8__ {TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;

ACPI_STATUS
FUNC_4 (
    ACPI_OPERAND_OBJECT *VAR_2,
    ACPI_SIZE *VAR_3)
{
    ACPI_STATUS VAR_4;


    FUNC_0 ();


    if ((FUNC_1 (VAR_2) ==
            VAR_0) &&
        (VAR_2->Common.Type == VAR_1))
    {
        VAR_4 = FUNC_2 (VAR_2, VAR_3);
    }
    else
    {
        VAR_4 = FUNC_3 (VAR_2, VAR_3);
    }

    return (VAR_4);
}
