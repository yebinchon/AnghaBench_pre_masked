
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int State; int DescriptorType; } ;
struct TYPE_6__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 () ;

ACPI_GENERIC_STATE *
FUNC_2 (
    void)
{
    ACPI_GENERIC_STATE *VAR_2;


    FUNC_0 ();




    VAR_2 = FUNC_1 ();
    if (!VAR_2)
    {
        return (((void*)0));
    }



    VAR_2->Common.DescriptorType = VAR_1;
    VAR_2->Common.State = VAR_0;

    return (VAR_2);
}
