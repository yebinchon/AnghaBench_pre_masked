
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* Next; } ;
struct TYPE_6__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_GENERIC_STATE ;


 int FUNC_0 () ;

ACPI_GENERIC_STATE *
FUNC_1 (
    ACPI_GENERIC_STATE **VAR_0)
{
    ACPI_GENERIC_STATE *VAR_1;


    FUNC_0 ();




    VAR_1 = *VAR_0;
    if (VAR_1)
    {


        *VAR_0 = VAR_1->Common.Next;
    }

    return (VAR_1);
}
