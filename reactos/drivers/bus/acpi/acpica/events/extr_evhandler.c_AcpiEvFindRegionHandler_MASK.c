
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ SpaceId; TYPE_2__* Next; } ;
struct TYPE_6__ {TYPE_1__ AddressSpace; } ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef scalar_t__ ACPI_ADR_SPACE_TYPE ;



ACPI_OPERAND_OBJECT *
FUNC_0 (
    ACPI_ADR_SPACE_TYPE VAR_0,
    ACPI_OPERAND_OBJECT *VAR_1)
{



    while (VAR_1)
    {


        if (VAR_1->AddressSpace.SpaceId == VAR_0)
        {
            return (VAR_1);
        }



        VAR_1 = VAR_1->AddressSpace.Next;
    }

    return (((void*)0));
}
