
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Type; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;
typedef TYPE_1__ ACPI_OBJECT ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int **) ;
 int FUNC_2 (TYPE_1__*,int **) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

ACPI_STATUS
FUNC_4 (
    ACPI_OBJECT *VAR_2,
    ACPI_OPERAND_OBJECT **VAR_3)
{
    ACPI_STATUS VAR_4;


    FUNC_0 (VAR_1);


    if (VAR_2->Type == VAR_0)
    {
        VAR_4 = FUNC_1 (
            VAR_2, VAR_3);
    }
    else
    {



        VAR_4 = FUNC_2 (VAR_2,
            VAR_3);
    }

    FUNC_3 (VAR_4);
}
