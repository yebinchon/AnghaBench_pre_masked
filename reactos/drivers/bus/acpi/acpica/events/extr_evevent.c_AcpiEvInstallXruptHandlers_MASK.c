
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
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;

ACPI_STATUS
FUNC_6 (
    void)
{
    ACPI_STATUS VAR_6;


    FUNC_2 (VAR_4);




    if (VAR_3)
    {
        FUNC_5 (VAR_1);
    }



    VAR_6 = FUNC_4 ();
    if (FUNC_1 (VAR_6))
    {
        FUNC_0 ((VAR_0, VAR_6,
            "Unable to install System Control Interrupt handler"));
        FUNC_5 (VAR_6);
    }



    VAR_6 = FUNC_3 ();
    if (FUNC_1 (VAR_6))
    {
        FUNC_0 ((VAR_0, VAR_6,
            "Unable to initialize Global Lock handler"));
        FUNC_5 (VAR_6);
    }

    VAR_2 = VAR_5;
    FUNC_5 (VAR_6);
}
