
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_5 (scalar_t__) ;

ACPI_STATUS
FUNC_6 (
    void)
{
    ACPI_STATUS VAR_12;


    FUNC_2 (VAR_9);




    if (VAR_8)
    {
        FUNC_5 (VAR_3);
    }



    VAR_12 = FUNC_3 (VAR_0,
        VAR_4, ((void*)0));







    VAR_7 = VAR_10;
    if (VAR_12 == VAR_2)
    {
        FUNC_0 ((VAR_1,
            "No response from Global Lock hardware, disabling lock"));

        FUNC_5 (VAR_3);
    }

    VAR_12 = FUNC_4 (&VAR_6);
    if (FUNC_1 (VAR_12))
    {
        FUNC_5 (VAR_12);
    }

    VAR_5 = VAR_10;
    VAR_7 = VAR_11;
    FUNC_5 (VAR_12);
}
