
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* Name; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_EXCEPTION_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ) ;

const char *
FUNC_3 (
    ACPI_STATUS VAR_1)
{
    const ACPI_EXCEPTION_INFO *VAR_2;


    FUNC_1 ();


    VAR_2 = FUNC_2 (VAR_1);
    if (!VAR_2)
    {


        FUNC_0 ((VAR_0,
            "Unknown exception code: 0x%8.8X", VAR_1));

        return ("UNKNOWN_STATUS_CODE");
    }

    return (VAR_2->Name);
}
