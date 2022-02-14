
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_OPERAND_OBJECT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5 (
    ACPI_OPERAND_OBJECT *VAR_5)
{
    FUNC_1 (VAR_3, VAR_5);




    if (FUNC_2 (VAR_5) != VAR_0)
    {
        FUNC_0 ((VAR_1,
            "%p is not an ACPI Operand object [%s]", VAR_5,
            FUNC_4 (VAR_5)));
        VAR_4;
    }

    (void) FUNC_3 (VAR_2, VAR_5);
    VAR_4;
}
