
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ Type; } ;
struct TYPE_12__ {TYPE_1__ Common; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    ACPI_OPERAND_OBJECT *VAR_4,
    ACPI_OPERAND_OBJECT **VAR_5,
    ACPI_WALK_STATE *VAR_6)
{
    ACPI_STATUS VAR_7 = VAR_2;


    FUNC_1 (VAR_3);




    *VAR_5 = FUNC_4 (VAR_4->Common.Type);
    if (!*VAR_5)
    {
        FUNC_6 (VAR_1);
    }



    if (VAR_4->Common.Type == VAR_0)
    {
        VAR_7 = FUNC_2 (
            VAR_4, *VAR_5, VAR_6);
    }
    else
    {
        VAR_7 = FUNC_3 (VAR_4, *VAR_5);
    }



    if (FUNC_0 (VAR_7))
    {
        FUNC_5 (*VAR_5);
    }

    FUNC_6 (VAR_7);
}
