
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4 (
    void)
{
    ACPI_STATUS VAR_5;


    FUNC_2 (VAR_3);


    VAR_5 = FUNC_3 (VAR_1);
    if (FUNC_1 (VAR_5))
    {
        FUNC_0 ((VAR_2, "Could not release AML Namespace mutex"));
    }
    VAR_5 = FUNC_3 (VAR_0);
    if (FUNC_1 (VAR_5))
    {
        FUNC_0 ((VAR_2, "Could not release AML Interpreter mutex"));
    }

    VAR_4;
}
