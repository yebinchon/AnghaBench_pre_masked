
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int DescriptorType; } ;
struct TYPE_6__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;

ACPI_GENERIC_STATE *
FUNC_2 (
    void)
{
    ACPI_GENERIC_STATE *VAR_2;


    FUNC_0 ();


    VAR_2 = FUNC_1 (VAR_1);
    if (VAR_2)
    {

        VAR_2->Common.DescriptorType = VAR_0;
    }

    return (VAR_2);
}
